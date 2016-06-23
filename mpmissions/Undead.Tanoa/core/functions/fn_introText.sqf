/*
  File: fn_introText.sqf
  Author: Travis Boi

  Description:
  Intro Text
*/


[] spawn {
sleep 5;
//playSound "IntroMusic"; // Remove the slashes before if you want a song to be played with text
//sleep 5; // Remove the slashes if you have a intro-song
[
	[
		["Welcome to Tanoa Life RPG by ArmALifeRPG.com ","align = 'center' shadow = '1' size = '0.5' font='PuristaBold'","#FFFFFF"],
		["Report Bugs/Issues at ArmALifeRPG.com/forums","align = 'center' shadow = '1' size = '0.5'","#FFFFFF"],
		[" "," align = 'center' shadow = '1' size = '0.5'","#2196f3"]
	]
] spawn BIS_fnc_typeText2;

[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#2196f3'>Welcome to:</t> Tanoa Life RPG"],nil,nil,nil,nil,0] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#2196f3'>We hope you have an enjoyable great experience.</t> "],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#2196f3'>Forums:</t> ArmALifeRPG.com/forums"],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#2196f3'>TeamSpeak IP:</t> ArmALifeRPG.TeamSpeak3.com"],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
sleep 7;


		[parseText format [ "<t align='center' size='1.2'><t font='PuristaBold' size='1.6'>%1</t></t>","<t color='#2196f3'>Donate:</t> ArmALifeRPG.com/donate"],nil,nil,nil,nil,0

] spawn BIS_fnc_textTiles;
};