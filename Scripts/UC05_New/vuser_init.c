vuser_init()
{

	char *VtsServer = "e1fb0127c9a8.eu.ngrok.io";
	int nPort = 80;

//	connect to VTS
	lrvtc_connect(VtsServer, nPort, VTOPT_KEEP_ALIVE);

//	extracting order id with video
	lrvtc_rotate_message("video_id", VTSEND_STACKED);
	lr_save_string(lr_eval_string("{video_id}"), "order_video_id");
	
	if(!strlen(lr_eval_string("{order_video_id}"))) {
		lrvtc_rotate_message("video_id", VTSEND_STACKED);
		lr_save_string(lr_eval_string("{video_id}"), "order_video_id");
	}

	lrvtc_disconnect();
	
	return 0;
}
