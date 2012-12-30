class KillStreak_System : public PlayerScript
{
				public:
								KillStreak_System() : PlayerScript("KillStreak_System"){}
							  
								struct KillStreak_Info
								{
												uint32 killstreak;
												uint64 lastkill;
								};
								static std::map<uint64, KillStreak_Info> KillStreakData;
							  
								void OnPvPKill(Player * Killer, Player * Victim)
								{
												uint64 KillerGUID = Killer->GetGUID();
												uint64 VictimGUID = Victim->GetGUID();
											  
												if (KillerGUID == VictimGUID || KillStreakData[KillerGUID].lastkill == VictimGUID)
																return;
															  
												KillStreakData[KillerGUID].killstreak++;
												KillStreakData[KillerGUID].lastkill = VictimGUID;
												KillStreakData[VictimGUID].killstreak = 0;
												KillStreakData[VictimGUID].lastkill = 0;
												char message[250];
												switch( KillStreakData[KillerGUID].killstreak )
												{
																case 1:
																				snprintf(message, 250, "[PVP System]: %s is on a killstreak of %u!", Killer->GetName().c_str(), KillStreakData[KillerGUID].killstreak);
																				break;
																case 10:
																				snprintf(message, 250, "[PVP System]: %s is on a killstreak of %u!", Killer->GetName().c_str(), KillStreakData[KillerGUID].killstreak);

																				break;
												}
												 sWorld->SendServerMessage(SERVER_MSG_STRING, message, 0);
								}
};

void AddSC_KillStreak_System()
{
				new KillStreak_System;
}