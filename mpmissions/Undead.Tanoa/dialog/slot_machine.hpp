/*
	File: slot_machine.hpp
        Author: Jacob "PapaBear" Tyler
	Description: Gui for slotmachine
*/

#define GUI_GRID_X    (0)
#define GUI_GRID_Y    (0)
#define GUI_GRID_W    (0.025)
#define GUI_GRID_H    (0.04)
#define GUI_GRID_WAbs    (1)
#define GUI_GRID_HAbs    (1)

class SlotMachineGUI
{
	idd = 5780;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
	
		class RscFrame_1800: life_RscText
		{
			idc = 5770;
			colorBackground[] = {0,0,0,0.7};
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.44 * safezoneH;
		};
		
		class RscText_1000: life_RscText
		{
			idc = 5774;
			text = "Winnings: $"; //--- ToDo: Localize;
	x = 0.561875 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.033 * safezoneH;
		};
		
		class RscText_1002: life_RscText
		{
			idc = 5776;
			text = "SLOT MACHINE"; //--- ToDo: Localize;
	x = 0 * GUI_GRID_W + GUI_GRID_X;
	y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 40 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
		};
		
	};
	
	class controls
	{
	
		class SLOT_1: life_RscPicture
		{
			idc = 5771;
			text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.198 * safezoneH;
		};
		class SLOT_2: life_RscPicture
		{
			idc = 5772;
			text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.198 * safezoneH;
		};
		class SLOT_3: life_RscPicture
		{
			idc = 5773;
			text = "#(argb,8,8,3)color(1,1,1,1)";
	x = 0.561875 * safezoneW + safezoneX;
	y = 0.324 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.198 * safezoneH;
		};
		
		class Winnings: life_RscText
		{
			idc = 5775;
			test = "";
	x = 0.603125 * safezoneW + safezoneX;
	y = 0.676 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.033 * safezoneH;
		};
		
		class EXIT_BTN: life_RscButtonMenu
		{
			idc = -1;
			text = "EXIT"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "closeDialog 0;";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class BET_5K: life_RscButtonMenu
		{
			idc = 5778;
			text = "5K"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[5000] spawn life_fnc_slotSpin;";
	x = 0.345312 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class BET_50K: life_RscButtonMenu
		{
			idc = 5779;
			text = "50K"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[50000] spawn life_fnc_slotSpin;";
	x = 0.592812 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class BET_25K: life_RscButtonMenu
		{
			idc = 5781;
			text = "25K"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[25000] spawn life_fnc_slotSpin;";
	x = 0.510312 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
		};
		class BET_10K: life_RscButtonMenu
		{
			idc = 5782;
			text = "10K"; //--- ToDo: Localize;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[10000] spawn life_fnc_slotSpin;";
	x = 0.427812 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
	};
};