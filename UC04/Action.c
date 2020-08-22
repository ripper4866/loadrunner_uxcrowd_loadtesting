//путь до директории с видео и json-файлом
	char FileLocation[1024] = "C:\\UC04_Video_json\\";
	long FileVarriable;
Action()
{
	web_set_max_html_param_len("1024");
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	lrvtc_connect("127.0.0.1",3456,VTOPT_KEEP_ALIVE);
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("X-Requested-With", 
//		"XMLHttpRequest");

	
	web_reg_save_param_ex(
     	"ParamName=XSRFtoken", 
     	"LB/IC=Set-Cookie: XSRF-TOKEN=",
     	"RB/IC=;",
  	LAST);
	
		web_reg_save_param_ex(
     	"ParamName=CSRFtoken", 
     	"LB/IC=Set-Cookie: CSRF-TOKEN=",
     	"RB/IC=;",
  	LAST);
	
	
	lr_start_transaction("UC04_T01_LOGIN");
	
	web_url("ru.json", 
		"URL=https://loadtest.uxcrowd.ru/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES,
		"Url=/api/account", "Referer=https://loadtest.uxcrowd.ru/", ENDITEM, 		
		"Url=/controller/controller_home/newMain.controller.js?bust=1597821252491", "Referer=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1597821252491", "Referer=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Url=/app.js?bust=1597821252491", "Referer=https://loadtest.uxcrowd.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
			lr_eval_string("{XSRFtoken}"));//"ebc8f7fe-a25a-4b92-8985-d32bbac9abf5"

	web_url("headerGreenWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"image");

//	web_url("ux-logo-new-white.svg", //not need
//		"URL=https://loadtest.uxcrowd.ru/", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"Referer=https://loadtest.uxcrowd.ru/", 
//		"Snapshot=t5.inf", 
//		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=/controller/controller_home/homeMainBrowser.js?bust=1597821252491", ENDITEM, 
//		"Url=/controller/controllers_testers/controller_tester/home.controller.js?bust=1597821252491", ENDITEM, 
//		"Url=/controller/controllers_testers/controller_tester/header.controller.js?bust=1597821252491", ENDITEM, 
//		"Url=/controller/controllers_testers/controller_tester/new-tasks.controller.js?bust=1597821252491", ENDITEM, 
//		"Url=/app.js?bust=1597821252491", ENDITEM, 
//		LAST);

//	web_add_cookie("dbl=bb23ac897d7a40e3bce80f792a11c4b0; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("fco2r34=bb23ac897d7a40e3bce80f792a11c4b0; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("intercom-id-fkbc3no8=d43308fc-9951-4856-ae99-b1cab368d312; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("intercom-session-fkbc3no8=; DOMAIN=loadtest.uxcrowd.ru");

//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
			lr_eval_string("{XSRFtoken}"));//"ebc8f7fe-a25a-4b92-8985-d32bbac9abf5"

	web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");
	
	
	web_reg_save_param_regexp("ParamName=XSRFtoken",
    "RegExp=Set\-Cookie\: XSRF\-TOKEN\=(.*?)\;",
    "Ordinal=2",
	LAST);
	
	web_reg_save_param_ex(
     	"ParamName=remember_me", 
     	"LB/IC=Set-Cookie: remember-me=",
     	"RB/IC=;",
  	LAST);
	
	web_reg_save_param_ex(
     	"ParamName=userId", 
     	"LB/IC=Set-Cookie: userId=",
     	"RB/IC=;",
  	LAST);
	
	web_reg_save_param_ex(
     	"ParamName=JSESSIONID", 
     	"LB/IC=Set-Cookie: JSESSIONID=",
     	"RB/IC=;",
  	LAST);
	
	
	web_submit_data("authentication", 
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=mr_tester3@1secmail.com", ENDITEM, 
		"Name=password", "Value=xuFM7n", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		lr_eval_string("{XSRFtoken}"));//"0443a4cb-e762-4534-8427-10ce3bf5a355"

	
	web_url("account", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("profile", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tester/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/new-tasks.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
		
		web_reg_save_param_regexp("ParamName=orderIdArr",
    "RegExp=\"id\":(.*?),",
    "Ordinal=ALL",
	LAST);//"id":16997737,
	
	
	
	web_url("new-tasks", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/new-tasks?isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
	lr_save_string(lr_paramarr_random("orderIdArr"),"orderId");
	
	lrvtc_send_message("orderId",lr_eval_string("{orderId}"));
	lrvtc_disconnect();
		
//	web_add_cookie("intercom-session-fkbc3no8=Um8zREYvZ1I3NFpMTmJuN1NTUWJRcU92QmI1MG1VS2RRYS9KQWN6RmhSVlp3VmFsODZ0Y1VkVWF3cmlBUDF2Ky0tTThXanJ2bDZ4djdOSlE1T1F2UHZOUT09--c70851cc791800f18794f257728a2126460f4c2f; DOMAIN=loadtest.uxcrowd.ru");

	web_url("profile_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tester/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/images/test-stand.png", "Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", ENDITEM, 
//		"Url=/assets/css/svg/logo-new.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/done.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/balance.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/logout.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/download.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/close.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/star.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/svg/left-menu-icons/list-active.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=../plugin/getLastVersion?pluginType=WEB&environmentType=DO_PROD", "Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");
	
	lr_end_transaction("UC04_T01_LOGIN",LR_AUTO);
	
	lr_start_transaction("UC04_T02_");

	web_url("new-tasks_2", 
		"URL=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=../assets/gulp/sup_css.css", ENDITEM, 
//		"Url=../assets/css/landing/webflow.css", ENDITEM, 
//		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
//		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controller_home/homeMainBrowser.js?bust=1597821284649", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/home.controller.js?bust=1597821284649", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/header.controller.js?bust=1597821284649", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/new-tasks.controller.js?bust=1597821284649", ENDITEM, 
		"Url=../app.js?bust=1597821284649", ENDITEM, 
		LAST);

//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		lr_eval_string("{XSRFtoken}"));//"0443a4cb-e762-4534-8427-10ce3bf5a355"

	web_url("account_2", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/new-tasks.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks_3", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/new-tasks?isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("profile_3", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tester/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	
	lr_end_transaction("UC04_T02_", LR_AUTO);

	lr_start_transaction("UC04_T03_PressProitiTest");

	
	web_reg_save_param_ex("ParamName=videoId",
	                                     "LB=",
	                                     "RB=",
	                                     "Ordinal=1",
	                                     SEARCH_FILTERS,
										"Scope=Body",
	                                      LAST);
	
	
	
	web_custom_request("create", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/create", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t24.inf", 
		"Mode=HTML",  
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{orderId},\"screenName\":\"START_PLUGIN\",\"testerId\":493309963}", //\"16997737\"
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://dfhbnhciflaelghihmdfldmlpfbiobgc");

//			web_reg_save_param_ex(
//     	"ParamName=XSRFtoken", 
//     	"LB/IC=Set-Cookie: XSRF-TOKEN=",
//     	"RB/IC=;",
//  	LAST);
//	
//	web_reg_save_param_ex(
//     	"ParamName=remember_me", 
//     	"LB/IC=Set-Cookie: remember-me=",
//     	"RB/IC=;",
//  	LAST);
//	
//	web_reg_save_param_ex(
//     	"ParamName=JSESSIONID", 
//     	"LB/IC=Set-Cookie: JSESSIONID=",
//     	"RB/IC=;",
//  	LAST);
	
//	web_reg_save_param("stepId",
//		"LB=\"TEXT\",\"id\":",
//		"RB=,",
//		LAST);
	
	//update//"TargetFrame=",
	web_custom_request("update", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t124.inf",
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"SCREEN_CAPTURE\"}", //\"16997737\"  "orderId":"16997737","id":20166,"screenName":"SCREEN_CAPTURE"}
		EXTRARES, 
		"Url=../account", "Referer=", ENDITEM, 
		//"Url=../tester/order-info?id={orderId}", "Referer=", ENDITEM,
		LAST);
	
		
	
	
//	web_add_cookie("dbl=a97fcbf6bb754bc7b551de8721c69323; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("fco2r34=a97fcbf6bb754bc7b551de8721c69323; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("newTesterState=welcome; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("intercom-id-fkbc3no8=8d12ec07-43a3-44c1-a9c9-b9ec3afe7b20; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_cookie("intercom-session-fkbc3no8=NzNVRGRIeEFuZm1xQ0FBc1F5b3dxbGtyc0o3aGNuMVYrS0dCRnVrNzNtZjQrQ3lhVkMxRVhUSUVFUDFFM3k1cy0tMmtCYUtNV25wRThUek1XbXA5Sm9sdz09--8755582b71d4465b763ebec5be360e0973143a1b; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("X-XSRF-TOKEN");

//	web_add_auto_header("Sec-Fetch-Site", 
//		"none");

//	web_url("account_3", 
//		"URL=https://loadtest.uxcrowd.ru/api/account", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=", 
//		"Snapshot=t25.inf", 
//		"Mode=HTML", 
//		LAST);

	web_add_cookie("XSRF-TOKEN={XSRFtoken}; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("remember-me={remember_me}; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("JSESSIONID={JSESSIONID}; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("CSRF-TOKEN={CSRFtoken}; DOMAIN=loadtest.uxcrowd.ru");
	
	
	

	web_add_auto_header("Origin", 
		"chrome-extension://dfhbnhciflaelghihmdfldmlpfbiobgc");

	web_add_auto_header("X-XSRF-TOKEN", 
	                    lr_eval_string("{XSRFtoken}"));//"b17ccaa5-20d6-450c-bfd1-bf0b695aa660"

	web_custom_request("update", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json",
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"SCREEN_CAPTURE\"}", //\"16997737\"
		LAST);
	
	web_reg_save_param("stepId",
		"LB=\"id\":",
		"RB=,\"question",
		LAST);
	
	web_url("order-info", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/order-info?id={orderId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/fonts/Open%20Sans/RjgO7rYTmqiVp7vzi-Q5UYX0hVgzZQUfRDuZrPvH3D8.woff2", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/fonts/Open%20Sans/cJZKeOuBrn4kERxqtaUH3ZBw1xU1rKptJj_0jans920.woff2", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);
	lr_end_transaction("UC04_T03_PressProitiTest", LR_AUTO);
	lr_start_transaction("UC04_T04");
	web_reg_save_param_json(
        "ParamName=taskId",
        "QueryString=$.id",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
	
		//формируем содержимое json-файла
	strcat(FileLocation, lr_eval_string("{stepId}"));	
	strcat(FileLocation, ".json");
	
		//для отладки
		//lr_output_message(FileLocation);
	
	FileVarriable = fopen(FileLocation, "w+");
    fprintf (FileVarriable, "%s", lr_eval_string("[{\"orderNum\":0,\"stepId\":"));
	fprintf (FileVarriable, "%s", lr_eval_string("{stepId}"));  
	fprintf (FileVarriable, "%s", lr_eval_string(",\"startTime\":\"00:00:00\"}]")); 		
    fclose (FileVarriable);
	
	web_custom_request("create-task", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/create-task?orderId={orderId}", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"os\":\"Windows NT 10.0  Win64\",\"browserVersion\":\"Chrome 84.0.4147.125\",\"screenResolution\":\"1366x768\",\"archName\":\"x86_64\",\"processorModel\":\"Intel(R) Core(TM) i5-3317U CPU @ 1.70GHz\",\"numOfProcessors\":4}", 
		LAST);
	lr_end_transaction("UC04_T04",LR_AUTO);
	
	lr_start_transaction("UC04_T05_nachat test");
	web_custom_request("update_2", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0",
		"EncType=application/json",		
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"FINAL_INSTRUCTION\"}", 
		LAST);

	web_custom_request("update_3", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"START_PLUGIN\"}", 
		LAST);
lr_end_transaction("UC04_T05_nachat test",LR_AUTO);

lr_start_transaction("UC04_T05_prodoljit");
	web_custom_request("update_4", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json",
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"COMPLETE_TEST\"}", 
		LAST);
lr_end_transaction("UC04_T05_prodoljit",LR_AUTO);
lr_start_transaction("UC04_T06");
	web_submit_data("video-upload-app", 
		"Action=https://loadtest.uxcrowd.ru/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=task-id", "Value={taskId}", ENDITEM, 
		"Name=video-file", "Value=C:\\UC04_Video_json\\UXCrowd2020.webm", "ContentType=video/webm;codecs=vp9", "File=Yes", ENDITEM, 
		"Name=name", "Value=blob.webm", ENDITEM, 
		"Name=tag-dto", "Value=C:\\UC04_Video_json\\{stepId}.json", "ContentType=application/json", "File=Yes", ENDITEM, 
		LAST);

	web_custom_request("update_5", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json",
		"Body={\"orderId\":{orderId},\"id\":{videoId},\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"{taskId}\"}", 
		LAST);

//	web_add_cookie("intercom-session-fkbc3no8=dFFQSitxVFJaQlJqL2szNUluWWlGTXBOOFdXUFBVTFNwNEhMZVNiVFZMZTJQZTUrb01UUHAxU1FvZlZMR25sOS0tdGtRNW1wQXVmVDVZSG43VndTWWlIZz09--d3d823840b1f7e556c8b231be6756ad07ae63573; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_revert_auto_header("Origin");

	web_revert_auto_header("X-XSRF-TOKEN");

//	web_add_auto_header("Sec-Fetch-Mode", 
//		"navigate");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"document");
//
//	web_add_auto_header("Sec-Fetch-Site", 
//		"same-origin");
//
//	web_add_header("Sec-Fetch-User", 
//		"?1");
//
//	web_add_header("Upgrade-Insecure-Requests", 
//		"1");
lr_end_transaction("UC04_T06",LR_AUTO);
lr_start_transaction("UC04_T07");
	web_url("new-tasks_4", 
		"URL=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=../assets/gulp/sup_css.css", ENDITEM, 
//		"Url=../assets/css/landing/webflow.css", ENDITEM, 
//		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
//		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controller_home/homeMainBrowser.js?bust=1597821318772", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/home.controller.js?bust=1597821318772", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/header.controller.js?bust=1597821318772", ENDITEM, 
		"Url=../controller/controllers_testers/controller_tester/new-tasks.controller.js?bust=1597821318772", ENDITEM, 
		"Url=../app.js?bust=1597821318772", ENDITEM, 
		"Url=../controller/controller_home/newMain.controller.js?bust=1597821318772", ENDITEM, 
		"Url=../controller/controller_home/login.controller.js?bust=1597821318772", ENDITEM, 
		LAST);

//	web_add_auto_header("Sec-Fetch-Dest", 
//		"empty");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		lr_eval_string("{XSRFtoken}"));//"0443a4cb-e762-4534-8427-10ce3bf5a355"

	web_url("account_4", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_4", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_testers/tmpl_tester/new-tasks.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new-tasks_5", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/new-tasks?isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("profile_4", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tester/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		//EXTRARES, 
		//"Url=/assets/css/svg/logout-hover.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);
	
	lr_end_transaction("UC04_T07",LR_AUTO);
//	web_add_cookie("intercom-session-fkbc3no8=S2YzSi8xYTdBNUxudHpZbmNvQ0RwWFd2blh5S051ZUc0aVNEUmsyNlhMdHZQRlJsTlpodVJaMG1TQjBWNnRWSS0tVUdybVUrSXpnamtyWi96TWNDekl3UT09--f9f90cc97371df4789104e6ef8635041bc08b142; DOMAIN=loadtest.uxcrowd.ru");
lr_start_transaction("UC04_T08");
	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_custom_request("logout", 
		"URL=https://loadtest.uxcrowd.ru/api/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_url("headerGreenWhite.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_5", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

//	web_add_cookie("intercom-id-fkbc3no8=8be77395-3ad4-4451-bf10-1854d2406544; DOMAIN=loadtest.uxcrowd.ru");
//
//	web_add_auto_header("Sec-Fetch-Dest", 
//		"image");
//
//	web_add_auto_header("Sec-Fetch-Mode", 
//		"no-cors");

	web_url("loadtest.uxcrowd.ru", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
//		EXTRARES, 
//		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=/assets/images/uxcrowd-logo-new.svg", ENDITEM, 
//		"Url=/assets/images/burger-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/avatar-white-mobile.svg", ENDITEM, 
//		"Url=/assets/images/youtube-colored.svg", ENDITEM, 
//		"Url=/assets/images/facebook-colored.svg", ENDITEM, 
//		"Url=/assets/images/google-play-btn.png", ENDITEM, 
//		"Url=/assets/images/nl-home-girl.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-work-arrow.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-work-blot-rect.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-work-blot-circle.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-1.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-top-blot.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-2.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-helpful-block-3.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-rabota_ru.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-gazprombank.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-5.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-2.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-4.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-3.svg", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-logo-1.svg", ENDITEM, 
//		"Url=/assets/images/egor_golubev.png", ENDITEM, 
//		"Url=/assets/images/svetlana_gorshkova.jpg", ENDITEM, 
//		"Url=/assets/images/ildar_mullahmetov.png", ENDITEM, 
//		"Url=/assets/images/nl-home-center-blot.png", ENDITEM, 
//		"Url=/assets/images/nl-home-clients-blot-mobile.svg", ENDITEM, 
//		"Url=/assets//images/question.png", ENDITEM, 
//		"Url=/assets/images/Rectangle%205.2.png", ENDITEM, 
//		"Url=/assets/images/nl-home-blot-bottom-mobile.svg", ENDITEM, 
//		"Url=/assets/images/ux-logo-new-white.svg", ENDITEM, 
//		"Url=/assets/images/youtube.svg", ENDITEM, 
//		"Url=/assets/images/facebook.svg", ENDITEM, 
		LAST);
lr_end_transaction("UC04_T08",LR_AUTO);
	return 0;
}