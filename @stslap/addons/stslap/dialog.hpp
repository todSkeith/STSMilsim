class stslap_menu
{
	idd=67300;
	movingEnable = true;
	class controlsBackground
	{
		class stslap_frame: RscFrame
		{
			idc = -1;
			text = $STR_A3_stslap_stslap_frame;
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.551719 * safezoneW;
			h = 0.682 * safezoneH;
			sizeEx = 1 * GUI_GRID_H;
		};
		class stslap_bkgrnd: RscPicture
		{
			idc = -1;
			text = "#(argb,8,8,3)color(0,0,0,0.6)";
			x = 0.226719 * safezoneW + safezoneX;
			y = 0.148 * safezoneH + safezoneY;
			w = 0.551719 * safezoneW;
			h = 0.671 * safezoneH;
			colorBackground[] = {1,1,1,0.6};
			colorActive[] = {-1,-1,-1,1};
		};
		class RscMap: RscMapControl
		{
			idc = 1000;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.407 * safezoneH;
		};
	};
	
	class controls
	{
		class PlayerList: RscListbox
		{
			idc = 1100;
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.407 * safezoneH;
			onLBSelChanged = "[] spawn stslap_fnc_query";
		};
		class controlsFrame: RscFrame
		{
			idc = -1;
			text = $STR_A3_stslap_controlsFrame;
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.242 * safezoneH;
			sizeEx = 0.8 * GUI_GRID_H;
		};
		class controlsButtonUnLock: RscButton
		{
			idc = 1101;
			text = $STR_A3_stslap_controlsButtonUnLock;
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_unlock;";
			
		};
		class controlsButtonUnRestrain: RscButton
		{
			idc = 1102;
			text = $STR_A3_stslap_controlsButtonUnRestrain;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_unrestrain;";
		};
		class controlsButtonUnEscort: RscButton
		{
			idc = 1103;
			text = $STR_A3_stslap_controlsButtonUnEscort;
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_stopEscorting;";
		};
		class controlsButtonHeal: RscButton
		{
			idc = 1104;
			text = $STR_A3_stslap_controlsButtonHeal;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_heal;";
		};
		class controlsButtonRepair: RscButton
		{
			idc = 1105;
			text = $STR_A3_stslap_controlsButtonRepair;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_repair;";
		};
		class controlsButtonKill: RscButton
		{
			idc = 1106;
			text = $STR_A3_stslap_controlsButtonKill;
			x = 0.288594 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
			onButtonClick = "[] call stslap_fnc_kill;";
		};
		class MoneyControlsFrame: RscFrame
		{
			idc = 1107;
			text = $STR_A3_stslap_MoneyControlsFrame;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.154 * safezoneH;
			sizeEx = 0.8 * GUI_GRID_H;
		};
		class handtext: RscText
		{
			idc = 1108;
			text = $STR_A3_stslap_handtext;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class banktext: RscText
		{
			idc = 1109;
			text = $STR_A3_stslap_banktext;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MoneyControlsHandTxt: RscText
		{
			idc = 1110;
			text = $STR_A3_stslap_MoneyControlsHandTxt;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MoneyControlsBankTxt: RscText
		{
			idc = 1111;
			text = $STR_A3_stslap_MoneyControlsBankTxt;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MoneyControlsInputTxt: RscText
		{
			idc = 1112;
			text = $STR_A3_stslap_MoneyControlsInputTxt;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MoneyControlsInputBox: RscEdit
		{
			idc = 1113;
			text = $STR_A3_stslap_MoneyControlsInputBox;
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class moneyControlsButtonChange: RscButton
		{
			idc = 1114;
			text = $STR_A3_stslap_moneyControlsButtonChange;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = $STR_A3_stslap_moneyControlsButtonChange_tooltip;
		};
		class moneyControlsButtonSet: RscButton
		{
			idc = 1115;
			text = $STR_A3_stslap_moneyControlsButtonSet;
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class inventoryControlsFrame: RscFrame
		{
			idc = 1116;
			text = $STR_A3_stslap_inventoryControlsFrame;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.242 * safezoneH;
			sizeEx = 0.8 * GUI_GRID_H;
		};
		class playerInventoryList: RscListbox
		{
			idc = 1117;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.176 * safezoneH;
		};
		class invButtonAdd: RscButton
		{
			idc = 1118;
			text = $STR_A3_stslap_invButtonAdd;
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class invInput: RscEdit
		{
			idc = 1119;
			text = $STR_A3_stslap_invInput;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class invButtonRemove: RscButton
		{
			idc = 1120;
			text = $STR_A3_stslap_invButtonRemove;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class possibleInventoryList: RscListbox
		{
			idc = 1121;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.176 * safezoneH;
		};
		class mapmarkerframe: RscFrame
		{
			idc = 1122;
			text = $STR_A3_stslap_mapmarkerframe;
			x = 0.340156 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.088 * safezoneH;
			sizeEx = 0.8 * GUI_GRID_H;
		};
		class markerInputBox: RscEdit
		{
			idc = 1123;
			text = $STR_A3_stslap_markerInputBox;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class markerButtonAdd: RscButton
		{
			idc = 1124;
			text = $STR_A3_stslap_markerButtonAdd;
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class markerbuttonRemove: RscButton
		{
			idc = 1125;
			text = $STR_A3_stslap_markerbuttonRemove;
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class closeButton: RscButton
		{
			idc = 1126;
			text = $STR_A3_stslap_closeButton;
			x = 0.778437 * safezoneW + safezoneX;
			y = 0.159 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "closeDialog 0;";
		};
		class controlsButtonDelete: RscButton
		{
			idc = 1127;
			text = $STR_A3_stslap_controlsButtonDelete;
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.731 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.033 * safezoneH;
			tooltip = $STR_A3_stslap_controlsButtonDelete_tooltip;
		};
		class garageControlsFrame: RscFrame
		{
			idc = 1128;
			text = $STR_A3_stslap_garageControlsFrame;
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.566 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.242 * safezoneH;
			sizeEx = 0.8 * GUI_GRID_H;
		};
		class garageVehicleList: RscListbox
		{
			idc = 1129;
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.132 * safezoneH;
			tooltip = $STR_A3_stslap_garageVehicleList_tooltip;
		};
		class garageButtonRemove: RscButton
		{
			idc = 1130;
			text = $STR_A3_stslap_garageButtonRemove;
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class garageButtonAlive: RscButton
		{
			idc = 1131;
			text = $STR_A3_stslap_garageButtonAlive;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class garageButtonGetData: RscButton
		{
			idc = 1132;
			text = $STR_A3_stslap_garageButtonGetData;
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class garageButtonSetData: RscButton
		{
			idc = 1133;
			text = $STR_A3_stslap_garageButtonSetData;
			x = 0.711406 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class buttonCamera: RscButton
		{
			idc = 1134;
			text = $STR_A3_stslap_buttonCamera;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[] call stslap_fnc_stsCamera;";
		};
		class buttonESP: RscButton
		{
			idc = 1135;
			text = $STR_A3_stslap_buttonESP;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.03
			onButtonClick = "[] call stslap_fnc_esp;";
		};
		class buttonWantedList: RscButton
		{
			idc = 1136;
			text = $STR_A3_stslap_buttonWantedList;
			x = 0.5 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class controlsButtonTP2: RscButton
		{
			idc = 1137;
			text = $STR_A3_stslap_controlsButtonTP2;
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class controlsButtonTP2U: RscButton
		{
			idc = 1138;
			text = $STR_A3_stslap_controlsButtonTP2U;
			x = 0.237031 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class buttonTeleport: RscButton
		{
			idc = 1139;
			text = $STR_A3_stslap_buttonTeleport;
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
			onButtonClick = "[] call stslap_fnc_teleport;";
		};
		class buttonSpectate: RscButton
		{
			idc = 1140;
			text = $STR_A3_stslap_buttonSpectate;
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class buttonItemSpawn: RscButton
		{
			idc = 1141;
			text = $STR_A3_stslap_buttonItemSpawn;
			x = 0.685625 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class creditstxt: RscText
		{
			idc = 1142;
			text = $STR_A3_stslap_creditstxt;
			x = 0.231875 * safezoneW + safezoneX;
			y = 0.775 * safezoneH + safezoneY;
			w = 0.108281 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 0.02;
		};
	};
};
	