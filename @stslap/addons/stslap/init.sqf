adbt_keyhandler = 
{
	private["_handled","_ctrl", "_dikCode", "_shift", "_ctrlKey", "_alt"];
	_ctrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	_handled = false;
	//ctrl + TAB
	if (!_shift && _ctrlKey && !_alt && (_dikCode == 15)) then {
			_ctrl = nil;
			_handled = true;
			createDialog "stslap_menu";
			_display = findDisplay 67300;
			_list = _display displayCtrl 1100;
			//populate player list
			lbClear _list;
			{
				_list lbAdd format["%1", name _x];
				_list lbSetdata [(lbSize _list)-1,str(_x)];
			} forEach playableUnits; 
		};
	//num .
	if (_dikCode == 83) then {
			_ctrl = nil;
			_handled = true;
			deleteVehicle cursorTarget;
		};
	
	_handled;
};

[] spawn { (findDisplay 46) displayAddEventHandler ["keyDown", "_this call adbt_keyhandler"]; }