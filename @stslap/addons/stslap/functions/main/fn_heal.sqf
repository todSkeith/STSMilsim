private["_unit"];
_unit = lbData[1100,lbCurSel (1100)];
_unit = call compile format["%1", _unit];

if(_unit getVariable ["unconscious", false]) then
{
	[[_unit], "life_fnc_reviveAction", _target, false] spawn BIS_fnc_MP;
}
else
{
	_unit setDamage 0;
};