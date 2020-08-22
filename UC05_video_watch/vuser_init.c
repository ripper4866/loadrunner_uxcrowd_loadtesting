vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");



//=================================	TRANSACTION 01 =================================//

	lr_start_transaction("UC05_TR01_start_page");

	web_url("loadtest.uxcrowd.ru", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC05_TR01_start_page",LR_AUTO);



//=================================	TRANSACTION 02 =================================//

	lr_think_time(16);

	lr_start_transaction("UC05_TR02_login");

//	extracting the starting token
	web_reg_save_param_regexp (
		"ParamName=StartXsrfToken",
		"RegExp=XSRF-TOKEN\=(.*?);",
		"Ordinal=1",
	LAST );

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
		"{StartXsrfToken}");

//	extracting an authorization token
	web_reg_save_param_regexp (
		"ParamName=authXsrfToken",
		"RegExp=XSRF-TOKEN\=(.*?);",
		"Ordinal=2",
	LAST );

	web_submit_data("authentication", 
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=mattjeevas", ENDITEM, 
		"Name=password", "Value=ajbPwV", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_header("X-XSRF-TOKEN", 
		"{authXsrfToken}");

//	extracting the number of pages
	web_reg_save_param_regexp (
		"ParamName=pagesAll",
		"RegExp=totalPages\":(.*?),",
		"Ordinal=1",
	LAST );

	web_custom_request("orders", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":0,\"size\":10,\"sort\":[\"startDate\"]}", 
		LAST);

	lr_end_transaction("UC05_TR02_login",LR_AUTO);

	return 0;
}
