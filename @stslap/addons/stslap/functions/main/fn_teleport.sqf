private ["_textSelect"];

f_telePositionSelected = false;
_textSelect = "Click on map to teleport.";

titletext [_textSelect,"plain", 0.4];
openMap true;
onMapSingleClick "vehicle player setPos _pos; f_telePositionSelected = true";
waitUntil {f_telePositionSelected};
openMap false;
onMapSingleClick "";

