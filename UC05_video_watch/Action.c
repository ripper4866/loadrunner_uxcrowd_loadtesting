double videoDuration;
int videoDurationInteger;

Action()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_reg_save_param_ex(
		"ParamName=XSRF_TOKEN",
		"LB/ic=Set-Cookie: XSRF-TOKEN\=",
		"RB/ic=;",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=CSRF_TOKEN",
		"LB/ic=Set-Cookie: CSRF-TOKEN\=",
		"RB/ic=;",
		LAST);
	
	// ====================================
	//	UC05_TR0X_open_mainpage
	// ====================================
	lr_start_transaction("UC05_TR0X_open_mainpage");
	
	// All resources (except "/api/account") are not necessary in script, but can produce load
	web_url("loadtest.uxcrowd.ru", 
		"URL={host}/",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t260.inf",
		"Mode=HTML",
		EXTRARES,
		"Url=/api/account", ENDITEM,
//		"Url=/assets/gulp/sup_css.css", ENDITEM, 
//		"Url=/assets/css/landing/webflow.css", ENDITEM, 
//		"Url=/assets/css/landing/uxcrowd.webflow.css", ENDITEM, 
//		"Url=/assets/css/landing/YouTube.HD.Thumbnail.css", ENDITEM, 
//		"Url=/assets/gulp/env.js", ENDITEM, 
//		"Url=/library/jquery.js", ENDITEM, 
//		"Url=/library/jquery.form.js", ENDITEM, 
//		"Url=/library/moment.min.js", ENDITEM, 
//		"Url=/library/jquery.uploadfile.min.js", ENDITEM, 
//		"Url=/assets/js/main_js/validation.js", ENDITEM, 
//		"Url=/assets/js/main_js/init.js", ENDITEM, 
//		"Url=/library/FileSaver.js", ENDITEM, 
//		"Url=/assets/gulp/sup_js.js", ENDITEM, 
//		"Url=/assets/js/main_js/validation.rule.js", ENDITEM, 
//		"Url=https://ulogin.ru/js/ulogin.js", ENDITEM, 
//		"Url=/assets/js/app_js/auth.interceptor.js", ENDITEM, 
//		"Url=/assets/gulp/app_js.js", ENDITEM, 
//		"Url=/assets/js/main_js/mediaelement-and-player.js", ENDITEM, 
//		"Url=/assets/gulp/admin_js.js", ENDITEM, 
//		"Url=/assets/gulp/customer_js.js", ENDITEM, 
//		"Url=/assets/gulp/blog_js.js", ENDITEM, 
//		"Url=/assets/gulp/home_js.js", ENDITEM, 
//		"Url=/assets/gulp/moderator_js.js", ENDITEM, 
//		"Url=/assets/gulp/new_tester_js.js", ENDITEM, 
//		"Url=/assets/gulp/tester_js.js", ENDITEM, 
//		"Url=/library/require.js", ENDITEM, 
//		"Url=/assets/js/main_js/path_controller.js", ENDITEM, 
//		"Url=/assets/js/landing/jQuery.YouTube.HD.Thumbnail.js", ENDITEM, 
//		"Url=/assets/js/main_js/main_route.js", ENDITEM, 
//		"Url=/controller/controller_home/login.controller.js?bust=1597936279196", ENDITEM, 
//		"Url=/controller/controller_home/newMain.controller.js?bust=1597936279196", ENDITEM, 
//		"Url=/app.js?bust=1597936279196", ENDITEM, 
		LAST);

	
	web_add_cookie("XSRF-TOKEN={XSRF_TOKEN}; DOMAIN=loadtest.uxcrowd.ru");
	web_add_cookie("CSRF-TOKEN={CSRF_TOKEN}; DOMAIN=loadtest.uxcrowd.ru");
	
	web_add_auto_header("X-XSRF-TOKEN", "{XSRF_TOKEN}");
	
	

	// These HTML partials are not necessary in script, but can produce load
	
