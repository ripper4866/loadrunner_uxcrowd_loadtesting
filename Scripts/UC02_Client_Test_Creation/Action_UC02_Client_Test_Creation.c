Action_UC02_Client_Test_Creation()
{
//	char *VtsServer = "localhost";
//	int nPort = 8888;
	
	char *VtsServer = "http://e1fb0127c9a8.eu.ngrok.io";
	int nPort = 80;
	lrvtc_connect(VtsServer,nPort,VTOPT_KEEP_ALIVE); // vts connection
	
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
web_url("loadtest.uxcrowd.ru", 
    "URL=https://loadtest.uxcrowd.ru/", 
    "TargetFrame=", 
    "Resource=0", 
    "RecContentType=text/html", 
    "Referer=", 
    "Snapshot=t177.inf", 
    "Mode=HTML",  
    LAST);

  web_reg_save_param_ex("ParamName=XSRF-TOKEN", "LB/IC=XSRF-TOKEN=", "RB/IC=;",LAST);



// token extraction

//	lr_continue_on_error(1);
//	web_url("loadtest.uxcrowd.ru", 
//		"URL=https://loadtest.uxcrowd.ru/api/account", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=", 
//		"Snapshot=t297.inf", 
//		"Mode=HTML", 
//		LAST);
//	lr_continue_on_error(0);

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

//  web_add_auto_header("X-XSRF-TOKEN", "{XSRF-TOKEN}");
  web_add_auto_header("X-XSRF-TOKEN", 
    "{XSRF-TOKEN}");

//TR01
	
	lr_start_transaction("UC02_TR01_login");
	
//	lr_save_string("mattjeevas","c_username");
	lrvtc_retrieve_message("c_username");
	
	// second token extraction
	web_reg_save_param_ex("ParamName=XSRF-TOKEN", "LB/IC=XSRF-TOKEN=", "RB/IC=; Path", "Ordinal=2",LAST);
	
	web_submit_data("authentication", 
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={c_username}", ENDITEM, 
		"Name=password", "Value={c_password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	
	// adding header
	web_add_auto_header("X-XSRF-TOKEN", "{XSRF-TOKEN}");

	web_url("account", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		LAST);

	web_url("list-orders", 
		"URL=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("orders", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t258.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":0,\"size\":10,\"sort\":[\"startDate\"]}", 
		LAST);

	lr_end_transaction("UC02_TR01_login",LR_AUTO);

//TR01-END
	
	
//TR02
	
	lr_start_transaction("UC02_TR02_create_new_test");

	web_url("new.order.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/new.order.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR02_create_new_test",LR_AUTO);

//TR02-END

	//orderID
	web_reg_save_param_regexp("ParamName=order_id", 
		"RegExp=\n(........)", "Ordinal=14",
		LAST);

	lr_save_string(lr_eval_string("test-{iterationNumber}"),"newTestTitle");


//TR03	
	
	lr_start_transaction("UC02_TR03_test_description");
	
	web_custom_request("draft", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/customer/draft", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"BodyBinary={\"introduction\":\"Description here. \",\"targetSite\":\"https://yandex.ru/\",\"testTitle\":\"{newTestTitle}\",\"testType\":\"SITE\"}", 
		LAST);
	
	lr_end_transaction("UC02_TR03_test_description",LR_AUTO);

//TR03-END

	lrvtc_send_message("order_id", lr_eval_string("{order_id}"));

//TR04

	lr_start_transaction("UC02_TR04_test_crowd");

	web_url("getTemplates", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/customer/getTemplates?testType=SITE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order?id={order_id}", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		LAST);
 	
	web_custom_request("updateOrderAudience", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/customer/updateOrderAudience", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json; charset=utf-8",
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order?id={order_id}", 
		"Snapshot=t275.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":{order_id},\"testerType\":\"OUR\",\"participantGroupDTO\":[{\"ageRange\":{\"min\":18,\"max\":61},\"children\":\"ANY\",\"count\":50,\"educations\":[\"COMMON\",\"MIDDLE_FULL\",\"MIDDLE_SPEC\",\"HIGH_NOT_FULL\",\"HIGH\"],\"familyStatus\":\"ANY\",\"gender\":\"ANY\",\"groupName\":\"segment\",\"incomeRange\":{\"min\":0,\"max\":55000},\"socialStatuses\":[\"STUDENT\",\"UNEMPLOYED\",\"HOUSEWIFE\",\"FREELANCER\",\"WORKER\",\"SPECIALIST\",\"CHIEF_DEPT\"],\"ordinal\":0}]}", 
		LAST);
	
	lr_end_transaction("UC02_TR04_test_crowd",LR_AUTO);

//TR04-END	


//TR05

	lr_start_transaction("UC02_TR05_test_tasks");


	web_custom_request("updateOrderSteps", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/customer/updateOrderSteps", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"EncType=application/json; charset=utf-8",
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order?id={order_id}", 
		"Snapshot=t277.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":{order_id},\"steps\":[{\"question\":\"Audio question\",\"linkList\":[],\"stepType\":\"TEXT\",\"orderNum\":0}],\"metrics\":[]}", 
		LAST);

	lr_end_transaction("UC02_TR05_test_tasks",LR_AUTO);

//TR05-END
	

//TR06

	lr_start_transaction("UC02_TR06_test_confirmation");

	web_custom_request("orderFreeInit", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/customer/orderFreeInit", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order?id={order_id}", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{order_id}}", 
		LAST);

	lr_end_transaction("UC02_TR06_test_confirmation",LR_AUTO);
	
//TR06-END
	
		
//TR07
	
	lr_start_transaction("UC02_TR07_to_tests_list");

	web_url("list-orders_2", 
		"URL=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/order?id={order_id}", 
		"Snapshot=t280.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC02_TR07_to_tests_list",LR_AUTO);
	
//TR07-END
	
	
//TR08
	
	lr_start_transaction("UC02_TR08_logout");

	web_custom_request("logout", 
		"URL=https://loadtest.uxcrowd.ru/api/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t309.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_end_transaction("UC02_TR08_logout",LR_AUTO);
	
//TR08-END

	lrvtc_disconnect();//vts disconnection
	return 0;
}