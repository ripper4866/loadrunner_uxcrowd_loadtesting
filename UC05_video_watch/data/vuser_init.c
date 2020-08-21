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
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/landing/webflow.css", ENDITEM, 
		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/library/moment.min.js", ENDITEM, 
		"Url=/library/jquery.js", ENDITEM, 
		"Url=/library/jquery.form.js", ENDITEM, 
		"Url=/assets/gulp/env.js", ENDITEM, 
		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.js", ENDITEM, 
		"Url=/library/FileSaver.js", ENDITEM, 
		"Url=/assets/gulp/sup_js.js", ENDITEM, 
		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=/assets/js/main_js/init.js", ENDITEM, 
		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=/assets/gulp/blog_js.js", ENDITEM, 
		"Url=/assets/gulp/app_js.js", ENDITEM, 
		"Url=/assets/gulp/customer_js.js", ENDITEM, 
		"Url=/assets/gulp/admin_js.js", ENDITEM, 
		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
		"Url=/assets/gulp/home_js.js", ENDITEM, 
		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
		"Url=/library/require.js", ENDITEM, 
		"Url=/assets/gulp/tester_js.js", ENDITEM, 
		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
		"Url=/controller/controller_home/newMain.controller.js?bust=1597923264364", ENDITEM, 
		"Url=/controller/controller_home/login.controller.js?bust=1597923264364", ENDITEM, 
		"Url=/app.js?bust=1597923264364", ENDITEM, 
		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer/Bin="
		"\\x4D\\x53\\x47\\x23\\x31\\x23\\x32\\x23\\x31\\x23\\x31\\x30\\x32\\x34\\x3A\\x31\\x32\\x3A\\x33\\x33\\x3A\\x31\\x30\\x33\\x31\\x3A\\x30\\x2C\\x31\\x31\\x32\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x33\\x35\\x2C\\x31\\x31\\x33\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x33\\x35\\x2C\\x31\\x31\\x34\\x3D\\x32\\x37\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x5F\\x52\\x65\\"
		"x6E\\x64\\x65\\x72\\x57\\x69\\x64\\x67\\x65\\x74\\x48\\x6F\\x73\\x74\\x48\\x57\\x4E\\x44\\x2C\\x31\\x31\\x36\\x3D\\x32\\x3A\\x72\\x75\\x3B", 
		"IsBinary=1", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

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
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"20145215-56c2-481b-87cf-d377e161cc20");

	web_url("headerGreenWhite.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
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

	web_url("home.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_url("loadtest.uxcrowd.ru_2", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/fonts/Futura/FuturaPT-Medium.woff", ENDITEM, 
		"Url=/assets/fonts/Futura/FuturaPT-Light.woff", ENDITEM, 
		"Url=/assets/fonts/Futura/FuturaPT-Bold.woff", ENDITEM, 
		LAST);

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

	web_custom_request("ping", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=b328554bf0d56eab47f83ce47cf7e7dd3670982f&s=cfab9197-7072-4500-a7c1-18c162879f2b&i=&r=&platform=web&Idempotency-Key=5f79ef95f73be424&user_data=%7B%7D&internal=%7B%7D&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&"
		"user_active_company_id=undefined&source=apiBoot&sampling=false&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	web_websocket_connect("ID=1", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-Mg9VxeTg4rJk0sss5p_mQranNbzrPE5mrd0b630WYMlQ1EbDyb7bhjljBwambdDDMUGGpRNl447gHXCMhS7zOPXfuHPXGRWBAo41?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(21);

	web_custom_request("metrics", 
		"URL=https://api-iam.intercom.io/messenger/web/metrics", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=b328554bf0d56eab47f83ce47cf7e7dd3670982f&s=cfab9197-7072-4500-a7c1-18c162879f2b&i=&r=&platform=web&Idempotency-Key=ba7bae613519db70&user_data=%7B%7D&internal=&page_title=%D0%AE%D0%B7%D0%B0%D0%B1%D0%B8%D0%BB%D0%B8%D1%82%D0%B8-%D1%82%D0%B5%D1%81%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5%20%D0%BD%D0%B0%20%D1%80%D0%B5%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D1%85%20%D0%BF%D0%BE%D0%BB%D1%8C%D0%B7%D0%BE%D0%B2%D0%B0%D1%82%D0%B5%D0%BB%D1%8F%D1%85%20%E2%80%93%20UXCrowd&"
		"user_active_company_id=undefined&metrics=%5B%7B%22id%22%3A%22543857ea-7a51-4578-bfe4-fdbde4205d8a%22%2C%22name%22%3A%22m4_metric%22%2C%22created_at%22%3A1597923310%2C%22metadata%22%3A%7B%22user_id%22%3A%225f3e5fe76a3269a91a13fe1d%22%2C%22action%22%3A%22received%22%2C%22object%22%3A%22message%22%2C%22place%22%3A%22messenger%22%2C%22context%22%3A%22from_launcher_discovery_mode%22%2C%22version%22%3A%22b328554bf0d56eab47f83ce47cf7e7dd3670982f%22%7D%7D%5D&logs=%5B%5D&op_metrics="
		"%5B%7B%22name%22%3A%22load_app_bundle_duration%22%2C%22type%22%3A%22timing%22%2C%22value%22%3A282%7D%5D&hc_metrics=%5B%5D&h=false&referer=https%3A%2F%2Floadtest.uxcrowd.ru%2F", 
		LAST);

	lr_think_time(9);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923347143\",\"eventData\":{\"sendTime\":1597923347143,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-Mg9VxeTg4rJk0sss5p_mQranNbzrPE5mrd0b630WYMlQ1EbDyb7bhjljBwambdDDMUGGpRNl447gHXCMhS7zOPXfuHPXGRWBAo41\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive2*/

	lr_start_transaction("UC05_TR02_login");

	web_add_cookie("intercom-id-fkbc3no8=d11c0c8f-087f-4628-b90f-26b5b9661d3d; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"20145215-56c2-481b-87cf-d377e161cc20");

	lr_think_time(12);

	web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive3*/

	lr_think_time(4);

	web_websocket_send("ID=1", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	lr_think_time(16);

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

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	web_url("account", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

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
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../assets/gulp/sup_css.css", ENDITEM, 
		"Url=../assets/css/landing/webflow.css", ENDITEM, 
		"Url=../assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=../assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
		"Url=../assets/gulp/env.js", ENDITEM, 
		"Url=../library/jquery.js", ENDITEM, 
		"Url=../library/jquery.form.js", ENDITEM, 
		"Url=../library/moment.min.js", ENDITEM, 
		"Url=../library/jquery.uploadfile.min.js", ENDITEM, 
		"Url=../assets/js/main_js/validation.js", ENDITEM, 
		"Url=../library/FileSaver.js", ENDITEM, 
		"Url=../assets/gulp/sup_js.js", ENDITEM, 
		"Url=../assets/js/main_js/init.js", ENDITEM, 
		"Url=../assets/js/main_js/validation.rule.js", ENDITEM, 
		"Url=../assets/js/app_js/auth.interceptor.js", ENDITEM, 
		"Url=../assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
		"Url=../assets/gulp/app_js.js", ENDITEM, 
		"Url=../assets/gulp/admin_js.js", ENDITEM, 
		"Url=../assets/gulp/customer_js.js", ENDITEM, 
		"Url=../assets/gulp/blog_js.js", ENDITEM, 
		"Url=../assets/gulp/home_js.js", ENDITEM, 
		"Url=../assets/gulp/moderator_js.js", ENDITEM, 
		"Url=../assets/gulp/new_tester_js.js", ENDITEM, 
		"Url=../assets/gulp/tester_js.js", ENDITEM, 
		"Url=../library/require.js", ENDITEM, 
		"Url=../assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
		"Url=../assets/js/main_js/path_controller.js", ENDITEM, 
		"Url=https://ulclick.ru/b-count.js", ENDITEM, 
		"Url=../assets/js/main_js/main_route.js", ENDITEM, 
		"Url=../assets/lang/ru.json", ENDITEM, 
		"Url=../controller/controller_customer/home.controller.js?bust=1597923386110", ENDITEM, 
		"Url=../controller/controller_customer/header.controller.js?bust=1597923386110", ENDITEM, 
		"Url=../app.js?bust=1597923386110", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1597923385154", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1597923385155", ENDITEM, 
		"Url=../assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1597923385156", ENDITEM, 
		"Url=../assets/images/test-stand.png", ENDITEM, 
		"Url=../assets/svg/tests/handHello.svg", ENDITEM, 
		"Url=../assets/svg/Search.svg", ENDITEM, 
		"Url=../assets/svg/tests/copy.svg", ENDITEM, 
		"Url=../assets/svg/tests/desktop_windows.svg", ENDITEM, 
		"Url=../assets/svg/tests/report.svg", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	web_url("account_2", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("main_template.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/main_template.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("header.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	web_url("new.video.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_customer/new.video.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/left-menu-icons/plus-orange.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		LAST);

	web_url("user", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/svg/logo-new.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/settings.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/logout.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
		"Url=/assets/css/svg/left-menu-icons/list.svg", "Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", ENDITEM, 
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
		"Snapshot=t21.inf", 
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
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=b328554bf0d56eab47f83ce47cf7e7dd3670982f&s=0653de7e-6647-4fad-9a3f-6b630e925b39&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=873208c9816e3f4c&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%22d11c0c8f-087f-4628-b90f-26b5b9661d3d%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=undefined&source=apiBoot&sampling=false&h=false&"
		"referer=https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Flist-orders", 
		LAST);

	web_custom_request("ping_3", 
		"URL=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=b328554bf0d56eab47f83ce47cf7e7dd3670982f&s=0653de7e-6647-4fad-9a3f-6b630e925b39&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=a734bb429d4f7f76&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%22d11c0c8f-087f-4628-b90f-26b5b9661d3d%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&referer="
		"https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Flist-orders&anonymous_session=ZG90b2RNRXF1MWJmeHpWZGk3cy9LZFdPdy9CVUJYcHBxWkg0eHYzYlU0b1RjNVFwcTJ6Y2JXb2ZNQzk5T3NKWi0tN3ZUWmYzMCttODcvc25SNVNYaG5vZz09--146a8e6b6f7150d79eaac1ad9fc053672b213192", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_websocket_connect("ID=2", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive4*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR02_login",LR_AUTO);

	return 0;
}
