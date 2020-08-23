/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("loadtest.uxcrowd.ru", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1064.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/library/moment.min.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1598211096656", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1598211096656", ENDITEM, 
		"Url=/app.js?bust=1598211096656", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("ru.json", 
		"URL=https://loadtest.uxcrowd.ru/assets/lang/ru.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1065.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"2c2c3e0d-5ce0-4989-8141-2def0651d067");

	web_url("headerGreenWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1066.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1067.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1068.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("ux-logo-new-white.svg", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1069.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/fonts/Futura/FuturaPT-Medium.woff", ENDITEM, 
		"Url=/assets/fonts/Futura/FuturaPT-Light.woff", ENDITEM, 
		"Url=/assets/fonts/Futura/FuturaPT-Bold.woff", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-XSRF-TOKEN", 
		"2c2c3e0d-5ce0-4989-8141-2def0651d067");

	web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1070.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_custom_request("ping", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1071.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=601911a3627b43ce0f139ff3d9d4ad37d6389c7c&s=99462fbc-28bd-4bd4-9678-636d9703a368&i=&r=&platform=web&Idempotency-Key=1d0f1af4ea577e51&user_data=%7B%7D&internal=%7B%7D&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&"
		"user_active_company_id=undefined&source=apiBoot&sampling=true&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=5ed379d7-a186-4b28-85b9-867fdace71b1; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=; DOMAIN=loadtest.uxcrowd.ru");

	web_add_header("X-XSRF-TOKEN", 
		"2c2c3e0d-5ce0-4989-8141-2def0651d067");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_submit_data("authentication", 
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1072.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=mattjeevas", ENDITEM, 
		"Name=password", "Value=ajbPwV", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-XSRF-TOKEN", 
		"35d07b84-86d0-4550-b0cb-6e41f993cb48");

	web_url("account", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1073.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("list-orders", 
		"URL=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1074.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controller_customer/home.controller.js?bust=1598211119756", ENDITEM, 
		"Url=../controller/controller_customer/header.controller.js?bust=1598211119756", ENDITEM, 
		"Url=../app.js?bust=1598211119756", ENDITEM, 
		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1598211119619", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1598211119620", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1598211119621", ENDITEM, 
		"Url=../assets/images/test-stand.png", ENDITEM, 
		"Url=../assets/svg/tests/handHello.svg", ENDITEM, 
		"Url=../assets/svg/Search.svg", ENDITEM, 
		"Url=../assets/svg/tests/desktop_windows.svg", ENDITEM, 
		"Url=../assets/svg/tests/copy.svg", ENDITEM, 
		"Url=../assets/svg/tests/report.svg", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

	web_websocket_connect("ID=0", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-tlYB3nniu2X1V8EXpbgsRDXZ7RmEccAMUmpRm9jy7QA0XhNqcI93v4I7e5q1hfYXhlhsQOeuaJsCY33Ft9kPif939gidhvgAXmnF?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("metrics", 
		"URL=https://api-iam.intercom.io/messenger/web/metrics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t1076.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=601911a3627b43ce0f139ff3d9d4ad37d6389c7c&s=99462fbc-28bd-4bd4-9678-636d9703a368&i=&r=&platform=web&Idempotency-Key=7106cd4691187580&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%225ed379d7-a186-4b28-85b9-867fdace71b1%22%7D&internal=&page_title="
		"%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&user_active_company_id=-1&metrics=%5B%5D&logs=%5B%5D&op_metrics=%5B%5D&hc_metrics="
		"%5B%7B%22id%22%3A%22a93cf6fd-b4fc-4618-bdc0-9773edd2e99d%22%2C%22name%22%3A%22apiBoot%22%2C%22createdAt%22%3A1598211114330%2C%22screenWidth%22%3A1536%2C%22screenHeight%22%3A864%2C%22additionalMetaData%22%3A%7B%22sample_rate%22%3A20%7D%7D%2C%7B%22id%22%3A%22df922f7e-d83c-4b08-84ed-c2043e876e58%22%2C%22name%22%3A%22createOrUpdateUser%22%2C%22createdAt%22%3A1598211117686%2C%22screenWidth%22%3A1536%2C%22screenHeight%22%3A864%2C%22additionalMetaData%22%3A%7B%22sample_rate%22%3A20%2C%22messengerIsVisibl"
		"e%22%3Afalse%2C%22isLauncherEnabled%22%3Afalse%2C%22hasDisplayNoneSet%22%3Afalse%7D%2C%22sessionId%22%3A%2299462fbc-28bd-4bd4-9678-636d9703a368%22%7D%5D&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"35d07b84-86d0-4550-b0cb-6e41f993cb48");

	web_url("account_2", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1077.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1078.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1079.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1080.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("X-XSRF-TOKEN", 
		"35d07b84-86d0-4550-b0cb-6e41f993cb48");

	web_url("new.video.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/new.video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1081.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("user", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1082.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_custom_request("orders", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t1083.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":0,\"size\":10,\"sort\":[\"startDate\"]}", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("ping_2", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1084.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=601911a3627b43ce0f139ff3d9d4ad37d6389c7c&s=1bfdb75d-9933-462d-8651-7d4641782482&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=06636f4a1ea0f15e&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%225ed379d7-a186-4b28-85b9-867fdace71b1%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=undefined&source=apiBoot&sampling=false&h=false&"
		"referer=https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Flist-orders", 
		LAST);

	web_custom_request("ping_3", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1085.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=601911a3627b43ce0f139ff3d9d4ad37d6389c7c&s=1bfdb75d-9933-462d-8651-7d4641782482&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=0dc0bc2a6b7d6af0&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%225ed379d7-a186-4b28-85b9-867fdace71b1%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&referer="
		"https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Flist-orders&anonymous_session=MGpVVEc0UCtDVVRXOU9VL2ZkYVZMcE1nOTVLaW1tQktuWnF5ZnJmRENxaElicmdhb0EyNWI3Kzh1dFRPaHdRTy0tMDN3U3VNclU1THh6TGowVW5tbTlLQT09--6249c2af3863e868c68b84bcb9557cbb502c49f2", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_websocket_connect("ID=1", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-DGwlQbxvY2qZXzwg8QQy6D0sr8nIe_1vzOk32Ytpo93Sz_TukdJgebx2yVRsA62WiqG4ypSb5vD_bNWFdzAT8dbBz0M3BZBFvfF3?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=ZUM3TUxYUDVJZ1kvN2lldFNFT2w3UkMrQTA4Z1NHdEV2Tk9jZStzSW1VSnNXM2grZVRncm5BOVZtOEZpTHdveC0tN2ZwdTZKYkpNYkdPc2k5VEFVNEExdz09--1421b57464275ed3b32fbeeb852ee07588051111; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("Origin");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("16997737", 
		"URL=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1087.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/lang/ru.json", ENDITEM, 
		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
		"Url=/controller/controller_customer/header.controller.js?bust=1598211129464", ENDITEM, 
		"Url=/controller/controller_customer/home.controller.js?bust=1598211129464", ENDITEM, 
		"Url=/app.js?bust=1598211129464", ENDITEM, 
		"Url=/assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1598211129393", ENDITEM, 
		"Url=/assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1598211129394", ENDITEM, 
		"Url=/assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1598211129395", ENDITEM, 
		"Url=/assets/svg/tests/play.svg", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"35d07b84-86d0-4550-b0cb-6e41f993cb48");

	web_url("account_3", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1088.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1089.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1090.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1091.inf", 
		"Mode=HTML", 
		LAST);

	web_url("new.video.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/new.video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1092.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1093.inf", 
		"Mode=HTML", 
		LAST);

	web_url("16997737_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/order/16997737", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1094.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get-tester_task_link", 
		"URL=https://loadtest.uxcrowd.ru/api/server/get-tester_task_link?customerOrderId=16997737&targetType=SITE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/16997737", 
		"Snapshot=t1095.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1598211129396", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_custom_request("ping_4", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1096.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=601911a3627b43ce0f139ff3d9d4ad37d6389c7c&s=96cef240-78e5-4968-813f-36920f77afdd&i=&r=&platform=web&Idempotency-Key=d86f59a1b69aa53e&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%225ed379d7-a186-4b28-85b9-867fdace71b1%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=undefined&source=apiBoot&sampling=false&h=false&referer="
		"https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Ftests%2F16997737&anonymous_session=ZUM3TUxYUDVJZ1kvN2lldFNFT2w3UkMrQTA4Z1NHdEV2Tk9jZStzSW1VSnNXM2grZVRncm5BOVZtOEZpTHdveC0tN2ZwdTZKYkpNYkdPc2k5VEFVNEExdz09--1421b57464275ed3b32fbeeb852ee07588051111", 
		EXTRARES, 
		"Url=https://loadtest.uxcrowd.ru/assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1598211129397", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Url=https://loadtest.uxcrowd.ru/assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1598211129398", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"35d07b84-86d0-4550-b0cb-6e41f993cb48");

	web_url("user_3", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"Snapshot=t1097.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/video-player/download.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Url=/assets/svg/video-player/bigPlay.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		LAST);

	web_url("relatedVideoIds", 
		"URL=https://loadtest.uxcrowd.ru/api/video/relatedVideoIds?videoId=8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"Snapshot=t1098.inf", 
		"Mode=HTML", 
		LAST);

	web_url("8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"Snapshot=t1099.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tags", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/8583f5e0-c595-4c9d-a6db-8e472826bfe0/tags", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"Snapshot=t1100.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=RWVJbGpDU2ZKUEdsZUg5bjVhNTM1RW1oRnJ1ODB2ZGFBTy9Ja2gvdEFYbHZqYWJZa2ZqTWcwT1hZTE1iZW4zaC0tWlVlOVQySHpVdy9KZ01vSENFTkZGQT09--0657fcafcab3d29f8f67e0f28c26846716f8bffe; DOMAIN=loadtest.uxcrowd.ru");

	web_url("notes", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/8583f5e0-c595-4c9d-a6db-8e472826bfe0/notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", 
		"Snapshot=t1101.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/down-chevron.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Url=/assets/svg/video-player/AddComment.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Url=/assets/svg/video-player/TranscriptExample.png", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Dest", 
		"video");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_stream_open("ID=1", "URL=https://loadtest.uxcrowd.ru/videos/2020-08-15-14-07-25-49976824-blob.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_add_auto_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_submit_data("ping_5", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1102.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=601911a3627b43ce0f139ff3d9d4ad37d6389c7c", ENDITEM, 
		"Name=s", "Value=96cef240-78e5-4968-813f-36920f77afdd", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=30d9acbc7aa101f9", ENDITEM, 
		"Name=user_data", "Value={\"email\":\"matt.jeevas@mail.ru\",\"user_id\":493309903,\"anonymous_id\":\"5ed379d7-a186-4b28-85b9-867fdace71b1\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Видео", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Name=anonymous_session", "Value=RWVJbGpDU2ZKUEdsZUg5bjVhNTM1RW1oRnJ1ODB2ZGFBTy9Ja2gvdEFYbHZqYWJZa2ZqTWcwT1hZTE1iZW4zaC0tWlVlOVQySHpVdy9KZ01vSENFTkZGQT09--0657fcafcab3d29f8f67e0f28c26846716f8bffe", ENDITEM, 
		LAST);

	web_add_cookie("intercom-session-fkbc3no8=Z2pmSDlDQnNSdW9KanZ0b3d0aTFqekxzcjB1WENjVTM3ZXI3c1hBNGNuN08zUTZKRFg4S21zYmp4Z1JweFFvLy0tZ2dTNHpLbHVpTzhOTHBNbjJyNFo2Zz09--33a2c7df524a2fbcdc49b7ee420b94a2a30b3e5f; DOMAIN=loadtest.uxcrowd.ru");

	web_websocket_connect("ID=2", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-Ry_ZJUIYTDHqWhGJlbsELX_JXHLrPjqFhHEI2cXkhPsEq2vakQy_XsY_KTgn9ht26FwdiJ4Ukap2OicRa1gYYMr9vLmGHQCEGdLU?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive2*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"video");

	web_stream_close("ID=1", LAST);

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_submit_data("ping_6", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1104.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=601911a3627b43ce0f139ff3d9d4ad37d6389c7c", ENDITEM, 
		"Name=s", "Value=96cef240-78e5-4968-813f-36920f77afdd", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=99241da6df8c9e78", ENDITEM, 
		"Name=user_data", "Value={\"email\":\"matt.jeevas@mail.ru\",\"user_id\":493309903,\"anonymous_id\":\"5ed379d7-a186-4b28-85b9-867fdace71b1\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Видео", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/8583f5e0-c595-4c9d-a6db-8e472826bfe0", ENDITEM, 
		"Name=anonymous_session", "Value=Z2pmSDlDQnNSdW9KanZ0b3d0aTFqekxzcjB1WENjVTM3ZXI3c1hBNGNuN08zUTZKRFg4S21zYmp4Z1JweFFvLy0tZ2dTNHpLbHVpTzhOTHBNbjJyNFo2Zz09--33a2c7df524a2fbcdc49b7ee420b94a2a30b3e5f", ENDITEM, 
		LAST);

	return 0;
}