Action()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	
	lr_start_transaction("UC03_TR01_mainpage_open");
	//open main_page
	web_url("loadtest.uxcrowd.ru", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML",  
		LAST);
	
	web_reg_save_param_regexp (
		"ParamName=XSRF-TOKEN",
		"RegExp=XSRF-TOKEN=(.+);",
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
		"{XSRF-TOKEN}");
	
	//get pages
	web_url("headerGreenWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	//open reg_form_page
	
	web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC03_TR01_mainpage_open",LR_AUTO);
	
	lr_start_transaction("UC03_TR02_signupdata_post");
	
	web_custom_request("register", 
		"URL=https://loadtest.uxcrowd.ru/api/register", 
		"Method=POST",  
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"email\":\"nevermind{randomNumber}{randomNumber2}\",\"role\":\"ROLE_NEW_TESTER\",\"tariffType\":null}", 
		LAST);
	
	lr_end_transaction("UC03_TR02_signupdata_post",LR_AUTO);
	
	//open after_reg_success_page
	lr_start_transaction("UC03_TR02_successpage_open");
	
	web_url("modal_window.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal_window.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footerWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footerWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	web_url("header.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC03_TR02_successpage_open",LR_AUTO);
	
	return 0;
}
