#include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "WorldPacket.h"
#include "Player.h"

class VendorScript : public CreatureScript
{
	public:
		VendorScript() : CreatureScript("VendorScript"){}

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_helmet_74:24|t|r Helm", GOSSIP_SENDER_MAIN, 1);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_shoulder_37:24|t|r Shoulder", GOSSIP_SENDER_MAIN, 2);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_chest_plate03:24|t|r Chest", GOSSIP_SENDER_MAIN, 3);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_bracer_18:24|t|r Wrist", GOSSIP_SENDER_MAIN, 4);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_gauntlets_29:24|t|r Gloves", GOSSIP_SENDER_MAIN, 5);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_belt_27:24|t|r Belt", GOSSIP_SENDER_MAIN, 6);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_pants_04:24|t|r Legs", GOSSIP_SENDER_MAIN, 7);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_boots_plate_09:24|t|r Boots", GOSSIP_SENDER_MAIN, 8);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_jewelry_amulet_04:24|t|r Necks", GOSSIP_SENDER_MAIN, 9);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_misc_cape_20:24|t|r Cloaks", GOSSIP_SENDER_MAIN, 10);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_jewelry_ring_40:24|t|r Rings", GOSSIP_SENDER_MAIN, 1);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_misc_ahnqirajtrinket_04:24|t|r Trinkets", GOSSIP_SENDER_MAIN, 12);
			pPlayer->PlayerTalkClass->SendGossipMenu(9425, pCreature->GetGUID());
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
				case 1:
					{
						Player->vendorentry = 500141;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500141);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 2:
					{
						Player->vendorentry = 500141;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500141);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;


				case 3:
					{
						Player->vendorentry = 500141;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500141);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;


				case 4:
					{
						Player->vendorentry = 500141;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500141);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 5:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;
				case 6:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 7:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 8:
					{
						Player->vendorentry = 500139;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500139);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;

				case 9:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
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

void AddSC_VendorScript()
{
	new VendorScript();
}