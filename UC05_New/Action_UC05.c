double videoDuration;
int videoDurationInteger, i, j;

Action_UC05()
{
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	// ====================================
	// ====================================
	// DEFINE TEST ID HERE!!!
//	lr_save_string("17002587", "order_video_id");
//	lr_save_string("16999189", "testNum");
	// ====================================
	// ====================================
	
	// ====================================
	//	UC05_TR01_open_mainpage
	// ====================================
	lr_start_transaction("UC05_TR01_open_mainpage");
	
	// All resources (except "/api/account") are not necessary in script, but can produce load
	web_url("loadtest.uxcrowd.ru", 
		"URL={host}/",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=",
		"Snapshot=t1.inf",
		"Mode=HTTP",
		LAST);

	

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
	lr_end_transaction("UC05_TR01_open_mainpage", LR_AUTO);
	// ====================================
	//	UC05_TR01_open_mainpage_end
	// ====================================

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
	//	UC05_TR02_auth_client
	// ====================================
	lr_start_transaction("UC05_TR02_auth_client");
	
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

	
	web_add_cookie("XSRF-TOKEN={XSRF_TOKEN}; DOMAIN=loadtest.uxcrowd.ru");
	web_add_cookie("CSRF-TOKEN={CSRF_TOKEN}; DOMAIN=loadtest.uxcrowd.ru");
	
	web_add_auto_header("X-XSRF-TOKEN", "{XSRF_TOKEN}");
	
	web_reg_save_param_regexp(
		"ParamName=XSRF_TOKEN",
		"RegExp=XSRF-TOKEN\=(.*?);",
		"Ordinal=2",
		LAST);
	
	web_submit_data("authentication", 
		"Action={host}/api/authentication", 
		"Method=POST", 
		"Referer={host}/", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES,
		"Url=/api/account", ENDITEM,
		LAST);
	
	lr_end_transaction("UC05_TR02_auth_client", LR_AUTO);
	// ====================================
	//	UC05_TR02_auth_client_end
	// ====================================
	
	web_revert_auto_header("X-XSRF-TOKEN");
	web_add_auto_header("X-XSRF-TOKEN", "{XSRF_TOKEN}");
	
	
	//	extracting the number of pages
	web_reg_save_param_regexp(
		"ParamName=pagesAll",
		"RegExp=totalPages\":(.*?),",
		"Ordinal=1",
		LAST);
	
	// ====================================
	//	UC05_TR03_open_orders
	// ====================================
	lr_start_transaction("UC05_TR03_open_orders");

	web_custom_request("orders", 
		"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"direction\":\"DESC\",\"filter\":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\",\"WAIT_CONFIRMATION\"],\"page\":0,\"size\":10,\"sort\":[\"startDate\"]}", 
		LAST);
	
	lr_end_transaction("UC05_TR03_open_orders", LR_AUTO);
	// ====================================
	//	UC05_TR03_open_orders_end
	// ====================================




	// ====================================
	//	UC05_TR04_list_orders_pages
	// ====================================
	lr_start_transaction("UC05_TR04_list_orders_pages");

	//	flipping pages to the desired value
	for(i = 0; i < atoi(lr_eval_string("{pagesAll}")); i++) {

		//	forming the request body to go to the next page
		lr_param_sprintf("bodyOrders", 
			"{\"direction\":\"DESC\",\"filter\"" 
			":[\"ACTIVE\",\"COMPLETED\",\"DRAFT\"," 
			"\"WAIT_CONFIRMATION\"],\"page\":%d" 
			",\"size\":10,\"sort\":[\"startDate\"]}", 
			i);
		
		//	search for the number of tests per page
		web_reg_find("Text=testTitle",
			"SaveCount=testsOnPage",
			LAST );

		web_custom_request("orders", 
			"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
			"Method=POST", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"EncType=application/json;charset=UTF-8", 
			"Body={bodyOrders}", 
			LAST);

		//	search for the required test
		for (j = 1; j <= atoi(lr_eval_string("{testsOnPage}")); j++) {
			
			lr_save_int(j, "testCount");

			//	getting all test IDs on the page for comparison with the target ID
			web_reg_save_param_regexp(
				"ParamName=testBuffer_{testCount}",
				"RegExp=id\":(\\d{8}),",
				"Ordinal={testCount}",
				LAST);
		}

		//	sending a request for functions generated by the loop to work
		web_custom_request("orders", 
			"URL=https://loadtest.uxcrowd.ru/api/v3/customer/orders", 
			"Method=POST", 
			"TargetFrame=", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://loadtest.uxcrowd.ru/app-customer-home/list-orders", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"EncType=application/json;charset=UTF-8", 
			"Body={bodyOrders}", 
			LAST);
		
		//	search for the required test
		for (j = 1; j <= atoi(lr_eval_string("{testsOnPage}")); j++){
			
			lr_param_sprintf("testCheckBuffer", "{testBuffer_%d}", j);

			//	end of the loop when the required test is found
			if (!strcmp(lr_eval_string(lr_eval_string("{testCheckBuffer}")), lr_eval_string("{order_video_id}"))) break;
		}
		if (!strcmp(lr_eval_string(lr_eval_string("{testCheckBuffer}")), lr_eval_string("{order_video_id}"))) break;
	}

	lr_end_transaction("UC05_TR04_list_orders_pages", LR_AUTO);
	// ====================================
	//	UC05_TR04_list_orders_pages_end
	// ====================================
	

	// ====================================
	//	UC05_TR05_open_test_page
	// ====================================
	lr_start_transaction("UC05_TR05_open_test_page");
	
	web_url("testPage", 
		"URL={host}/app-customer-home/tests/{order_video_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t658.inf", 
		"Mode=HTTP", 
		LAST);
	
	lr_end_transaction("UC05_TR05_open_test_page", LR_AUTO);
	// ====================================
	//	UC05_TR05_open_test_page_end
	// ====================================
	
	web_reg_save_param_regexp(
		"ParamName=videoId",
    	"RegExp=videoId\"\:\"(.*?)\"",
    	"Ordinal=1",
		LAST);
	
	// ====================================
	//	UC05_TR06_video_get_id
	// ====================================
	lr_start_transaction("UC06_TR0X_video_get_id");

	
	web_url("testJson", 
		"URL={host}/api/v3/customer/order/{order_video_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/tests/{order_video_id}", 
		"Snapshot=t673.inf", 
		"Mode=HTTP", 
		LAST);
	
	web_url("videoName", 
		"URL={host}/app-customer-home/new-video/{videoId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/tests/{order_video_id}", 
		"Snapshot=t674.inf", 
		"Mode=HTTP", 
		LAST);	
	
	lr_end_transaction("UC06_TR0X_video_get_id", LR_AUTO);
	// ====================================
	//	UC05_TR06_video_get_id_end
	// ====================================
	
	
	web_reg_save_param_regexp(
		"ParamName=videoFileName",
    	"RegExp=\"fileName\":\"(.*?)\.(?:webm|mp4)\"",
    	"Ordinal=1",
		LAST);
	
	// ====================================
	//	UC05_TR07_video_get_filename
	// ====================================
	lr_start_transaction("UC05_TR07_video_get_filename");
	
	web_url("videoName", 
		"URL={host}/api/v3/video/{videoId}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={host}/app-customer-home/new-video/{videoId}", 
		"Snapshot=t1099.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("UC05_TR07_video_get_filename", LR_AUTO);
	// ====================================
	//	UC05_TR07_video_get_filename_end
	// ====================================
	
	// ====================================
	//	UC05_TR08_video_stream_init
	// ====================================
	lr_start_transaction("UC05_TR08_video_stream_init");

	web_stream_open("ID=1",
		"URL={host}/videos/{videoFileName}.mp4",
		"Protocol=HTTP",
		"StreamBufferingTimeout=1200",
		//"DumpPath=file.mp4", // debug only, saves the video in storage using path address
		LAST);
	
	web_stream_set_param_double("1", SPEED, 2.0);
//	web_stream_set_param_int("1", BUFFERING_TIMEOUT, 60);
	
	lr_end_transaction("UC05_TR08_video_stream_init", LR_AUTO);
	// ====================================
	//	UC05_TR08_video_stream_init_end
	// ====================================
	
	videoDuration = web_stream_get_param_double("1", DURATION);
	videoDurationInteger = videoDuration;
	
	lr_output_message("Actual movie length : %lf", videoDuration);
	lr_output_message("Movie length to watch (integer seconds): %d", videoDurationInteger);
	

	lr_think_time(15);

	// ====================================
	//	UC05_TR09_video_streaming
	// ====================================
	lr_start_transaction("UC05_TR09_video_streaming");
	
	lr_param_sprintf("videoDurationStreamParam", "PlayingDuration=%d", videoDurationInteger);
	web_stream_play("ID=1", lr_eval_string("{videoDurationStreamParam}"), "Speed=2", LAST);
	

	//lr_vuser_status_message("Current time in movie: %lf", web_stream_get_param_double("1", CURRENT_TIME));

	web_stream_stop("ID=1", LAST);
	web_stream_close("ID=1", LAST);

	lr_end_transaction("UC05_TR09_video_streaming", LR_AUTO);
	// ====================================
	//	UC05_TR09_video_streaming_end
	// ====================================
	
	return 0;
}
