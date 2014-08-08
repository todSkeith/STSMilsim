private["_unit"];
_unit = lbData[1100,lbCurSel (1100)];
_unit = call compile format["%1", _unit];

_unit setDamage 1;