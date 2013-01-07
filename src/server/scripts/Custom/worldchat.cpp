#include "ScriptPCH.h"
#include "Chat.h"
 
class chat : public CommandScript
{
        public:
                chat() : CommandScript("chat"){}
 
        ChatCommand * GetCommands() const
        {
                static ChatCommand ChatCommandTable[] =
                {
                        {"chat",        SEC_PLAYER,             true,           &HandleChatCommand,     "", NULL},
                        {NULL,          0,                              false,          NULL,                                           "", NULL}
                };
 
                return ChatCommandTable;
        }
 
        static bool HandleChatCommand(ChatHandler * handler, const char * args)
        {
                if (!args)
                        return false;
 
                std::string msg = "";
                Player * player = handler->GetSession()->GetPlayer();
 
                switch(player->GetSession()->GetSecurity())
                {
                        case SEC_PLAYER:
                                if (player->GetTeam() == ALLIANCE)
                                {
                                        msg += "|cffffffff[World] |cffffffff[";
                                        msg += player->GetName();
                                        msg += "] ";
                                }
                                else
                                {
                                        msg += "|cffffffff[World] |cffffffff[";
                                        msg += player->GetName();
                                        msg += "] ";
                                }
                                break;
                        case SEC_VIP:
                                msg += "|cffffffff[World]|r  |cffff8a00[VIP] |cffffffff[";
                                msg += player->GetName();
                                msg += "]";
                                break;
						case SEC_EVENT_MASTER :
                                msg += "|cffffffff[World]|r|cffff0000[Staff]|r[";
                                msg += player->GetName();
                                msg += "] ";
                                break;
                        case SEC_GAMEMASTER:
                                msg += "|cffffffff[World]|r|cffff0000[Staff]|r[";
                                msg += player->GetName();
                                msg += "] ";
                                break;
                        case SEC_LGM:
                                msg += "|cffffffff[World]|r|cffff0000[Staff]|r[";
                                msg += player->GetName();
                                msg += "] ";
                                break;
                        case SEC_DEV:
                                msg += "|cffffffff[World]|r|cffff0000[Staff][";
                                msg += player->GetName();
                                msg += "]|r ";
                                break;
						case SEC_ADMINISTRATOR:
                                msg += "|cffffffff[World]|r|cffff0000[Staff][";
                                msg += player->GetName();
                                msg += "]|r ";
                                break;
                        case SEC_CONSOLE:
                                msg += "|cffffffff[World]|r|cffff0000[Staff][";
                                msg += player->GetName();
                                msg += "]|r ";
                                break;
 
                }
                       
                msg += args;
                sWorld->SendServerMessage(SERVER_MSG_STRING, msg.c_str(), 0);  
 
                return true;
        }
};
 
void AddSC_chat()
{
        new chat();
}