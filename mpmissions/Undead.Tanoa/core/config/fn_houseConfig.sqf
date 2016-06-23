/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master config file for buyable houses?
*/
private["_house"];
_house = [_this,0,"",[""]] call BIS_fnc_param;
if(_house == "") exitWith {[]};

/*
	Return Format:
	[price,# of containers allowed]
*/
switch (true) do {
	case (_house in ["Land_House_Small_06_F","Land_House_Small_03_F","Land_House_Small_05_F","Land_House_Small_04_F","Land_House_Small_02_F","Land_House_Small_01_F"]): {[1000000,2]};
	case (_house in ["Land_Slum_03_F","Land_Slum_02_F","Land_Slum_01_F"]): {[600000,2]};
	case (_house in ["Land_House_Big_01_F","Land_House_Big_05_F","Land_House_Big_03_F","Land_House_Big_02_F","Land_House_Big_04_F"]): {[2000000,2]};	
	case (_house in ["Land_i_Shed_Ind_F"]): {[1600000,1]};
	default {[]};
};