//	web_url("headerGreenWhite.html", 
//		"URL={host}/tmpl/tmpl_landing_new/headerGreenWhite.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={host}/", 
//		"Snapshot=t262.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("home.html", 
//		"URL={host}/tmpl/tmpl_landing_new/home.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={host}/", 
//		"Snapshot=t263.inf", 
//		"Mode=HTML", 
//		LAST);
//
//	web_url("footer.html", 
//		"URL={host}/tmpl/tmpl_landing_new/footer.html", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=text/html", 
//		"Referer={host}/", 
//		"Snapshot=t264.inf", 
//		"Mode=HTML", 
//		LAST);
//	web_url("modal-login.html",
//		"URL={host}/tmpl/tmpl_home/modal-login.html",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=text/html",
//		"Referer={host}/",
//		"Snapshot=t269.inf",
//		"Mode=HTML",
//		LAST);
	lr_end_transaction("UC05_TR0X_open_mainpage", LR_AUTO);
	// ====================================
	//	UC05_TR0X_open_mainpage_end
	// ====================================
	
	// ====================================
	//	UC05_TR0X_auth_client
	// ====================================
	lr_start_transaction("UC05_TR0X_auth_client");
	
	web_submit_data("authentication", 
		"Action={host}/api/authentication", 
		"Method=POST", 
		"Referer={host}/", 
		"Snapshot=t448.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	
	lr_end_transaction("UC05_TR0X_auth_client", LR_AUTO);
	// ====================================
	//	UC05_TR0X_auth_client_end
	// ====================================
	
	
	// ====================================
	//	UC05_TR0X_open_orders_page
	// ====================================
	lr_start_transaction("UC05_TR0X_open_orders_page");
	
	web_url("list-orders", 
		"URL={host}/app-customer-home/list-orders", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={host}/", 
		"Snapshot=t619.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("UC05_TR0X_open_orders_page", LR_AUTO);
	// ====================================
	//	UC05_TR0X_open_orders_page_end
	// ====================================
	
	// ====================================
	// ====================================
	// DEFINE TEST ID HERE!!!
	lr_save_string("16997737", "testNum");
	// ====================================
	// ====================================

	// ====================================
	//	UC05_TR0X_open_test_page
	// ====================================
	lr_start_transaction("UC05_TR0X_open_test_page");
	
	web_url("testPage", 
		"URL={host}/app-customer-home/tests/{testNum}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t658.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("UC05_TR0X_open_test_page", LR_AUTO);
	// ====================================
	//	UC05_TR0X_open_test_page_end
	// ====================================
	
	web_reg_save_param_regexp(
		"ParamName=videoId",
    	"RegExp=videoId\"\:\"(.*?)\"",
    	"Ordinal=1",
		LAST);
	
	// ====================================
	//	UC05_TR0X_video_get_id
	// ====================================
	lr_start_transaction("UC05_TR0X_video_get_id");

	
	web_url("testJson", 
		"URL={host}/api/v3/customer/order/{testNum}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/tests/{testNum}", 
		"Snapshot=t673.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_url("videoName", 
		"URL={host}/app-customer-home/new-video/{videoId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/tests/{testNum}", 
		"Snapshot=t674.inf", 
		"Mode=HTTP", 
		LAST);	
	
	lr_end_transaction("UC05_TR0X_video_get_id", LR_AUTO);
	// ====================================
	//	UC05_TR0X_video_get_id_end
	// ====================================
	
	
	web_reg_save_param_regexp(
		"ParamName=videoFileName",
    	"RegExp=\"fileName\":\"(.*?)\.(?:webm|mp4)\"",
    	"Ordinal=1",
		LAST);
	
	// ====================================
	//	UC05_TR0X_video_get_filename
	// ====================================
	lr_start_transaction("UC05_TR0X_video_get_filename");
	
	web_url("videoName", 
		"URL={host}/api/v3/video/{videoId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/new-video/{videoId}", 
		"Snapshot=t1099.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC05_TR0X_video_get_filename", LR_AUTO);
	// ====================================
	//	UC05_TR0X_video_get_filename_end
	// ====================================
	
	// ====================================
	//	UC05_TR0X_video_stream_init
	// ====================================
	lr_start_transaction("UC05_TR0X_video_stream_init");
	
	web_stream_open("ID=1",
		"URL={host}/videos/{videoFileName}.mp4",
		"Protocol=HTTP",
		"StreamBufferingTimeout=60",
		//"DumpPath=C:/file.mp4", // debug only, saves the video in storage using path address
		LAST);
	
	web_stream_set_param_double("1", SPEED, 1.0);
	web_stream_set_param_int("1", BUFFERING_TIMEOUT, 60);
	
	lr_end_transaction("UC05_TR0X_video_stream_init", LR_AUTO);
	// ====================================
	//	UC05_TR0X_video_stream_init_end
	// ====================================
	
	videoDuration = web_stream_get_param_double("1", DURATION);
	videoDurationInteger = videoDuration;
	
	lr_output_message("Actual movie length : %lf", videoDuration);
	lr_output_message("Movie length to watch (integer seconds): %d", videoDurationInteger);
	

	lr_think_time(15);

	// ====================================
	//	UC05_TR0X_video_streaming
	// ====================================
	lr_start_transaction("UC05_TR0X_video_streaming");
	
	lr_param_sprintf("videoDurationStreamParam", "PlayingDuration=%d", videoDurationInteger);
	web_stream_play("ID=1", lr_eval_string("{videoDurationStreamParam}"), "Speed=1", LAST);
	

	lr_vuser_status_message("Current time in movie: %lf", web_stream_get_param_double("1", CURRENT_TIME));

	web_stream_stop("ID=1", LAST);
	web_stream_close("ID=1", LAST);

	lr_end_transaction("UC05_TR0X_video_streaming", LR_AUTO);
	// ====================================
	//	UC05_TR0X_video_streaming_end
	// ====================================
	
	return 0;
}