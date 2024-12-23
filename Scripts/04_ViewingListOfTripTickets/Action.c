Action()
{
	lr_start_transaction("UC4_ViewTicketList");


	web_set_sockets_option("SSL_VERSION", "AUTO");


	lr_start_transaction("GoTo WebTours");


	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=A Session ID has been created",LAST);

/*Correlation comment - Do not change!  Original value='140442.964115026HcctADtpQzzzzzzHtDDttpcAQi' Name ='userSession' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=userSession",
		"TagName=input",
		"Extract=value",
		"Name=userSession",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/nav.pl*",
		LAST);

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

	lr_start_transaction("login");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=User password was correct",LAST);
	
	web_reg_find("Text=<blockquote>Welcome, <b>{username}</b>, to the Web Tours",LAST);

	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t32.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=49", ENDITEM,
		"Name=login.y", "Value=6", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);


	lr_end_transaction("login",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("GoTo Itnerary");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=User wants the intineraries",LAST);
	
	web_reg_find("Text=<B>{firstName} {secondName}",LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("GoTo Itnerary",LR_AUTO);
	
	lr_think_time(5);	
	
	lr_start_transaction("logout");
	
	web_reg_find("Text=A Session ID has been created",LAST);
	
	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);	
	
	lr_end_transaction("logout", LR_AUTO);

	
	lr_end_transaction("UC4_ViewTicketList", LR_AUTO);


	return 0;
}