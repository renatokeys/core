/*
 * Copyright (C) 2008-2016 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "ScriptLoader.h"
#include "World.h"

void AddSpellsScripts();
void AddSC_SmartScripts();
void AddCommandsScripts();

#ifdef SCRIPTS
void AddWorldScripts();
void AddEasternKingdomsScripts();
void AddKalimdorScripts();
void AddOutlandScripts();
void AddNorthrendScripts();
void AddEventsScripts();
void AddPetScripts();
void AddOutdoorPvPScripts();
void AddCustomScripts();
void AddSC_Reset();
void AddSC_PWS_Transmogrification();
void AddSC_CS_Transmogrification();
#endif

void AddScripts()
{
    AddSpellsScripts();
    AddSC_SmartScripts();
    AddCommandsScripts();
#ifdef SCRIPTS
    AddWorldScripts();
    AddEasternKingdomsScripts();
    AddKalimdorScripts();
    AddOutlandScripts();
    AddNorthrendScripts();
    AddEventsScripts();
    AddPetScripts();
    AddOutdoorPvPScripts();
    AddCustomScripts();
	AddSC_Reset();
	AddSC_PWS_Transmogrification();
    AddSC_CS_Transmogrification();
#endif
}
