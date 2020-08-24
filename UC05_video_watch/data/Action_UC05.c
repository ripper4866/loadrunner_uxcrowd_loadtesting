Action_UC05()
{

	lr_think_time(40);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923456012\",\"eventData\":{\"sendTime\":1597923456012,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive5*/

	/*Connection ID 2 received buffer WebSocketReceive6*/

	lr_think_time(20);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/list-orders\"}}", 
		"IsBinary=0", 
		LAST);

	lr_start_transaction("UC05_TR03_test_find");

	web_add_cookie("intercom-session-fkbc3no8=c21kbzJKVTlNbGhNRHJVMmhIZnEvYUVZVEQ1RkE4by9mMUNZRi9ENG96bE56em9ybHNuQjJxSmNGeld6bXl2TC0tZi9kN2FkRytRVHBYWDNzWVBRZllMUT09--15ab64ccfb9cd2814411ecc23096c941dffc67a5; DOMAIN=loadtest.uxcrowd.ru");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	lr_think_time(15);

	web_custom_request("orders_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":1,\"size\":10,\"sort\":[\"startDate\"]}", 
		EXTRARES, 
		"Url=/assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1597923385157", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", ENDITEM, 
		"Url=/assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1597923385158", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", ENDITEM, 
		"Url=/assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1597923385159", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", ENDITEM, 
		LAST);

	lr_end_transaction("UC05_TR03_test_find",LR_AUTO);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923515721\",\"eventData\":{\"sendTime\":1597923515721,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive7*/

	lr_start_transaction("UC05_TR04_test_open");

	web_url("user_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("17002087", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/order/17002087", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/tests/play.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", ENDITEM, 
		LAST);

	web_url("get-tester_task_link", 
		"URL=https://loadtest.uxcrowd.ru/api/server/get-tester_task_link?customerOrderId=17002087&targetType=SITE", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_cookie("intercom-session-fkbc3no8=VkxPUUxpTHlsc0dyRm02Y2JYTmhxMmV6ODFMeTRIRFdPSEVocEtwQVcwMlBqS3FnQmlOVVdoZm1OWCtLTkVsTS0takFzU0dJVmVTajZrVktCaWJ1TXZBdz09--0427f1ace2cb6cbcc89966a1849e4f5c1f38af99; DOMAIN=loadtest.uxcrowd.ru");

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
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"Body=app_id=fkbc3no8&v=3&g=b328554bf0d56eab47f83ce47cf7e7dd3670982f&s=0653de7e-6647-4fad-9a3f-6b630e925b39&i=&r=https%3A%2F%2Floadtest.uxcrowd.ru%2F&platform=web&Idempotency-Key=48319ae4c1151828&user_data=%7B%22email%22%3A%22matt.jeevas%40mail.ru%22%2C%22user_id%22%3A493309903%2C%22anonymous_id%22%3A%22d11c0c8f-087f-4628-b90f-26b5b9661d3d%22%7D&internal=%7B%7D&page_title=%D0%92%D1%81%D0%B5%20%D1%82%D0%B5%D1%81%D1%82%D1%8B&user_active_company_id=-1&source=apiUpdate&sampling=false&h=false&referer="
		"https%3A%2F%2Floadtest.uxcrowd.ru%2Fapp-customer-home%2Ftests%2F17002087&anonymous_session=c21kbzJKVTlNbGhNRHJVMmhIZnEvYUVZVEQ1RkE4by9mMUNZRi9ENG96bE56em9ybHNuQjJxSmNGeld6bXl2TC0tZi9kN2FkRytRVHBYWDNzWVBRZllMUT09--15ab64ccfb9cd2814411ecc23096c941dffc67a5", 
		EXTRARES, 
		"Url=https://loadtest.uxcrowd.ru/assets/js/customer_js/react/new_video/2.a431f707.chunk.js?_=1597923385160", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=https://loadtest.uxcrowd.ru/assets/js/customer_js/react/new_video/main.5e193360.chunk.js?_=1597923385161", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=https://loadtest.uxcrowd.ru/assets/js/customer_js/react/new_video/runtime-main.1a5f5893.js?_=1597923385162", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive8*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/tests/17002087\"}}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR04_test_open",LR_AUTO);

	lr_start_transaction("UC05_TR05_video_open");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-XSRF-TOKEN", 
		"f9e19e06-4fbe-436c-94fd-64f671e58231");

	web_url("user_3", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tariff/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/video-player/bigPlay.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923576898\",\"eventData\":{\"sendTime\":1597923576898,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive9*/

	web_url("relatedVideoIds", 
		"URL=https://loadtest.uxcrowd.ru/api/video/relatedVideoIds?videoId=398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("tags", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/398215fc-d04f-4af6-8648-7fddf62a8c63/tags", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/video-player/AddComment.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_url("notes", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/video/398215fc-d04f-4af6-8648-7fddf62a8c63/notes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/assets/svg/video-player/TranscriptExample.png", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=/assets/svg/video-player/download.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=/assets/svg/down-chevron.svg", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_revert_auto_header("X-XSRF-TOKEN");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"video");

	web_stream_open("ID=1", "URL=https://loadtest.uxcrowd.ru/videos/2020-08-20-10-09-46-17002087-blob.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Origin", 
		"https://loadtest.uxcrowd.ru");

	web_add_cookie("intercom-session-fkbc3no8=WjRHYXl5RENjcTNSQndBakVVMWlITFUyVmhvcUVwTjJ1QXZZcUhjc01YY1o0ck9Jc2psMDN4elphRXA2MUg0NC0tcDViL002UkdIU0FTWGoxNE92MGNudz09--2226c35fc47a64b6b3d3b023a787a51d259e2e80; DOMAIN=loadtest.uxcrowd.ru");

	web_submit_data("ping_5", 
		"Action=https://api-iam.intercom.io/messenger/web/ping", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=app_id", "Value=fkbc3no8", ENDITEM, 
		"Name=v", "Value=3", ENDITEM, 
		"Name=g", "Value=b328554bf0d56eab47f83ce47cf7e7dd3670982f", ENDITEM, 
		"Name=s", "Value=0653de7e-6647-4fad-9a3f-6b630e925b39", ENDITEM, 
		"Name=i", "Value=", ENDITEM, 
		"Name=r", "Value=https://loadtest.uxcrowd.ru/", ENDITEM, 
		"Name=platform", "Value=web", ENDITEM, 
		"Name=Idempotency-Key", "Value=9ed92a2f67acb270", ENDITEM, 
		"Name=user_data", "Value={\"email\":\"matt.jeevas@mail.ru\",\"user_id\":493309903,\"anonymous_id\":\"d11c0c8f-087f-4628-b90f-26b5b9661d3d\"}", ENDITEM, 
		"Name=internal", "Value={}", ENDITEM, 
		"Name=page_title", "Value=Видео", ENDITEM, 
		"Name=user_active_company_id", "Value=-1", ENDITEM, 
		"Name=source", "Value=apiUpdate", ENDITEM, 
		"Name=sampling", "Value=false", ENDITEM, 
		"Name=h", "Value=false", ENDITEM, 
		"Name=referer", "Value=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Name=anonymous_session", "Value=VkxPUUxpTHlsc0dyRm02Y2JYTmhxMmV6ODFMeTRIRFdPSEVocEtwQVcwMlBqS3FnQmlOVVdoZm1OWCtLTkVsTS0takFzU0dJVmVTajZrVktCaWJ1TXZBdz09--0427f1ace2cb6cbcc89966a1849e4f5c1f38af99", ENDITEM, 
		EXTRARES, 
		"Url=https://loadtest.uxcrowd.ru/videos/2020-08-20-10-09-46-17002087-blob.mp4", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		"Url=https://loadtest.uxcrowd.ru/favicon114w.png", "Referer=https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63", ENDITEM, 
		LAST);

	web_stream_close("ID=1", LAST);

	/*Connection ID 2 received buffer WebSocketReceive10*/

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63\"}}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR05_video_open",LR_AUTO);

	lr_think_time(13);

	lr_start_transaction("UC05_TR06_vido_watch");

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.Ping\",\"eventGuid\":\"1597923635720\",\"eventData\":{\"sendTime\":1597923635720,\"endpoint\":\"https://nexus-websocket-a.intercom.io/pubsub/5-aqmvc2WDdJRqT4GdTB0JvuL-eJbavHqrT5YJ6IXA1L897mjFSxd3DY2hCHjHsDCABuDEed_ZkNQLQMZbcmNBm1lhU7KLhyU-_CcN\"}}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive11*/

	/*Connection ID 2 received buffer WebSocketReceive12*/

	lr_think_time(20);

	web_websocket_send("ID=2", 
		"Buffer={\"eventName\":\"nx.UserPresence\",\"eventData\":{\"current_page\":\"https://loadtest.uxcrowd.ru/app-customer-home/new-video/398215fc-d04f-4af6-8648-7fddf62a8c63\"}}", 
		"IsBinary=0", 
		LAST);

	lr_end_transaction("UC05_TR06_vido_watch",LR_AUTO);

	return 0;
}
