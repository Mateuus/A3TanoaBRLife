waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["changelog","Change Log"];
player createDiarySubject ["serverrules","General Rules"];
// player createDiarySubject ["policerules","Police Procedures/Rules"];
// player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
// player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/><br/>
				"
		]
	];
*/

	player createDiaryRecord ["credits",
		[
			"Altis Life RPG",
				"
					'Altis Life RPG' by Tonic.<br/><br/>
				"
		]
	];

	player createDiaryRecord["changelog",
		[
			"Change Log",
				"
					Visit ArmALifeRPG.com to see a full changelog.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Server Rules",
				"
					Server rules can be found at ArmaLifeRPG.com<br/>
					Report rule breakers at ArmALifeRPG.com/forums<br/>
				"
		]
	];


// Controls Section

	player createDiaryRecord ["controls",
		[
			"",
				"
				Y: Open Player Menu<br/>
				U: Lock and unlock vehicles and houses<br/>
				F: Cop Siren (if cop)<br/>
				T: Vehicle Trunk<br/>
				Left Shift + B: Surrender<br/>
				Left Shift + R: Restrain (Cop Only)<br/>
				Left Shift + G: Knock out / stun (Civ Only, used for robbing them)<br/>
				Left Windows: Main Interaction key which is used for interacting with vehicles/houses (repair, etc) and for cops to interact with civilians. Can be rebound to a single key like H by pressing ESC->Configure->Controls->Custom->Use Action 10<br/>
				Left Windows + T: Used for picking up items/money and gathering<br/>
				Left Shift + L: Activates cop/medic siren lights (as a cop/medic)<br/>
				Left Shift + H: Holster's your pistol<br/>
				Left Ctrl + H: Revert holster action<br/>
				"
		]
	];
