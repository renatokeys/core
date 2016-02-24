#include "SpellHistory.h"

class Reset_OnDuelEnd : public PlayerScript
{
    public:
        Reset_OnDuelEnd() : PlayerScript("Reset_OnDuelEnd") {}

    void OnDuelEnd(Player *winner, Player *looser, DuelCompleteType type)
    {
					if (winner->GetZoneId() == 14 or winner->GetZoneId == 12)
					{
                        winner->GetSession()->SendNotification("Você ganhou de %s! em um duelo!", looser->GetName());
                        winner->GetSpellHistory()->ResetAllCooldowns(); 
 						looser->GetSpellHistory()->ResetAllCooldowns(); 
                        looser->GetSession()->SendNotification("%s ganhou de você em um duelo!", winner->GetName());
					}
    }
};

void AddSC_Reset()
{
    new Reset_OnDuelEnd;
}