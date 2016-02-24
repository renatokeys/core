#include "SpellHistory.h"

class Reset_OnDuelEnd : public PlayerScript
{
    public:
        Reset_OnDuelEnd() : PlayerScript("Reset_OnDuelEnd") {}

    void OnDuelEnd(Player *winner, Player *looser, DuelCompleteType type)
    {
					if (winner->GetZoneId() == 14 or winner->GetZoneId() == 12)
					{
                        winner->GetSpellHistory()->ResetAllCooldowns(); 
 						looser->GetSpellHistory()->ResetAllCooldowns(); 
					}
    }
};

void AddSC_Reset()
{
    new Reset_OnDuelEnd;
}