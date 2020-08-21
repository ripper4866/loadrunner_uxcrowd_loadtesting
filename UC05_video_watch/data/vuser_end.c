vuser_end()
{

	lr_think_time(39);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923695719\",\"eventData\":{\"sendTime\":1597923695719,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive13*/

	/*Connection ID 2 received buffer WebSocketReceive14*/

	lr_think_time(20);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63\"}}", 
		"IsBinary=0", 
		LAST);

	lr_start_transaction("UC05_TR07_signoff");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(16);

	web_url("logout-hover.svg", 
		"URL=https://loadtest.uxcrowd.ru/assets/css/svg/logout-hover.svg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/svg+xml", 
		"Referer=https://loadtest.uxcrowd.ru/assets/gulp/sup_css.css", 
		"Snapshot=t36.inf", 
		LAST);

	web_add_cookie("CSRF-TOKEN=20145215-56c2-481b-87cf-d377e161cc20; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("XSRF-TOKEN=f9e19e06-4fbe-436c-94fd-64f671e58231; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("remember-me=MUQlMkZEbTIxWHVWRlFzQVJjbjNpU2RBJTNEJTNEOmZJd1hLVWpuZDJuWUh0MHRtNzdzemclM0QlM0Q; DOMAIN=loadtest.uxcrowd.ru");

	web_add_cookie("JSESSIONID=4368EBC30D3377498F1DD62258289F24; DOMAIN=loadtest.uxcrowd.ru");

	web_add_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("logout", 
		"URL=https://loadtest.uxcrowd.ru/api/logout", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=", 
		EXTRARES, 
		"Url=../controller/controller_home/newMain.controller.js?bust=1597923386110", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=../controller/controller_home/login.controller.js?bust=1597923386110", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_add_auto_header("X-XSRF-TOKEN", 
		"c1020106-718c-4674-a64a-024fe492048b");

	web_url("headerGreenWhite.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/headerGreenWhite.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home.html_3", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/home.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("footer.html_2", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_landing_new/footer.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_submit_data("ping_6", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=b328554bf0d56eab47f83ce47cf7e7dd3670982f", ENDITEM, 
		"Name=s", "Value=6cafc087-488f-48d2-86a9-44a583fcaabd", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=a7a1739d3dc855b1", ENDITEM, 
		"Name=user_data", "Value={}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Видео", ENDITEM, 
		"Name=user_active_company_id", "Value=undefined", ENDITEM, 
		"Name=source", "Value=apiBoot", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_add_cookie("intercom-id-fkbc3no8=42f707fc-0d6e-47ca-8413-b985ecc89829; DOMAIN=loadtest.uxcrowd.ru");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("loadtest.uxcrowd.ru_3", 
		"URL=https://loadtest.uxcrowd.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/css/landing/youtube-play.svg", "Referer=https://loadtest.uxcrowd.ru/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-new.svg", ENDITEM, 
		"Url=/assets/images/burger-white-mobile.svg", ENDITEM, 
		"Url=/assets/images/uxcrowd-logo-white-mobile.svg", ENDITEM, 
		"Url=/assets/images/avatar-white-mobile.svg", ENDITEM, 
		"Url=/assets/images/youtube-colored.svg", ENDITEM, 
		"Url=/assets/images/nl-home-girl.svg", ENDITEM, 
		"Url=/assets/images/nl-home-top-blot.svg", ENDITEM, 
		"Url=/assets/images/facebook-colored.svg", ENDITEM, 
		"Url=/assets/images/nl-home-work-arrow.svg", ENDITEM, 
		"Url=/assets/images/google-play-btn.png", ENDITEM, 
		"Url=/assets/images/nl-home-work-blot-rect.svg", ENDITEM, 
		"Url=/assets/images/nl-home-work-blot-circle.svg", ENDITEM, 
		"Url=/assets/images/nl-home-helpful-block-1.svg", ENDITEM, 
		"Url=/assets/images/nl-home-helpful-block-2.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-rabota_ru.svg", ENDITEM, 
		"Url=/assets/images/nl-home-helpful-block-3.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-gazprombank.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-5.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-2.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-3.svg", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-1.svg", ENDITEM, 
		"Url=/assets/images/svetlana_gorshkova.jpg", ENDITEM, 
		"Url=/assets/images/egor_golubev.png", ENDITEM, 
		"Url=/assets/images/nl-home-clients-logo-4.svg", ENDITEM, 
		"Url=/assets/images/ildar_mullahmetov.png", ENDITEM, 
		"Url=/assets/images/nl-home-center-blot.png", ENDITEM, 
		"Url=/assets/images/nl-home-clients-blot-mobile.svg", ENDITEM, 
		"Url=/assets//images/question.png", ENDITEM, 
		"Url=/assets/images/nl-home-blot-bottom-mobile.svg", ENDITEM, 
		"Url=/assets/images/Rectangle%205.2.png", ENDITEM, 
		"Url=/assets/images/ux-logo-new-white.svg", ENDITEM, 
		"Url=/assets/images/youtube.svg", ENDITEM, 
		"Url=/assets/images/facebook.svg", ENDITEM, 
		LAST);

	web_websocket_connect("ID=3", 
		"URI=wss://nexus-websocket-a.intercom.io/pubsub/5-CS6uweif757GK9xL7891_HAk01ggw4JYUDPdCLmjAfc8mB2dHXGmasfy5UaFyLVVSfGi7N-Z6h-vClgjczgaDuEfCWxO_KFZEAYn?X-Nexus-New-Client=true&X-Nexus-Version=0.5.2&user_role=undefined", 
		"Origin=https://loadtest.uxcrowd.ru", 
		"OnOpenCB=OnOpenCB3", 
		"OnMessageCB=OnMessageCB3", 
		"OnErrorCB=OnErrorCB3", 
		"OnCloseCB=OnCloseCB3", 
		LAST);

	/*Connection ID 3 received buffer WebSocketReceive15*/

	web_websocket_send("ID=3", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/\"}}", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=3", 
		"Buffer={\"eventName\":\"nx.Subscribe\",\"nx.Topics\":[\"*\"]}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR07_signoff",LR_AUTO);

	return 0;
}