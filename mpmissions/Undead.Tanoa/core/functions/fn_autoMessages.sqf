/*	
File: fn_autoMessages.sqf	Author: BenjaminSansNom		
Description:	Auto messages in game every X seconds
*/
[] spawn {	// Add a line in this array to add a message	
_messages = [ "Website:<br/> <t color='#2196f3' size='1.3'>ArmALifeRPG.com</t>",	"TeamSpeak IP:<br/><t color='#2196f3' size='1.3'>ArmALifeRPG.TeamSpeak3.com</t>"];	
_refreshTime = 300; // Time between each message (in seconds)	
_i = 0;	while {true} do {		
	_count = count _messages;		
	_message = _messages select _i;		
	hint parseText format["<t color='#ffffff' size='2'>ArmA Life RPG</t><br/><br/><img shadown='false' size='6' image='textures\logo.paa'/><br/><br/>%1", _message];		
	sleep _refreshTime;		
		if (_i == (_count - 1)) then {
		_i = 0;		
		} 
			else {
			_i = _i + 1;		
			};	
	};
};