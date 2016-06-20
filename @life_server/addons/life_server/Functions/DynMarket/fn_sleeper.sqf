/*
##################### DYNAMIC MARKET SCRIPT #####################
### AUTHOR: RYAN TT.                                          ###
### STEAM: www.steamcommunity.com/id/ryanthett                ###
###                                                           ###
### DISCLAIMER: THIS SCRIPT CAN BE USED ON EVERY SERVER ONLY  ###
###             WITH THIS HEADER / NOTIFICATION               ###
#################################################################
*/

// Appel de la base de données et mettre à jour les prix dedans.

while {true} do {
	sleep (DYNMARKET_PriceUpdateInterval*60);
	[[0],"life_fnc_update",true,false] spawn life_fnc_MP;
	sleep 5;
	[] spawn TON_fnc_calculatePrices;
	DYNMARKET_UpdateCount = DYNMARKET_UpdateCount + 1;
	if ((DYNMARKET_UpdateCount==DYNMARKET_CreateBackupInterval)&&DYNMARKET_CreateBackups) then {
		[] spawn {
			DYNMARKET_UpdateCount = 0;
			[0] call TON_fnc_HandleDB;
		};
	};
};