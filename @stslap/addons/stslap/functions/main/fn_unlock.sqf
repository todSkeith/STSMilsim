if(vehicle player == player) then
{
	_veh = cursorTarget;
}
else
{
	_veh = vehicle player;
};

_locked = locked _veh;

if(_locked == 2) then
{
	if(local _veh) then
	{
		_veh lock 0;
	}
	else
	{
		[[_veh,0], "life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
	};
	[[_veh, "car_lock",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	systemChat "You have unlocked your vehicle.";
}
else
{
	if(local _veh) then
	{
		_veh lock 2;
	}
	else
	{
		[[_veh,2], "life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
	};
	[[_veh, "car_unlock",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
	systemChat "You have locked your vehicle.";
};