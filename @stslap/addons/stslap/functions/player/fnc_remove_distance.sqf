
_distance = parseNumber ctrlText 66601;
_mode = _this select 0;

//0 = All
//1 = Cars
//2 = Air
//3 = Ship
switch(_mode) do
{
	case 0: {
		_obj = (position player) nearObjects _distance;
		{
			if(player != _x) then 
			{
				deleteVehicle _x;
			};
		} forEach _obj;
	};
	case 1: {
		_obj = (position player) nearObjects ["LandVehicle",_distance];
		{
			if(player != _x) then 
			{
				deleteVehicle _x;
			};
		} forEach _obj;
	};
	case 2: {
		_obj = (position player) nearObjects ["Air",_distance];
		{
			if(player != _x) then 
			{
				deleteVehicle _x;
			};
		} forEach _obj;
	};
	case 3: {
		_obj = (position player) nearObjects ["Ship",_distance];
		{
			if(player != _x) then 
			{
				deleteVehicle _x;
			};
		} forEach _obj;
	};
};