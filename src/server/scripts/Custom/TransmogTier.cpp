#include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "WorldPacket.h"
#include "Player.h"

class TransmogTier : public CreatureScript
{
	public:
		TransmogTier() : CreatureScript("TransmogTier"){}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 1", GOSSIP_SENDER_MAIN, 1);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 2", GOSSIP_SENDER_MAIN, 2);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 3", GOSSIP_SENDER_MAIN, 3);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 4", GOSSIP_SENDER_MAIN, 4);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 5", GOSSIP_SENDER_MAIN, 5);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 6", GOSSIP_SENDER_MAIN, 6);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 7", GOSSIP_SENDER_MAIN, 7);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 8", GOSSIP_SENDER_MAIN, 8);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\spell_holy_proclaimchampion:24|t|r Tier 9", GOSSIP_SENDER_MAIN, 9);
			pPlayer->PlayerTalkClass->SendGossipMenu(1, pCreature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player * Player, Creature * Creature, uint32 /*uiSender*/, uint32 uiAction)
		{
			if(!Player)
				return true;

			WorldSession * m_session = Player->GetSession();
			Player->vendorentry = -1;
			switch(uiAction)
			{
				case 1: // Tier 1
					{
						Player->vendorentry = 100004;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100004);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 2: // Tier 2
					{
						Player->vendorentry = 100005;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100005);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;


				case 3:  // Tier 3
					{
						Player->vendorentry = 100006;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100006);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;


				case 4:  // tier 4
					{
						Player->vendorentry = 100007;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100007);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 5:  // tier 5
					{
						Player->vendorentry = 100008;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100008);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 6:  // tier 6
					{
						Player->vendorentry = 100009;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100009);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 7: // tier 7
					{
						Player->vendorentry = 100010;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100010);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 8:  // tier 8
					{
						Player->vendorentry = 100011;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100011);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 9:  // tier 9
					{
						Player->vendorentry = 100012;
						m_session->SendCustomListInventory(Creature->GetGUID(), 100012);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 10:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 11:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 12:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;
			}
			return true;
		}

};

void AddSC_TransmogTier()
{
	new TransmogTier();
}