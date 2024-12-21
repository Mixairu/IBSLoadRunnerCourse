Action()
{
	
	char* randArriveCity;
	
	lr_start_transaction("UC3_BuyTicket");
	


	web_set_sockets_option("SSL_VERSION", "AUTO");


	lr_start_transaction("GoTo WebTours");

	
	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=A Session ID has been created",LAST);

/*Correlation comment - Do not change!  Original value='140442.872660996HcctADApczcftDDttpViVfHf' Name ='userSession' Type ='ResponseBased'*/
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
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("GoTo WebTours",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("Login");

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
		"Snapshot=t63.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=66", ENDITEM,
		"Name=login.y", "Value=10", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("Login",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("GoTo Flights");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Upgrade-Insecure-Requests", 
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
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	
	lr_end_transaction("GoTo Flights",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("reservation");
	
	
//	lr_save_string(lr_paramarr_random("departCity"),"randDepartCity");
//	lr_save_string(lr_paramarr_random("arriveCity"),"randArriveCity");
//	
	
	
lr_save_string(lr_paramarr_random("departCity"), "randDepartCity");
do {
    randArriveCity = lr_paramarr_random("arriveCity");
} while (strcmp(randArriveCity, lr_eval_string("{randDepartCity}")) == 0);

lr_save_string(randArriveCity, "randArriveCity");

	lr_save_string(lr_paramarr_random("seatPref"),"randSeatPref");
	lr_save_string(lr_paramarr_random("seatType"),"randSeatType");
	
	web_reg_find("Text=<title>Flight Selections</title>",LAST);
	
	web_reg_find("Text=Flight departing from <B>{randDepartCity}</B> to <B>{randArriveCity}</B>",LAST);

/*Correlation comment - Do not change!  Original value='122;251;12/10/2024' Name ='outboundFlight' Type ='ResponseBased'*/
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
		"Snapshot=t75.inf", 
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
		"Name=findFlights.x", "Value=49", ENDITEM, 
		"Name=findFlights.y", "Value=12", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		LAST);

	
	lr_end_transaction("reservation", LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("FindFlight");
	
	web_reg_find("Text=<title>Flight Reservation</title>",LAST);
	web_reg_find("Text=firstName\" value=\"{firstName}\"", LAST);

	web_submit_data("reservations.pl_2",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t76.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=numPassengers", "Value={numPassengers}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=seatType", "Value={randSeatType}", ENDITEM,
		"Name=seatPref", "Value={randSeatPref}", ENDITEM,
		"Name=reserveFlights.x", "Value=58", ENDITEM,
		"Name=reserveFlights.y", "Value=6", ENDITEM,
		LAST);

	lr_end_transaction("FindFlight", LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("Payment details");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	
	web_reg_find("Text=<title>Reservation Made!</title>",LAST);
	
	 	
//	web_reg_find("Text=from <B>{randDepartCity}</B> to <B>{randArriveCity}</B>",LAST);
//	 	
	web_reg_find("Text={randSeatType} Class ticket",LAST);
	web_reg_find("Text=from {randDepartCity} to {randArriveCity}",LAST);
	 

	web_submit_data("reservations.pl_3",
		"Action=http://localhost:1080/cgi-bin/reservations.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/reservations.pl",
		"Snapshot=t79.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=firstName", "Value={firstName}", ENDITEM,
		"Name=lastName", "Value={secondName}", ENDITEM,
		"Name=address1", "Value={street}", ENDITEM,
		"Name=address2", "Value=Pcity}", ENDITEM,
		"Name=pass1", "Value={{firstName} {secondName}}", ENDITEM,
		"Name=creditCard", "Value={creditCard}", ENDITEM,
		"Name=expDate", "Value={expDate}", ENDITEM,
		"Name=oldCCOption", "Value=", ENDITEM,
		"Name=numPassengers", "Value={numPassengers}", ENDITEM,
		"Name=seatType", "Value={randSeatType}", ENDITEM,
		"Name=seatPref", "Value={randSeatPref}", ENDITEM,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=advanceDiscount", "Value=0", ENDITEM,
		"Name=returnFlight", "Value=", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		"Name=buyFlights.x", "Value=34", ENDITEM,
		"Name=buyFlights.y", "Value=7", ENDITEM,
		"Name=.cgifields", "Value=saveCC", ENDITEM,
		LAST);

	lr_end_transaction("Payment details",LR_AUTO);

//	lr_think_time(5);

//	lr_start_transaction("Book Another");
//	
//	web_reg_find("Text=<title>Flight Selections</title>",LAST);
//
//	web_submit_data("reservations.pl_4", 
//		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=text/html", 
//		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
//		"Snapshot=t80.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=Book Another.x", "Value=46", ENDITEM, 
//		"Name=Book Another.y", "Value=10", ENDITEM, 
//		LAST);
//
//	lr_end_transaction("Book Another",LR_AUTO);
	
	lr_end_transaction("UC3_BuyTicket", LR_AUTO);


	return 0;
}