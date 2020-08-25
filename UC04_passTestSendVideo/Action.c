char FileLocation[1024];
long FileVarriable;
Action()
{
	web_set_max_html_param_len("1024");
	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	
	//GET XSRF-TOKEN
	web_reg_save_param_ex(
     	"ParamName=XSRFtoken", 
     	"LB/IC=Set-Cookie: XSRF-TOKEN=",
     	"RB/IC=;",
  	LAST);
	
	//GET CSRF-TOKEN
	web_reg_save_param_ex(
     	"ParamName=CSRFtoken", 
     	"LB/IC=Set-Cookie: CSRF-TOKEN=",
     	"RB/IC=;",
  	LAST);
	
	lr_start_transaction("UC04_TR01_startPage");
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
		LAST);
	lr_end_transaction("UC04_TR01_startPage", LR_AUTO);
	web_add_auto_header("X-XSRF-TOKEN", lr_eval_string("{XSRFtoken}"));
	
	lr_start_transaction("UC04_TR02_preseVoiti");//I press "Voiti" button on start page
		web_url("modal-login.html", 
		"URL=https://loadtest.uxcrowd.ru/tmpl/tmpl_home/modal-login.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("UC04_TR02_preseVoiti", LR_AUTO);
	
	
	//GET new XSRF-TOKEN
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
	lrvtc_retrieve_message("t_username");
	
	lr_start_transaction("UC04_TR03_preseVoiti2");//I enter login and pass press "Voiti" button
		
		web_submit_data("authentication",
		"Action=https://loadtest.uxcrowd.ru/api/authentication", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value={t_username}", ENDITEM, //mr_tester4@1secmail.com
		"Name=password", "Value=ajbPwV", ENDITEM, 
		"Name=remember-me", "Value=undefined", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

		web_add_auto_header("X-XSRF-TOKEN", lr_eval_string("{XSRFtoken}"));
	
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
		
		web_url("new-tasks", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/new-tasks?isMobile=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);
		
		web_url("profile_2", 
		"URL=https://loadtest.uxcrowd.ru/api/v2/tester/profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/", 
		"Snapshot=t15.inf", 
		"Mode=HTML",
		LAST);

	lr_end_transaction("UC04_TR03_preseVoiti2", LR_AUTO);
	
	web_add_auto_header("X-XSRF-TOKEN", lr_eval_string("{XSRFtoken}"));
	lrvtc_retrieve_message("order_id");
	
	web_reg_save_param_ex("ParamName=videoId",
	                                     "LB=",
	                                     "RB=",
	                                     "Ordinal=1",
	                                     SEARCH_FILTERS,
										"Scope=Body",
	                                      LAST);
	
	lr_start_transaction("UC04_TR04_preseProiti");//I press "Proiti" button
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
		"Body={\"orderId\":{order_id},\"screenName\":\"START_PLUGIN\",\"testerId\":{userId}}", ///параметризовать
		LAST);
	
		web_reg_save_param("stepId",
		"LB=\"id\":",
		"RB=,\"question",
		LAST);
	
		web_custom_request("update", 
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t124.inf",
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"SCREEN_CAPTURE\"}", //\"16997737\"  "orderId":"16997737","id":20166,"screenName":"SCREEN_CAPTURE"}
		EXTRARES, 
		"Url=../account", "Referer=", ENDITEM, 
		"Url=../tester/order-info?id={order_id}", "Referer=", ENDITEM,
		LAST);
	lr_end_transaction("UC04_TR04_preseProiti", LR_AUTO);
	
	
	//формируем содержимое json-файла
	strcpy(FileLocation,"C:\\UC04_Video_json\\");
	strcat(FileLocation, lr_eval_string("{stepId}"));	
	strcat(FileLocation, ".json");
	//lr_output_message("%s",FileLocation);
	
		//для отладки
		//lr_output_message(FileLocation);
	
	FileVarriable = fopen(FileLocation, "w+");
	
    fprintf (FileVarriable, "%s", lr_eval_string("[{\"orderNum\":0,\"stepId\":"));
	fprintf (FileVarriable, "%s", lr_eval_string("{stepId}"));  
	fprintf (FileVarriable, "%s", lr_eval_string(",\"startTime\":\"00:00:00\"}]")); 		
    fclose (FileVarriable);

	lr_start_transaction("UC04_TR05_pressNastoiZapis");
		
	web_custom_request("update",
		"URL=https://loadtest.uxcrowd.ru/api/stats/update", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Snapshot=t124.inf",
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"SCREEN_CAPTURE\"}", //\"16997737\"  "orderId":"16997737","id":20166,"screenName":"SCREEN_CAPTURE"}
		LAST);
	
		web_reg_save_param_json(
        "ParamName=taskId",
        "QueryString=$.id",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
	
		web_custom_request("create-task", 
		"URL=https://loadtest.uxcrowd.ru/api/tester/create-task?orderId={order_id}", 
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
	
	lr_end_transaction("UC04_TR05_pressNastoiZapis", LR_AUTO);

	lr_start_transaction("UC04_TR06_pressNachatTest");//I press "nachat test" button
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
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"FINAL_INSTRUCTION\"}", 
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
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"START_PLUGIN\"}", 
		LAST);
	
	lr_end_transaction("UC04_TR06_pressNachatTest", LR_AUTO);

	lr_start_transaction("UC04_TR07_pressZakonchitTest");
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
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"COMPLETE_TEST\"}", 
		LAST);
	lr_end_transaction("UC04_TR07_pressZakonchitTest", LR_AUTO);

	lr_start_transaction("UC04_TR08_sendVideo");
	
	web_submit_data("video-upload-app", 
		"Action=https://loadtest.uxcrowd.ru/api/video-upload-app", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=multipart/form-data", //application/json text/plain
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
		"Body={\"orderId\":{order_id},\"id\":{videoId},\"screenName\":\"UPLOAD_VIDEO\",\"testerTaskId\":\"{taskId}\"}", 
		LAST);
	
	lr_end_transaction("UC04_TR08_sendVideo", LR_AUTO);
	lrvtc_send_message("video_id",lr_eval_string("{order_id}"));
	
	lr_start_transaction("UC04_TR09_pressOKafterUpload");
		web_url("account_4", 
		"URL=https://loadtest.uxcrowd.ru/api/account", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://loadtest.uxcrowd.ru/app-tester-home/new-tasks", 
		"Snapshot=t35.inf", 
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
		LAST);
	lr_end_transaction("UC04_TR09_pressOKafterUpload", LR_AUTO);

	lr_start_transaction("UC04_TR10_logOut");
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
	lr_end_transaction("UC04_TR10_logOut", LR_AUTO);





	return 0;
}
