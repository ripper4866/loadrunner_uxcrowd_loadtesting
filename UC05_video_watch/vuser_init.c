vuser_init()
{

	char *VtsServer = "IPv4";
	int nPort = 0000;

//	connect to VTS
	lrvtc_connect(VtsServer, nPort, VTOPT_KEEP_ALIVE);

//	extracting order id with video
	lrvtc_rotate_message("video_id", VTSEND_STACKED);
	
	lrvtc_disconnect();
	
	return 0;
}
