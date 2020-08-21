void OnOpenCB1 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
//		lr_output_message("WebSocket ID = %s connected", connectionID);
//		lr_save_param_regexp (AccumulatedHeadersStr,
//							  AccumulatedHeadersLen,
//							  "RegExp=Sec-WebSocket-Accept: (.+)\\r\\n",
//							  "ResultParam=Accept",
//							  LAST );
//		lr_output_message("Sec-WebSocket-Accept = [%s]",
//						  lr_eval_string("{Accept}"));

}

void OnMessageCB1 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
//		if (isbinary) {
//			lr_output_message("WebSocket ID = %s. [%d] bytes binary message received.", connectionID, length);
//		}
//		else {
//			lr_output_message("WebSocket ID = %s. [%d] bytes text message received.", connectionID, length);
//		}
}

void OnErrorCB1 (const char* connectionID,
				  const char * message,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s error occured. Error message = %s", connectionID, message);
}

void OnCloseCB1 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s closed. CloseCode= %d, CloseReason=%s", connectionID, code, reason);
}

void OnOpenCB2 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
//		lr_output_message("WebSocket ID = %s connected", connectionID);
//		lr_save_param_regexp (AccumulatedHeadersStr,
//							  AccumulatedHeadersLen,
//							  "RegExp=Sec-WebSocket-Accept: (.+)\\r\\n",
//							  "ResultParam=Accept",
//							  LAST );
//		lr_output_message("Sec-WebSocket-Accept = [%s]",
//						  lr_eval_string("{Accept}"));

}

void OnMessageCB2 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
//		if (isbinary) {
//			lr_output_message("WebSocket ID = %s. [%d] bytes binary message received.", connectionID, length);
//		}
//		else {
//			lr_output_message("WebSocket ID = %s. [%d] bytes text message received.", connectionID, length);
//		}
}

void OnErrorCB2 (const char* connectionID,
				  const char * message,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s error occured. Error message = %s", connectionID, message);
}

void OnCloseCB2 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s closed. CloseCode= %d, CloseReason=%s", connectionID, code, reason);
}

void OnOpenCB3 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
//		lr_output_message("WebSocket ID = %s connected", connectionID);
//		lr_save_param_regexp (AccumulatedHeadersStr,
//							  AccumulatedHeadersLen,
//							  "RegExp=Sec-WebSocket-Accept: (.+)\\r\\n",
//							  "ResultParam=Accept",
//							  LAST );
//		lr_output_message("Sec-WebSocket-Accept = [%s]",
//						  lr_eval_string("{Accept}"));

}

void OnMessageCB3 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
//		if (isbinary) {
//			lr_output_message("WebSocket ID = %s. [%d] bytes binary message received.", connectionID, length);
//		}
//		else {
//			lr_output_message("WebSocket ID = %s. [%d] bytes text message received.", connectionID, length);
//		}
}

void OnErrorCB3 (const char* connectionID,
				  const char * message,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s error occured. Error message = %s", connectionID, message);
}

void OnCloseCB3 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
//		lr_output_message("WebSocket ID = %s closed. CloseCode= %d, CloseReason=%s", connectionID, code, reason);
}

