_ret = _this;
disableSerialization;
_display = findDisplay 67300;
_hand = _display displayCtrl 1108;
_bank = _display displayCtrl 1109;

_unit = _ret select 0;
_cash = _ret select 1;
_bankN = _ret select 2;
//need to add garage and inv next... on get data button.

_hand ctrlSetStructuredText parseText format["%1", _cash];
_bank ctrlSetStructuredText parseText format["%1", _bankN];
