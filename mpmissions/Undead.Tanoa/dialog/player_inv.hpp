#include "player_sys.sqf"

class playerSettings {

	idd = playersys_DIALOG;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controlsBackground {
	
	class life_RscTitleBackground:life_RscText {
			idc = -1;

	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		
		class MainBackground:life_RscText {
			idc = -1;
	
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.44 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class MainBackground2:life_RscText {
			idc = -1;
	
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.44 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class MainBackground3:life_RscText {
			idc = -1;
	
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.44 * safezoneH;
			colorBackground[] = {0,0,0,0.7};
		};
		
		class Title : life_RscTitle {
			colorText[] = {0.95,0.95,0.95,1};
			idc = -1;
			text = "$STR_PM_Title";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class moneyStatusInfo : Life_RscStructuredText
		{
			idc = 2015;
			sizeEx = 0.020;
			text = "";
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.352 * safezoneH;
		};
		
		class PlayersName : Title {
			idc = carry_weight;
			style = 1;
			text = "";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
			colorText[] = {0.95,0.95,0.95,1};
		};
	};
	
	class controls {
		
		class itemHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_cItems";
			sizeEx = 0.04;
			
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.489 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class licenseHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_Licenses";
			sizeEx = 0.04;
			
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class moneySHeader : Life_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			text = "$STR_PM_MoneyStats";
			sizeEx = 0.04;
			
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
		};
	
		class itemList : life_RscListBox 
		{
			idc = item_list;
			sizeEx = 0.030;
			
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.154 * safezoneH;
		};
		
		class moneyEdit : Life_RscEdit 
		{
			idc = 2018;
			
			text = "1";
			sizeEx = 0.030;
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.665 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class NearPlayers : Life_RscCombo 
		{
			idc = 2022;
		
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class moneyDrop : Life_RscButtonMenu
		{
			idc = 2001;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveMoney";
			sizeEx = 0.025;
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class itemEdit : Life_RscEdit {
		
		idc = item_edit;
		
		text = "1";
		sizeEx = 0.030;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.665 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.022 * safezoneH;
		
		};
		class iNearPlayers : Life_RscCombo
		{
			idc = 2023;
			
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.022 * safezoneH;
		};
		/*
		Disabled till it can be redone
		class moneyInput: life_RscCombo {
			
			idc = money_value;
			
			x  = 0.02; y = 0.402;
			w = .1; h = .030;
		};
		*/
		
		class DropButton : life_RscButtonMenu {
			
			idc = 2002;
			text = "$STR_Global_Give";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_giveItem;";
			
	x = 0.639219 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
		
		};
		
		class UseButton : life_RscButtonMenu {
			
			text = "$STR_Global_Use";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_useItem;";
			
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
			
		};
		
		class RemoveButton : life_RscButtonMenu {
			
			text = "$STR_Global_Remove";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call life_fnc_removeItem;";
			
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.022 * safezoneH;
			
		};
		/*
		Disabled till it can be redone
		class DropcButton : life_RscButtonMenu {

			text = "Drop Money";
			onButtonClick = "[] execVM 'player_system\money_fnc.sqf'";
			
			x = 0.13; y = 0.4;
			w = 0.135; h = 0.05;
			
		};
		*/
		
		class ButtonClose : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class ButtonSettings : life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Settings";
			onButtonClick = "[] call life_fnc_settingsMenu;";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class ButtonMyGang : Life_RscButtonMenu {
			idc = 2011;
			text = "$STR_PM_MyGang";
			onButtonClick = "if(isNil ""life_action_gangInUse"") then {if(isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class Licenses_Menu : Life_RscControlsGroup
		{
			idc = -1;
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.176 * safezoneH;
			
			class Controls
			{
				class Life_Licenses : Life_RscStructuredText
				{
					idc = 2014;
					sizeEx = 0.020;
					text = "";
	x = 0.505156 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.201094 * safezoneW;
	h = 0.176 * safezoneH;
				};
			};
		};
		
		class ButtonGangList : Life_RscButtonMenu {
			idc = 2012;
			text = "$STR_PM_WantedList";
			onButtonClick = "[] call life_fnc_wantedMenu";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
	
		class ButtonKeys : Life_RscButtonMenu {
			idc = 2013;
			text = "$STR_PM_KeyChain";
			onButtonClick = "createDialog ""Life_key_management"";";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class ButtonCell : Life_RscButtonMenu {
			idc = 2014;
			text = "$STR_PM_CellPhone";
			onButtonClick = "createDialog ""Life_cell_phone"";";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class ButtonAdminMenu : Life_RscButtonMenu {
			idc = 2021;
			text = "$STR_PM_AdminMenu";
			onButtonClick = "createDialog ""life_admin_menu"";";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class ButtonSyncData : life_RscButtonMenu {
			idc = -1;
			//shortcuts[] = {0x00050000 + 2};
			text = "$STR_PM_SyncData";
			onButtonClick = "[] call SOCK_fnc_syncData;";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
	    class ButtonMarket : Life_RscButtonMenu {			
			idc = -1;			
			text = "Market";			
			onButtonClick = "createDialog ""life_dynmarket_prices"";";			
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
	};
};