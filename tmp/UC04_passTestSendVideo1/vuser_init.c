vuser_init()
{
	lrvtc_connect("{VTSserver}",80,VTOPT_KEEP_ALIVE);
	return 0;
}
