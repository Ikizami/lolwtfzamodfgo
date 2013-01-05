/*******************************************************
#                  Killstreak                          #
*                For Havok-WoW                         *
#                     By, Tommy                        #
*                Idea: Ghostcrawler                    *
#                                                      #
********************************************************/
#include "ScriptPCH.h"

enum Spells
{
	SPELL_SPEED = 51442,
	SPELL_ENRAGE_REGEN = 55694,
	SPELL_MARK_WILD = 39233,
	SPELL_STAMINA = 48102
};

struct KillStreak_Info
{
	uint32 killstreak;
	uint64 lastkill;
};

class System_OnKill : public PlayerScript
{
	public:
		System_OnKill() : PlayerScript("System_OnKill") {}

	void OnPVPKill(Player * Killer, Player * Victim)
	{
		uint64 KillerGUID = Killer->GetGUID();
		uint64 VictimGUID = Victim->GetGUID();

		static std::map<uint64, KillStreak_Info> KillStreakData;

		if( KillerGUID == VictimGUID || KillStreakData[KillerGUID].lastkill == VictimGUID )
			return;

		KillStreakData[KillerGUID].killstreak++;
		KillStreakData[KillerGUID].lastkill = VictimGUID;
		KillStreakData[VictimGUID].killstreak = 0;
		KillStreakData[VictimGUID].lastkill = 0;

		if( KillStreakData[KillerGUID].killstreak  % 10 == 0)
		{
			    char msg[250];
			    snprintf(msg, 250, "[PvP System]: %s is on a killstreak of %u!", Killer->GetName().c_str(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, msg);
		}

		switch( KillStreakData[KillerGUID].killstreak )
		{
			
			case 1:
				Killer->CastSpell(Killer, SPELL_SPEED, true);
				char msg[250];
			    	snprintf(msg, 250, "[PvP System]: %s is on a killstreak of %u!", Killer->GetName().c_str(), KillStreakData[KillerGUID].killstreak);
				sWorld->SendServerMessage(SERVER_MSG_STRING, msg);
				break;
				
			case 50:
				Killer->CastSpell(Killer, SPELL_SPEED, true);
				break;

			case 60:
				Killer->CastSpell(Killer, SPELL_ENRAGE_REGEN, true);
				break;

			

			case 100:
				Killer->CastSpell(Killer, SPELL_ENRAGE_REGEN, true);
				Killer->CastSpell(Killer, SPELL_MARK_WILD, true);
				break;

			case 150:
				Killer->CastSpell(Killer, SPELL_ENRAGE_REGEN, true);
				break;

			case 200:
				Killer->CastSpell(Killer, SPELL_ENRAGE_REGEN, true);
				Killer->CastSpell(Killer, SPELL_MARK_WILD, true);
				break;

			case 220:
				Killer->CastSpell(Killer, SPELL_SPEED, true);
				break;

			case 250:
				Killer->CastSpell(Killer, SPELL_SPEED, true);
				break;

			case 300:
				Killer->CastSpell(Killer, SPELL_ENRAGE_REGEN, true);
				Killer->CastSpell(Killer, SPELL_STAMINA, true);
				break;
		}
	} 
};

void AddSC_PvP_System()
{
    new System_OnKill();
}