/************************************
*    Made by Ghostcrawler336        *
*       Alliance_Base_Guard         *
*            Script %5              *
*                                   *
*                                   *
*************************************/

#include "ScriptPCH.h"

enum eNums
{
SPELL_RUSHINGCHARGE         = 8260,

 
};

#define SAY_ON_COMBAT  "For The Alliance!"
#define SAY_EVADE  "Haha, you better run!"	


class Alliance_Base_Guard : public CreatureScript
{
public: 
	Alliance_Base_Guard() : CreatureScript("Alliance_Base_Guard") { }
     
        struct Creature_MageAI : public ScriptedAI
		{
            Creature_MageAI(Creature* creature) : ScriptedAI(creature) {}
     
            uint32 Rushingcharge;
            uint32 ResetTimer;

		
//---------------------------------------------------------------------------------------------------------
			
	    void Reset()
            {
		Rushingcharge    = urand(1 * IN_MILLISECONDS, 20 * IN_MILLISECONDS);
                FrostboltTimer   = urand(1 * IN_MILLISECONDS, 5 * IN_MILLISECONDS);
                ResetTimer        = 5 * IN_MILLISECONDS;
            }


//---------------------------------------------------------------------------------------------------------
	
		   void EnterCombat(Unit* who)
            {
				me->MonsterYell(SAY_ON_COMBAT, LANG_UNIVERSAL, 0);
				DoCast(me, SPELL_RUSHINGCHARGE);
            }
                

			
//---------------------------------------------------------------------------------------------------------	
			//void UpdateAI(const uint32 diff)
           // {
               // if (!UpdateVictim())
                 //   return;
//---------------------------------------------------------------------------------------------------------

              //  if (FrostboltTimer <= diff)
              //  {
              //      DoCast(me->getVictim(), SPELL_FROSTBOLT);
              //      FrostboltTimer =  urand(4 * IN_MILLISECONDS, 10 * IN_MILLISECONDS);
              //  } else FrostboltTimer -= diff;


//---------------------------------------------------------------------------------------------------------
				
//-------------------------------------------------------------		
 	
                if (ResetTimer <= diff)
                {
                    if (me->GetDistance2d(me->GetHomePosition().GetPositionX(), me->GetHomePosition().GetPositionY()) > 50)
                    {
                        EnterEvadeMode();
                        me->MonsterYell(SAY_EVADE, LANG_UNIVERSAL, 0);
                    }
					ResetTimer = 5 * IN_MILLISECONDS;
                } else ResetTimer -= diff;
     
                DoMeleeAttackIfReady();
            }
        };
     
        CreatureAI* GetAI(Creature* creature) const
        {
            return new Creature_MageAI(creature);
        }
};
     
void AddSC_Alliance_Base_Guard()
{
	new Alliance_Base_Guard;
}