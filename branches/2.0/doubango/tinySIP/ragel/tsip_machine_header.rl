/*
* Copyright (C) 2010-2011 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango[dot]org>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/
/**@file tsip_machine_headers.rl.
 * @brief Ragel file.
 *
 * @author Mamadou Diop <diopmamadou(at)doubango[dot]org>
 *

 */

/*== Header pasrsing machine. Supports both full-length and compact mode. */
%%{
	machine tsip_machine_header;
	
	Accept = "Accept"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Accept;
	Accept_Contact = ("Accept-Contact"i | "a") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Accept_Contact; 
	Accept_Encoding = "Accept-Encoding"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Accept_Encoding;
	Accept_Language = "Accept-Language"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Accept_Language; 
	Accept_Resource_Priority = "Accept-Resource-Priority"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Accept_Resource_Priority; 
	Alert_Info = "Alert-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Alert_Info; 
	Allow = "Allow"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Allow; 
	Allow_Events = ("Allow-Events"i | "u") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Allow_Events; 
	Authentication_Info = "Authentication-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Authentication_Info; 
	Authorization = "Authorization"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Authorization; 
	Call_ID = ("Call-ID"i | "i") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Call_ID; 
	Call_Info = "Call-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Call_Info; 
	Contact = ("Contact"i | "m") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Contact; 
	Content_Disposition = "Content-Disposition"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Content_Disposition; 
	Content_Encoding = ("Content-Encoding"i | "e") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Content_Encoding; 
	Content_Language = "Content-Language"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Content_Language; 
	Content_Length = ("Content-Length"i | "l") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Content_Length; 
	Content_Type = ("Content-Type"i | "c") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Content_Type; 
	CSeq = "CSeq"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_CSeq; 
	Date = "Date"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Date; 
	Error_Info = "Error-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Error_Info; 
	Event = ("Event"i | "o"i) SP* HCOLON SP*<: any* :>CRLF  @parse_header_Event; 
	Expires = "Expires"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Expires; 
	From = ("From"i | "f") SP* HCOLON SP*<: any* :>CRLF  @parse_header_From; 
	History_Info = "History-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_History_Info; 
	Identity = ("Identity"i | "y") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Identity; 
	Identity_Info = ("Identity-Info"i | "n") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Identity_Info; 
	In_Reply_To = "In_Reply-To"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_In_Reply_To; 
	Join = "Join"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Join; 
	Max_Forwards = "Max-Forwards"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Max_Forwards; 
	MIME_Version = "MIME-Version"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_MIME_Version; 
	Min_Expires = "Min-Expires"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Min_Expires; 
	Min_SE = "Min-SE"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Min_SE; 
	Organization = "Organization"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Organization; 
	Path = "Path"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Path; 
	Priority = "Priority"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Priority; 
	Privacy = "Privacy"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Privacy; 
	Proxy_Authenticate = "Proxy-Authenticate"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Proxy_Authenticate; 
	Proxy_Authorization = "Proxy-Authorization"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Proxy_Authorization; 
	Proxy_Require = "Proxy-Require"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Proxy_Require; 
	RAck = "RAck"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_RAck; 
	Reason = "Reason"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Reason; 
	Record_Route = "Record-Route"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Record_Route; 
	Refer_Sub = "Refer-Sub"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Refer_Sub; 
	Refer_To = ("Refer-To"i | "r") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Refer_To; 
	Referred_By = ("Referred-By"i | "b") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Referred_By; 
	Reject_Contact = ("Reject-Contact"i | "j") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Reject_Contact; 
	Replaces = "Replaces"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Replaces; 
	Reply_To = "Reply-To"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Reply_To; 
	Request_Disposition = ("Request-Disposition"i | "d") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Request_Disposition; 
	Require = "Require"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Require; 
	Resource_Priority = "Resource-Priority"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Resource_Priority; 
	Retry_After = "Retry-After"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Retry_After; 
	Route = "Route"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Route; 
	RSeq = "RSeq"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_RSeq; 
	Security_Client = "Security-Client"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Security_Client; 
	Security_Server = "Security-Server"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Security_Server; 
	Security_Verify = "Security-Verify"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Security_Verify; 
	Server = "Server"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Server; 
	Service_Route = "Service-Route"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Service_Route; 
	Session_Expires = ("Session-Expires"i | "x") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Session_Expires; 
	SIP_ETag = "SIP-ETag"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_SIP_ETag; 
	SIP_If_Match = "SIP-If-Match"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_SIP_If_Match; 
	Subject = ("Subject"i | "s"i) SP* HCOLON SP*<: any* :>CRLF  @parse_header_Subject; 
	Subscription_State = ("Subscription-State"i) SP* HCOLON SP*<: any* :>CRLF  @parse_header_Subscription_State; 
	Supported = ("Supported"i | "k") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Supported; 
	Target_Dialog = "Target-Dialog"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Target_Dialog; 
	Timestamp = "Timestamp"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Timestamp; 
	To = ("To"i | "t") SP* HCOLON SP*<: any* :>CRLF  @parse_header_To; 
	Unsupported = "Unsupported"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Unsupported; 
	User_Agent = "User-Agent"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_User_Agent; 
	Via = ("Via"i | "v") SP* HCOLON SP*<: any* :>CRLF  @parse_header_Via; 
	Warning = "Warning"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_Warning; 
	WWW_Authenticate = "WWW-Authenticate"i SP* HCOLON SP*<: any* :>(CRLF when prev_not_comma)  @parse_header_WWW_Authenticate; 
	P_Access_Network_Info = "P-Access-Network-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Access_Network_Info; 
	P_Answer_State = "P-Answer-State"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Answer_State; 
	P_Asserted_Identity = "P-Asserted-Identity"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Asserted_Identity; 
	P_Associated_URI = "P-Associated-URI"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Associated_URI; 
	P_Called_Party_ID = "P-Called-Party-ID"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Called_Party_ID; 
	P_Charging_Function_Addresses = "P-Charging-Function-Addresses"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Charging_Function_Addresses; 
	P_Charging_Vector = "P-Charging-Vector"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Charging_Vector; 
	P_DCS_Billing_Info = "P-DCS-Billing-Info"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_DCS_Billing_Info; 
	P_DCS_LAES = "P-DCS-LAES"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_DCS_LAES; 
	P_DCS_OSPS = "P-DCS-OSPS"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_DCS_OSPS; 
	P_DCS_Redirect = "P-DCS-Redirect"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_DCS_Redirect; 
	P_DCS_Trace_Party_ID = "P-DCS-Trace-Party-ID"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_DCS_Trace_Party_ID; 
	P_Early_Media = "P-Early-Media"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Early_Media; 
	P_Media_Authorization = "P-Media-Authorization"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Media_Authorization;
	P_Preferred_Identity = "P-Preferred-Identity"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Preferred_Identity; 
	P_Profile_Key = "P-Profile-Key"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Profile_Key; 
	P_User_Database = "P-User-Database"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_User_Database; 
	P_Visited_Network_ID = "P-Visited-Network-ID"i SP* HCOLON SP*<: any* :>CRLF  @parse_header_P_Visited_Network_ID;
	
	######
	extension_header = (token) SP* HCOLON SP*<: any* :>CRLF  @parse_header_extension_header;

	HEADER = ( Accept | Accept_Contact | Accept_Encoding | Accept_Language | Accept_Resource_Priority | Alert_Info | Allow | Allow_Events | Authentication_Info | Authorization | Call_ID | Call_Info | Contact | Content_Disposition | Content_Encoding | Content_Language | Content_Length | Content_Type | CSeq | Date | Error_Info | Event | Expires | From | History_Info | Identity | Identity_Info | In_Reply_To | Join | Max_Forwards | MIME_Version | Min_Expires | Min_SE | Organization | Path | Priority | Privacy | Proxy_Authenticate | Proxy_Authorization | Proxy_Require | RAck | Reason | Record_Route | Refer_Sub | Refer_To | Referred_By | Reject_Contact | Replaces | Reply_To | Request_Disposition | Require | Resource_Priority | Retry_After | Route | RSeq | Security_Client | Security_Server | Security_Verify | Server | Service_Route | Session_Expires | SIP_ETag | SIP_If_Match | Subject | Subscription_State | Supported | Target_Dialog | Timestamp | To | Unsupported | User_Agent | Via | Warning | WWW_Authenticate | P_Access_Network_Info | P_Answer_State | P_Asserted_Identity | P_Associated_URI | P_Called_Party_ID | P_Charging_Function_Addresses | P_Charging_Vector | P_DCS_Billing_Info | P_DCS_LAES | P_DCS_OSPS | P_DCS_Redirect | P_DCS_Trace_Party_ID | P_Early_Media | P_Media_Authorization | P_Preferred_Identity | P_Profile_Key | P_User_Database | P_Visited_Network_ID)@1 | (extension_header)@0;
	

}%%
