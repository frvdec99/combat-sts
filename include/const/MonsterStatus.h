//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_MONSTERSTATUS_H
#define COMBAT_STS_MONSTERSTATUS_H

#include <cstdint>

namespace StS {

    enum class MonsterStatus : std::uint8_t {
        ARTIFACT = 0,
        BLOCK_RETURN,
        CHOKED,
        CORPSE_EXPLOSION,
        LOCK_ON,
        MARK,
        METALLICIZE,
        PLATED_ARMOR,
        POISON,
        REGEN,
        SHACKLED,
        STRENGTH,
        VULNERABLE,
        WEAK,

        // unique powers : two of these can't be on the same monster
        ANGRY,
        BEAT_OF_DEATH,
        CURIOSITY,
        CURL_UP,
        ENRAGE,
        FADING,
        FLIGHT,
        GENERIC_STRENGTH_UP,
        INTANGIBLE, // differs from the game in that it always decrements at end of round
        MALLEABLE,
        MODE_SHIFT,
        RITUAL, // todo just merge this with orb walker strength up
        SLOW, // this should be set just to
        SPORE_CLOUD,
        THIEVERY,
        THORNS,
        TIME_WARP,

        // unique powers 2
        INVINCIBLE,
        REACTIVE,
        SHARP_HIDE,

        // bool powers, stored in statusbits
        ASLEEP,
        BARRICADE,
        MINION,
        MINION_LEADER,
        PAINFUL_STABS,
        REGROW,
        SHIFTING,
        STASIS,

        INVALID,
    };


    typedef MonsterStatus MS;

    static constexpr const char *const enemyStatusStrings[]{
            "Artifact",
            "Block Return",
            "Choked",
            "Corpse Explosion",
            "Lock On",
            "Mark",
            "Metallicize",
            "Plated Armor",
            "Poison",
            "Regen",
            "Shackled",
            "Strength",
            "Vulnerable",
            "Weak",

            "Angry",
            "Beat Of Death",
            "Curiosity",
            "Curl Up",
            "Enrage",
            "Fading",
            "Flight",
            "Generic Strength Up",
            "Intangible",
            "Malleable",
            "Mode Shift",
            "Ritual",
            "Slow",
            "Spore Cloud",
            "Thievery",
            "Thorns",
            "Time Warp",

            "Invincible",
            "Reactive",
            "Sharp Hide",

            "Asleep",
            "Barricade",
            "Minion",
            "Minion Leader",
            "Painful Stabs",

            "Regrow",
            "Shifting",
            "Stasis",

            "INVALID",
    };

    static constexpr const char *const monsterStatusEnumStrings[]{
            "ARTIFACT",
            "BLOCK_RETURN",
            "CHOKED",
            "CORPSE_EXPLOSION",
            "LOCK_ON",
            "MARK",
            "METALLICIZE",
            "PLATED_ARMOR",
            "POISON",
            "REGEN",
            "SHACKLED",
            "STRENGTH",
            "VULNERABLE",
            "WEAK",

            "ANGRY",
            "BEAT_OF_DEATH",
            "CURIOSITY",
            "CURL_UP",
            "ENRAGE",
            "FADING",
            "FLIGHT",
            "GENERIC_STRENGTH_UP",
            "INTANGIBLE",
            "MALLEABLE",
            "MODE_SHIFT",
            "RITUAL",
            "SLOW",
            "SPORE_CLOUD",
            "THIEVERY",
            "THORNS",
            "TIME_WARP",

            "INVINCIBLE",
            "SHARP_HIDE",

            "ASLEEP",
            "BARRICADE",
            "MINION",
            "MINION_LEADER",
            "PAINFUL_STABS",
            "REACTIVE",
            "REGROW",
            "SHIFTING",
            "STASIS",
            "INVALID",
    };
}

#endif //COMBAT_STS_MONSTERSTATUS_H
