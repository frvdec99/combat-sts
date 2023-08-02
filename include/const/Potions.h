//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_POTIONS_H
#define COMBAT_STS_POTIONS_H

#include <cstdint>

namespace StS {
    enum class Potion : std::uint8_t {
        INVALID = 0,
        EMPTY_POTION_SLOT,
        AMBROSIA,
        ANCIENT_POTION,

        ATTACK_POTION,
        BLESSING_OF_THE_FORGE,
        BLOCK_POTION,
        BLOOD_POTION,

        BOTTLED_MIRACLE,
        COLORLESS_POTION,
        CULTIST_POTION,
        CUNNING_POTION,

        DEXTERITY_POTION,
        DISTILLED_CHAOS,
        DUPLICATION_POTION,
        ELIXIR_POTION,

        ENERGY_POTION,
        ENTROPIC_BREW,
        ESSENCE_OF_DARKNESS,
        ESSENCE_OF_STEEL,

        EXPLOSIVE_POTION,
        FAIRY_POTION,
        FEAR_POTION,
        FIRE_POTION,

        FLEX_POTION, // called SteroidPotion in game code
        FOCUS_POTION,
        FRUIT_JUICE,
        GAMBLERS_BREW,

        GHOST_IN_A_JAR,
        HEART_OF_IRON,
        LIQUID_BRONZE,
        LIQUID_MEMORIES,

        POISON_POTION,
        POTION_OF_CAPACITY,
        POWER_POTION,
        REGEN_POTION,

        SKILL_POTION,
        SMOKE_BOMB,
        SNECKO_OIL,
        SPEED_POTION,

        STANCE_POTION,
        STRENGTH_POTION,
        SWIFT_POTION,
        WEAK_POTION,
    };

    static constexpr const char* potionNames[] {
            "INVALID",
            "EMPTY_POTION_SLOT",
            "Ambrosia",
            "Ancient Potion",
            "Attack Potion",
            "Blessing Of The Forge",
            "Block Potion",
            "Blood Potion",
            "Bottled Miracle",
            "Colorless Potion",
            "Cultist Potion",
            "Cunning Potion",
            "Dexterity Potion",
            "Distilled Chaos",
            "Duplication Potion",
            "Elixir Potion",
            "Energy Potion",
            "Entropic Brew",
            "Essence Of Darkness",
            "Essence Of Steel",
            "Explosive Potion",
            "Fairy Potion",
            "Fear Potion",
            "Fire Potion",
            "Flex Potion",
            "Focus Potion",
            "Fruit Juice",
            "Gamblers Brew",
            "Ghost In A Jar",
            "Heart Of Iron",
            "Liquid Bronze",
            "Liquid Memories",
            "Poison Potion",
            "Potion Of Capacity",
            "Power Potion",
            "Regen Potion",
            "Skill Potion",
            "Smoke Bomb",
            "Snecko Oil",
            "Speed Potion",
            "Stance Potion",
            "Strength Potion",
            "Swift Potion",
            "Weak Potion",
    };

    static constexpr const char* const potionIds[] {
            "INVALID_ID",
            "EMPTY_POTION_ID",
            "Ambrosia",
            "Ancient Potion",
            "AttackPotion",
            "BlessingOfTheForge",
            "Block Potion",
            "BloodPotion",
            "BottledMiracle",
            "ColorlessPotion",
            "CultistPotion",
            "CunningPotion",
            "Dexterity Potion",
            "DistilledChaos",
            "DuplicationPotion",
            "ElixirPotion",
            "Energy Potion",
            "EntropicBrew",
            "EssenceOfDarkness",
            "EssenceOfSteel",
            "Explosive Potion",
            "FairyPotion",
            "FearPotion",
            "Fire Potion",
            "SteroidPotion",
            "FocusPotion",
            "Fruit Juice",
            "GamblersBrew",
            "GhostInAJar",
            "HeartOfIron",
            "LiquidBronze",
            "LiquidMemories",
            "Poison Potion",
            "PotionOfCapacity",
            "PowerPotion",
            "Regen Potion",
            "SkillPotion",
            "SmokeBomb",
            "SneckoOil",
            "SpeedPotion",
            "StancePotion",
            "Strength Potion",
            "Swift Potion",
            "Weak Potion",
    };

