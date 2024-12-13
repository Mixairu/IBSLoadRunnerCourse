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

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t6.inf", 
		LAST);

	web_url("canonical.html_5", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t8.inf", 
		LAST);

	web_url("canonical.html_6", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
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
		"Snapshot=t10.inf", 
		LAST);

	web_url("canonical.html_7", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
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
		"Snapshot=t12.inf", 
		LAST);

	web_url("canonical.html_8", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
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
		"Snapshot=t14.inf", 
		LAST);

	web_url("canonical.html_9", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
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
		"Snapshot=t16.inf", 
		LAST);

	web_url("canonical.html_10", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
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
		"Snapshot=t18.inf", 
		LAST);

	web_url("canonical.html_11", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
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
		"Snapshot=t20.inf", 
		LAST);

	lr_think_time(6);

	lr_start_transaction("GoTo WebTours");

	web_url("canonical.html_12", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t21.inf", 
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
		"Snapshot=t22.inf", 
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
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("canonical.html_13", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
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
		"Snapshot=t25.inf", 
		LAST);

	web_url("canonical.html_14", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t26.inf", 
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
		"Snapshot=t27.inf", 
		LAST);

	web_url("canonical.html_15", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t28.inf", 
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
		"Snapshot=t29.inf", 
		LAST);

	web_url("canonical.html_16", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
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
		"Snapshot=t31.inf", 
		LAST);

	lr_end_transaction("GoTo WebTours",LR_AUTO);

	lr_start_transaction("GoTo reg");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(18);

	web_url("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("canonical.html_17", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t33.inf", 
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
		"Snapshot=t34.inf", 
		LAST);

	lr_end_transaction("GoTo reg",LR_AUTO);

	lr_think_time(13);

	web_url("canonical.html_18", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t35.inf", 
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
		"Snapshot=t36.inf", 
		LAST);

	web_url("canonical.html_19", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t37.inf", 
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
		"Snapshot=t38.inf", 
		LAST);

	web_url("canonical.html_20", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t39.inf", 
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
		"Snapshot=t40.inf", 
		LAST);

	web_url("canonical.html_21", 
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

	lr_start_transaction("reg user");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(20);

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=jo", ENDITEM, 
		"Name=password", "Value=jo", ENDITEM, 
		"Name=passwordConfirm", "Value=jo", ENDITEM, 
		"Name=firstName", "Value=jo", ENDITEM, 
		"Name=lastName", "Value=jo", ENDITEM, 
		"Name=address1", "Value=jo", ENDITEM, 
		"Name=address2", "Value=jo", ENDITEM, 
		"Name=register.x", "Value=49", ENDITEM, 
		"Name=register.y", "Value=5", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_url("canonical.html_22", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_url("success.txt_20", 
		"URL=http://detectportal.firefox.com/success.txt?ipv4", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t45.inf", 
		LAST);

	lr_end_transaction("reg user",LR_AUTO);

	lr_start_transaction("continue");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("continue",LR_AUTO);

	lr_think_time(21);

	lr_start_transaction("logout");

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);

	return 0;
}