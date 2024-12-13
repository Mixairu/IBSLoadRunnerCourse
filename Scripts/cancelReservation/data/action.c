Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t4.inf", 
		LAST);

	web_url("canonical.html_4", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t7.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_6", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("canonical.html_8", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_7", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("canonical.html_9", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_8", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("canonical.html_10", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_9", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		LAST);

	lr_start_transaction("GoTo WebTours");

	web_url("canonical.html_11", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_10", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("canonical.html_12", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_11", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("canonical.html_13", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_12", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t26.inf", 
		LAST);

	web_url("canonical.html_14", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_13", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("canonical.html_15", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_14", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("GoTo WebTours",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("login");

	web_url("canonical.html_16", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_15", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t32.inf", 
		LAST);

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=140443.002349129HcctADzpQDDDDDDDtDDttpccVz", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=login.x", "Value=50", ENDITEM, 
		"Name=login.y", "Value=9", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(14);

	web_url("canonical.html_17", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_16", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("canonical.html_18", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_17", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("canonical.html_19", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_18", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t39.inf", 
		LAST);

	lr_start_transaction("GoTo Itnerary");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(6);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("GoTo Itnerary",LR_AUTO);

	web_revert_auto_header("Priority");

	lr_think_time(17);

	web_url("canonical.html_20", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_19", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t42.inf", 
		LAST);

	lr_start_transaction("DelReservation");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);

	web_submit_data("itinerary.pl", 
		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flightID", "Value=0-7-JB", ENDITEM, 
		"Name=2", "Value=on", ENDITEM, 
		"Name=flightID", "Value=0-15-JB", ENDITEM, 
		"Name=flightID", "Value=83041564-2327-JB", ENDITEM, 
		"Name=removeFlights.x", "Value=73", ENDITEM, 
		"Name=removeFlights.y", "Value=8", ENDITEM, 
		"Name=.cgifields", "Value=1", ENDITEM, 
		"Name=.cgifields", "Value=3", ENDITEM, 
		"Name=.cgifields", "Value=2", ENDITEM, 
		LAST);

	lr_end_transaction("DelReservation",LR_AUTO);

	return 0;
}