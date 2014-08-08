private["_unit"];
_unit = lbData[1100,lbCurSel (1100)];
_unit = call compile format["%1", _unit];

if(isNull _unit) exitWith {}; //Error check?

[[_unit,"AmovPercMstpSnonWnonDnon"],"life_fnc_animSync",true,false] spawn life_fnc_MP;
_unit setVariable["restrained",false,true];
_unit setVariable["Escorting",false,true];
_unit setVariable["transporting",false,true];
_unit setVariable["zipTie",false,true];
detach _unit;

[[0,format["%1 was unrestrained by %2",name _unit, name player]],"life_fnc_broadcast",west,false] call life_fnc_MP;