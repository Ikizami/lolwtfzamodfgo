#include "ScriptPCH.h"
#include "ScriptMgr.h"
#include "WorldPacket.h"
#include "Player.h"

class VendorScript : public CreatureScript
{
	public:
		VendorScript() : CreatureScript("VendorScript"){} // guess that goes in the NPC script :P "VendorScript" xD ya ScriptName , can be changed for new npcs right? like it can be changed, ofc different class name you make to not collide, yeah :P

		bool OnGossipHello(Player * pPlayer, Creature * pCreature)
		{
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_misc_comb_02:24|t|r Vendor1", GOSSIP_SENDER_MAIN, 0);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\inv_misc_comb_02:24|t|r Vendor2", GOSSIP_SENDER_MAIN, 1);
			pPlayer->ADD_GOSSIP_ITEM(4, "|cff00ff00|TInterface\\icons\\trade_engineering:24|t|r Nevermind", GOSSIP_SENDER_MAIN, 2);
			pPlayer->PlayerTalkClass->SendGossipMenu(9425, pCreature->GetGUID());
			return true;
		}

		bool OnGossipSelect(Player * Player, Creature * Creature, uint32 /*uiSender*/, uint32 uiAction)
		{
			if(!Player)
				return true;

			//Ok basically i have documented you in comments how does the system work, vendorentry -> is actually then vendor from what you want to send to players items to see if you leave it as -1 then if the creature currently with who is he speaking is vendor it will send its items

			WorldSession * m_session = Player->GetSession();
			Player->vendorentry = -1;
			switch(uiAction)
			{
				case 0:
					{
						//So ou first set vendorentry to vendor id the one you are sending iems then you send packet to him with that entry using new function
						Player->vendorentry = 500141;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500141);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;
				case 1:
					{
						Player->vendorentry = 500142;
						m_session->SendCustomListInventory(Creature->GetGUID(), 500142);
						Player->PlayerTalkClass->SendCloseGossip();
					}break;
				case 2:
				{
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