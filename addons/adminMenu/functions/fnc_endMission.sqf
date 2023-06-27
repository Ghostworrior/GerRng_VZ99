#include "script_component.hpp"

params ["_winningSide"];
TRACE_1("params",_this);

if (isServer) then {call ocap_fnc_exportData};

if ((!hasInterface) || {EGVAR(core,playerStartingSide) == _winningSide}) then {
    ["", true, 1] call BIS_fnc_endMission;
} else {
    ["", false, 1] call BIS_fnc_endMission;
};