    static constexpr const char *potionEnumNames[] = {"INVALID","EMPTY_POTION_SLOT","AMBROSIA","ANCIENT_POTION","ATTACK_POTION","BLESSING_OF_THE_FORGE","BLOCK_POTION","BLOOD_POTION","BOTTLED_MIRACLE","COLORLESS_POTION","CULTIST_POTION","CUNNING_POTION","DEXTERITY_POTION","DISTILLED_CHAOS","DUPLICATION_POTION","ELIXIR_POTION","ENERGY_POTION","ENTROPIC_BREW","ESSENCE_OF_DARKNESS","ESSENCE_OF_STEEL","EXPLOSIVE_POTION","FAIRY_POTION","FEAR_POTION","FIRE_POTION","FLEX_POTION","FOCUS_POTION","FRUIT_JUICE","GAMBLERS_BREW","GHOST_IN_A_JAR","HEART_OF_IRON","LIQUID_BRONZE","LIQUID_MEMORIES","POISON_POTION","POTION_OF_CAPACITY","POWER_POTION","REGEN_POTION","SKILL_POTION","SMOKE_BOMB","SNECKO_OIL","SPEED_POTION","STANCE_POTION","STRENGTH_POTION","SWIFT_POTION","WEAK_POTION",};

    static const char* getPotionName(Potion p) {
        return potionNames[static_cast<int>(p)];
    }

    enum class PotionRarity {
        COMMON=0,
        UNCOMMON,
        RARE,
        PLACEHOLDER,
    };


    static constexpr PotionRarity potionRarities[] = {
            PotionRarity::PLACEHOLDER,
            PotionRarity::PLACEHOLDER,
            PotionRarity::RARE,     // Ambrosia
            PotionRarity::UNCOMMON, // Ancient Potion

            PotionRarity::COMMON,   // Attack Potion
            PotionRarity::COMMON,   // Blessing of the Forge
            PotionRarity::COMMON,   // Block Potion
            PotionRarity::COMMON,   // Blood Potion

            PotionRarity::COMMON,   // Bottled Miracle
            PotionRarity::COMMON,   // Colorless Potion
            PotionRarity::RARE,     // Cultist Potion
            PotionRarity::UNCOMMON, // Cunning Potion

            PotionRarity::COMMON,   // Dexterity Potion
            PotionRarity::UNCOMMON, // Distilled Chaos
            PotionRarity::UNCOMMON, // Duplication Potion
            PotionRarity::UNCOMMON, // Elixir Potion

            PotionRarity::COMMON,   // Energy Potion
            PotionRarity::RARE,     // Entropic Brew
            PotionRarity::RARE,     // Essence of Darkness
            PotionRarity::UNCOMMON, // Essence of Steel

            PotionRarity::COMMON,   // Explosive Potion
            PotionRarity::RARE,     // Fairy Potion
            PotionRarity::COMMON,   // Fear Potion
            PotionRarity::COMMON,   // Fire Potion

            PotionRarity::COMMON,   // Flex Potion
            PotionRarity::COMMON,   // Focus Potion
            PotionRarity::RARE,     // Fruit Juice
            PotionRarity::UNCOMMON, // Gamblers Brew

            PotionRarity::RARE,     // Ghost in a Jar
            PotionRarity::RARE,     // Heart of Iron
            PotionRarity::UNCOMMON, // Liquid Bronze
            PotionRarity::UNCOMMON, // Liquid Memories

            PotionRarity::COMMON,   // Poison Potion
            PotionRarity::UNCOMMON, // Potion of Capacity
            PotionRarity::COMMON,   // Power Potion
            PotionRarity::UNCOMMON, // Regen Potion

            PotionRarity::COMMON,   // Skill Potion
            PotionRarity::RARE,     // Smoke Bomb
            PotionRarity::RARE,     // Snecko Oil
            PotionRarity::COMMON,   // Speed Potion

            PotionRarity::UNCOMMON, // Stance Potion
            PotionRarity::COMMON,   // Strength Potion
            PotionRarity::COMMON,   // Swift Potion
            PotionRarity::COMMON,   // Weak Potion
    };
}

#endif //COMBAT_STS_POTIONS_H
