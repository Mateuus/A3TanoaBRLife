StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] spawn life_fnc_introText;
[] spawn life_fnc_autoMessages; // Auto Messages INIT
[] execVM "scripts\fn_statusBar.sqf";

StartProgress = true;