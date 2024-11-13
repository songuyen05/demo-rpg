#include "warrior.h"
#include "pc_macros.h"

Warrior::Warrior() : PlayerCharacterDelegate() {
    //MP = std::make_unique<PointWell>(BASEMP, BASEMP);  // be sure to init before PCCONSTRUCT MACRO
    PCCONSTRUCT

}
void Warrior::level_char_up() noexcept {
    LEVELUP
        if (GetLevel() == 2) {
            Abilities.emplace_back(new Ability("PowerAttack", 4u, nullptr, 0u, 3u, ABILITYTARGET::ENEMY, ABILITYSCALER::STR));
        }
        else if (GetLevel() == 3) {
            Abilities.emplace_back(new Ability("Healing Surge", 4u, nullptr, 0u, 4u, ABILITYTARGET::SELF, ABILITYSCALER::NONE));
        }
}
