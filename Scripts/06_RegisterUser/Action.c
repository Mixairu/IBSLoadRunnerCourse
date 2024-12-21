Action()
{
	
	lr_start_transaction("UC6_RegisterUser");
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("GoTo WebTours");

	

	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	
	web_reg_find("Text=A Session ID has been created",LAST);

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("GoTo WebTours",LR_AUTO);
	
		lr_think_time(5);

	lr_start_transaction("GoTo reg");

	
	web_reg_find("Text=<title>User Information</title>",LAST);
	

	web_url("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("GoTo reg",LR_AUTO);

		lr_think_time(5);

	lr_start_transaction("reg user");

	
	web_reg_find("Text=<title>Welcome to Web Tours</title>",LAST);
	
	web_reg_find("Text=Thank you, <b>{username}</b>, for registering",LAST);
	

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={username}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=passwordConfirm", "Value={password}", ENDITEM, 
		"Name=firstName", "Value={firstName}", ENDITEM, 
		"Name=lastName", "Value={secondName}", ENDITEM, 
		"Name=address1", "Value={street}", ENDITEM, 
		"Name=address2", "Value={city}", ENDITEM, 
		"Name=register.x", "Value=49", ENDITEM, 
		"Name=register.y", "Value=5", ENDITEM, 
		LAST);


	lr_end_transaction("reg user",LR_AUTO);
	
		lr_think_time(5);

	lr_start_transaction("click continue");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(10);
	
	web_reg_find("Text= User has returned to the home page",LAST);
	
	web_reg_find("Text=<blockquote>Welcome, <b>{username}</b>, to the Web Tours",LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("click continue",LR_AUTO);

		lr_think_time(5);

	lr_start_transaction("logout");
	
	web_reg_find("Text=A Session ID has been created",LAST);

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
	
	lr_end_transaction("UC6_RegisterUser", LR_AUTO);


	return 0;
}