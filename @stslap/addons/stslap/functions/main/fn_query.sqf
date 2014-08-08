private["_display","_text","_info","_prim","_sec","_vest","_uni","_bp","_attach","_tmp"];

disableSerialization;
_display = findDisplay 2900;
_text = _display displayCtrl 1108;
_info = lbData[1100,lbCurSel (1100)];
_info = call compile format["%1", _info];
if(isNil "_info") exitWith {_text ctrlSetText "Player no longer exists?";};
if(isNull _info) exitWith {_text ctrlSetText "Player no longer exists?";};
[[player],"fnc_player_query",_info,false] spawn life_fnc_MP;
_text ctrlSetText "Querying player......";