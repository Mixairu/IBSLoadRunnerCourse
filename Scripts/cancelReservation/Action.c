Action()
{

	int i;
	
	lr_start_transaction("UC6_CanselRegistration");

	
	web_set_sockets_option("SSL_VERSION", "AUTO");


	lr_start_transaction("GoTo WebTours");

	web_add_auto_header("Priority", 
		"u=0, i");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(13);
	
	web_reg_find("Text=A Session ID has been created",LAST);

/*Correlation comment - Do not change!  Original value='140443.002349129HcctADzpQDDDDDDDtDDttpccVz' Name ='userSession' Type ='ResponseBased'*/
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
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("GoTo WebTours",LR_AUTO);

	lr_think_time(19);

	lr_start_transaction("login");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	web_reg_find("Text=User password was correct",LAST);

	web_submit_data("login.pl",
		"Action=http://localhost:1080/cgi-bin/login.pl",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home",
		"Snapshot=t33.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=userSession", "Value={userSession}", ENDITEM,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=50", ENDITEM,
		"Name=login.y", "Value=9", ENDITEM,
		"Name=JSFormSubmit", "Value=off", ENDITEM,
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_start_transaction("GoTo Itnerary");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(6);
	
	web_reg_find("Text=User wants the intineraries",LAST);
	
	
	//First, grab the parameter values for
    //flight id and cgi fields using ord=all

    //<input type="hidden" name="flightID" value="14098-820-JM"  />

    web_reg_save_param("c_flightids",
    "lb=<input type=\"hidden\" name=\"flightID\" value=\"",
    "rb=\"  />",
    "ord=all",
    LAST);

    //<input type="hidden" name=".cgifields" value="6"  />

    web_reg_save_param("c_cgifields",
    "lb=<input type=\"hidden\" name=\".cgifields\" value=\"",
    "rb=\"  />",
    "ord=all",
    LAST);


	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("GoTo Itnerary",LR_AUTO);
	
	
	 //This code can be used if you want to delete
    //from the top of the list x number of itineraries.

//    lr_save_string("", "c_buffer");
//
//    for (i=1;i<=2;i++)
//    {
//        lr_param_sprintf("c_buffer", "%s%d=on&", lr_eval_string("{c_buffer}"), i);
//    }

    //This code selects what itinerary to cancel.
    //In this case it is the last one that was just created

    lr_param_sprintf("c_buffer",
    "%s=on&",
    lr_eval_string("{c_flightids_count}"));

    //This code builds the values for flight id and cgi fields

    for (i=1;i<=atoi(lr_eval_string("{c_flightids_count}"));i++)
    {
        lr_param_sprintf("c_buffer",
        "%sflightID=%s&",
        lr_eval_string("{c_buffer}"),
        lr_paramarr_idx("c_flightids",
        i));

        lr_param_sprintf("c_buffer",
        "%s.cgifields=%s&",
        lr_eval_string("{c_buffer}"),
        lr_paramarr_idx("c_cgifields",
        i));
    }

    //This line adds the suffix to the end of the request
    //and saves it as the c_wcr parameter

    lr_save_string(lr_eval_string("{c_buffer}removeFlights.x=36&removeFlights.y=4"), "c_wcr");

	

	lr_start_transaction("DelReservation");

	web_add_header("Origin", 
		"http://localhost:1080");

	web_add_header("Priority", 
		"u=4");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(7);
	
	web_reg_find("Text=<title>Flights List</title>",LAST);

//	web_submit_data("itinerary.pl", 
//		"Action=http://localhost:1080/cgi-bin/itinerary.pl", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"RecContentType=text/html", 
//		"Referer=http://localhost:1080/cgi-bin/itinerary.pl", 
//		"Snapshot=t43.inf", 
//		"Mode=HTML", 
//		ITEMDATA, 
//		"Name=flightID", "Value=0-7-JB", ENDITEM, 
//		"Name=1", "Value=on", ENDITEM, 
//		"Name=flightID", "Value=0-15-JB", ENDITEM, 
//		"Name=flightID", "Value=83041564-2327-JB", ENDITEM, 
//		"Name=removeFlights.x", "Value=73", ENDITEM, 
//		"Name=removeFlights.y", "Value=8", ENDITEM, 
//		"Name=.cgifields", "Value=1", ENDITEM, 
//		"Name=.cgifields", "Value=3", ENDITEM, 
//		"Name=.cgifields", "Value=2", ENDITEM, 
//		LAST);
	
	//This is a validation to make sure that
    //the last flight on the list was canceled

    lr_save_string(lr_eval_string(lr_eval_string("{c_flightids_{c_flightids_count}}")),
    "c_cancelflight");

    web_reg_find("Text={c_cancelflight}", "Fail=Found", LAST);

    //Here is the custome built web_custom_request

    web_custom_request("itinerary.pl_2",
    "URL=http://localhost:1080/cgi-bin/itinerary.pl",
    "Method=POST",
    "Resource=0",
    "RecContentType=text/html",
    "Referer=http://localhost:1080/cgi-bin/itinerary.pl",
    "Snapshot=t23.inf",
    "Mode=HTTP",
    "Body={c_wcr}",
    LAST);

	

	lr_end_transaction("DelReservation",LR_AUTO);
	
	lr_end_transaction("UC6_CanselRegistration", LR_AUTO);


	return 0;
}