class CfgPatches {
	class sts_lap{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version = 1.1;
		author[] = {"Alan"};
	};
};
#include "common.hpp"
#include "defs.hpp"
#include "dialog.hpp"

class RscStandardDisplay;	// External class reference

class CfgFunctions
{
	#include "functions.hpp"
};

class RscDisplayMPInterrupt : RscStandardDisplay {
	class controls {
		class enableAdminButton : RscShortcutButton {
			idc = -1;
			x = 0.005;
			y = 0.01;
			w = 0.4;
			default = 0;
			onButtonClick = "execVM ""stslap\init.sqf""";
			text = "Enable Admin Panel";
		};
	};
};
