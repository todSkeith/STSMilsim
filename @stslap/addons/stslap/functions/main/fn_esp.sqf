if(adbt_esp == 0) then 
{
	adbt_esp = 1;
	hint "ESP: ON\n\n Players now have an ICON above them";
	while{adbt_esp == 1} do 
	{
		{
			if(isPlayer leader(_x)) then {
			_color = switch(side leader(_x)) do
			{
				case civilian: {[0, 1, 1, 1]}; //Sky blue
				case east: {[1, 0, 0, 1]};//Red
				case resistance: {[0, 1, 0, 1]};//Green
				case west: {[0, 0, 1, 1]};//Blue
			};
			_name = format["%1 - %2m", name leader(_x), round(player distance leader(_x))];
			_icon = _x addGroupIcon ["o_plane", [0,0]]; _x setGroupIconParams [_color, _name, 1, TRUE]; _iconized = _iconized + [_x]
			};
		} foreach allGroups;
		setGroupIconsVisible [TRUE, TRUE];
		sleep 0.3;
		{if(isPlayer leader(_x)) then {
			ClearGroupIcons _x;
			};
		} foreach allGroups;
	};
} 
else {
	adbt_esp = 0;
	hint "ESP: OFF\n\nPlayers no longer have icons";
	{clearGroupIcons _x} foreach AllGroups
	};
	
