private["_unit"];
_unit = lbData[1100,lbCurSel (1100)];
_unit = call compile format["%1", _unit];

if(isNull _unit) exitWith {}; //Not valid
if(!(_unit getVariable "Escorting")) exitWith {}; //He's not being Escorted.
if(player distance _unit > 4) exitWith {};

detach _unit;
_unit setVariable["Escorting",false,true];