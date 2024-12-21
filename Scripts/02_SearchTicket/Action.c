Action()
{
	
	char* randArriveCity;
	
	lr_start_transaction("UC2_FindFlight");


	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("GoTo WebTours");
	
	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=A Session ID has been created",LAST);

/*Correlation comment - Do not change!  Original value='140442.692507088HcctAcApQQfiDDDDtDDttpVcfQHf' Name ='userSession' Type ='ResponseBased'*/
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
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_end_transaction("GoTo WebTours",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("LogIn");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

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
		"Snapshot=t76.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=0", ENDITEM,
		"Name=login.y", "Value=0", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);


	lr_end_transaction("LogIn",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("GoTo Fligths");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=User has returned to the search page",LAST);
	
	web_reg_save_param_ex("ParamName=departCity","LB=<option value\=\"","RB=\">","Ordinal=All",LAST);
	
	web_reg_save_param_ex("ParamName=arriveCity","LB=<option value\=\"","RB=\">","Ordinal=All",LAST);
		
	web_reg_save_param_ex("ParamName=seatPref","LB=seatPref\" value\=\"","RB=\"","Ordinal=All",LAST);
	
	web_reg_save_param_ex("ParamName=seatType","LB=seatType\" value\=\"","RB=\"","Ordinal=All",LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("GoTo Fligths",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("FindFlight");
	
	
//	lr_save_string(lr_paramarr_random("departCity"),"randDepartCity");
//	lr_save_string(lr_paramarr_random("arriveCity"),"randArriveCity");
	
	
	
	lr_save_string(lr_paramarr_random("departCity"), "randDepartCity");
do {
    randArriveCity = lr_paramarr_random("arriveCity");
} while (strcmp(randArriveCity, lr_eval_string("{randDepartCity}")) == 0);

lr_save_string(randArriveCity, "randArriveCity");
	
	
	lr_save_string(lr_paramarr_random("seatPref"),"randSeatPref");
	lr_save_string(lr_paramarr_random("seatType"),"randSeatType");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=<title>Flight Selections</title>",LAST);
	
	web_reg_find("Text=Flight departing from <B>{randDepartCity}</B> to <B>{randArriveCity}</B>",LAST);
	
//	char expectedText[256]; 
//	lr_param_sprintf(expectedText, "Flight departing from <B>%s</B> to <B>%s</B>", randDepartCity, randArriveCity);
//	web_reg_find("Text={expectedText}", LAST);

/*Correlation comment - Do not change!  Original value='142;228;12/10/2024' Name ='outboundFlight' Type ='ResponseBased'*/
	web_reg_save_param_attrib(
		"ParamName=outboundFlight",
		"TagName=input",
		"Extract=value",
		"Name=outboundFlight",
		"Type=radio",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value={randDepartCity}", ENDITEM, 
		"Name=departDate", "Value={flight_date}", ENDITEM, 
		"Name=arrive", "Value={randArriveCity}", ENDITEM, 
		"Name=returnDate", "Value={arrival_date}", ENDITEM, 
		"Name=numPassengers", "Value={numPassengers}", ENDITEM, 
		"Name=seatPref", "Value={randSeatPref}", ENDITEM, 
		"Name=seatType", "Value={randSeatType}", ENDITEM, 
		"Name=findFlights.x", "Value=56", ENDITEM, 
		"Name=findFlights.y", "Value=6", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	lr_end_transaction("FindFlight", LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("ChooseTicket");

	
	
	web_reg_find("Text=<title>Flight Reservation</title>",LAST);
	web_reg_find("Text=firstName\" value=\"{firstName}\"", LAST);

	web_submit_data("reservations.pl_2",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t85.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value={numPassengers}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={randSeatType}", ENDITEM,
		"Name=seatPref", "Value={randSeatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=71", ENDITEM,
		"Name=reserveFlights.y", "Value=12", ENDITEM,
		LAST);
	
	lr_end_transaction("ChooseTicket", LR_AUTO);


	lr_end_transaction("UC2_FindFlight", LR_AUTO);


	return 0;
}