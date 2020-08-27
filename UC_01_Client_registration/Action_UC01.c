Action_UC01()
{
  char *VtsServer = "e1fb0127c9a8.eu.ngrok.io"; //IP
  int nPort = 80; //port instance
  
  
  
  web_set_sockets_option("SSL_VERSION", "TLS1.2");

  web_url("loadtest.uxcrowd.ru", 
    "URL=https://loadtest.uxcrowd.ru/", 
    "TargetFrame=", 
    "Resource=0", 
    "Referer=", 
    "Snapshot=t43.inf", 
    "Mode=HTML",
    LAST);
  
  web_reg_save_param_regexp (
    "ParamName=XSRF-TOKEN",
    "RegExp=XSRF-TOKEN=(.+);",
     LAST);
  
    web_url("ru.json", 
    "URL=https://loadtest.uxcrowd.ru/assets/lang/ru.json", 
    "TargetFrame=", 
    "Resource=0", 
    "RecContentType=application/json", 
    "Referer=https://loadtest.uxcrowd.ru/", 
    "Snapshot=t2.inf", 
    "Mode=HTML", 
    EXTRARES, 
    "Url=/api/account", ENDITEM, 
    LAST);
  
  web_add_auto_header("X-XSRF-TOKEN", 
    "{XSRF-TOKEN}");
  

  web_url("loadtest.uxcrowd.ru_2", 
    "URL=https://loadtest.uxcrowd.ru/", 
    "TargetFrame=", 
    "Resource=0", 
    "Referer=https://loadtest.uxcrowd.ru/", 
    "Snapshot=t49.inf", 
    "Mode=HTML", 
    LAST);
  
  web_custom_request("register", 
    "URL=https://loadtest.uxcrowd.ru/api/register", 
    "Method=POST", 
    "TargetFrame=", 
    "Resource=0", 
    "Referer=https://loadtest.uxcrowd.ru/", 
    "Snapshot=t59.inf", 
    "Mode=HTML", 
    "EncType=application/json;charset=UTF-8", 
    "Body={\"name\":\"someName\",\"position\":\"any\",\"company\":\"any.company\",\"email\":\"troll{RandNum}@enayu.com\",\"telNumber\":\"+7 968 706-80-38\",\"site\":\"http://google.com/blabla\",\"role\":\"ROLE_CUSTOMER\",\"tariffType\":\"PROJECT\"}", 
    LAST);
  
 lr_db_connect("StepName=connectBD",
        "ConnectionName=connection",
        "ConnectionString=Driver={PostgreSQL Unicode};Database=do-prod;Server=loadtest.uxcrowd.ru;Port=5432;Uid=do-prod;Pwd=do-prod;",
        "ConnectionType=ODBC",
        LAST);
    
    lr_db_executeSQLStatement("StepName=updatePassword", 
         "ConnectionName=connection", 
         "SQLStatement=update users set password = '$2a$10$lDyjp2iJ2HhWwrDHI5q37O32CIVqENgrztOCxGyCoJqT7TbxzXX92' where email = 'troll{RandNum}@enayu.com';",
         "DatasetName=MyDataset",
         LAST );
    
  lr_db_executeSQLStatement("StepName=updateTariffType", 
                      "ConnectionName=connection", 
                      "SQLStatement=update customer_tariff_link set customer_tariff_id = (select id from customer_tariff where name = 'BUSINESS'), our_testers_remain = 99, their_testers_remain = -1, active = true, end_date = current_date + interval '3 month' where customer_id = (select id from users where email = 'troll{RandNum}@enayu.com');",
                      "DatasetName=MyDataset",
                      LAST );
  
  lrvtc_connect(VtsServer,nPort,VTOPT_KEEP_ALIVE); //vts connection

  lrvtc_send_message("c_username", "troll{RandNum}@enayu.com");//add to column db_clients last value raw_clients

  lr_db_disconnect("StepName=Disconnect", 
        "ConnectionName=connection", LAST );
  
  lrvtc_disconnect();//disconnect vts

  return 0;
}