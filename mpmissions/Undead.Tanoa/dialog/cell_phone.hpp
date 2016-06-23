class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn life_fnc_cellphone";

	class controlsBackground {
		class Life_RscTitleBackground: Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class MainBackground: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.319688 * safezoneW;
	h = 0.44 * safezoneH;
		};
	
		class MainBackground2: Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.44 * safezoneH;
		};
	};

	class controls {
		class Title: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3001;
			text = "$STR_CELL_Title";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.4125 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class TextToSend: Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3002;
			text = "$STR_CELL_TextToSend";
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.319688 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class textEdit: Life_RscEdit {
			idc = 3003;
			text = "";
			sizeEx = 0.030;
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.319688 * safezoneW;
	h = 0.396 * safezoneH;
		};

		class TextMsgButton: Life_RscButtonMenu {
			idc = 3015;
			text = "$STR_CELL_TextMSGBtn";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_textmsg";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class PlayerList: Life_RscCombo {
			idc = 3004;
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.291 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class TextCopButton: Life_RscButtonMenu {
			idc = 3016;
			text = "$STR_CELL_TextPolice";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_textcop";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class TextAdminButton: Life_RscButtonMenu {
			idc = 3017;
			text = "$STR_CELL_TextAdmins";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_textadmin";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class AdminMsgButton: Life_RscButtonMenu {
			idc = 3020;
			text = "$STR_CELL_AdminMsg";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_adminmsg";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.687 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class AdminMsgAllButton: Life_RscButtonMenu {
			idc = 3021;
			text = "$STR_CELL_AdminMSGAll";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class EMSRequest: Life_RscButtonMenu {
			idc = 3022;
			text = "$STR_CELL_EMSRequest";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};

		class CloseButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
	x = 0.386562 * safezoneW + safezoneX;
	y = 0.709 * safezoneH + safezoneY;
	w = 0.319688 * safezoneW;
	h = 0.022 * safezoneH;
		};
		
		class MessagesButtonKey: Life_RscButtonMenu {
			idc = -1;
			text = "Messages";
			onButtonClick = "[] spawn life_fnc_messagesMenu";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	x = 0.29375 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.022 * safezoneH;
		};
	};
};