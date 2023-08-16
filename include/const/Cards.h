//
// Created by andian on 2023/8/2.
//

#ifndef COMBAT_STS_CARDS_H
#define COMBAT_STS_CARDS_H

#include <cstdint>

namespace StS {
    enum class CardId : std::uint16_t {
        INVALID = 0,
        ACCURACY,
        ACROBATICS,
        ADRENALINE,
        AFTER_IMAGE,
        AGGREGATE,
        ALCHEMIZE,
        ALL_FOR_ONE,
        ALL_OUT_ATTACK,
        ALPHA,
        AMPLIFY,
        ANGER,
        APOTHEOSIS,
        APPARITION,
        ARMAMENTS,
        ASCENDERS_BANE,
        AUTO_SHIELDS,
        A_THOUSAND_CUTS,
        BACKFLIP,
        BACKSTAB,
        BALL_LIGHTNING,
        BANDAGE_UP,
        BANE,
        BARRAGE,
        BARRICADE,
        BASH,
        BATTLE_HYMN,
        BATTLE_TRANCE,
        BEAM_CELL,
        BECOME_ALMIGHTY,
        BERSERK,
        BETA,
        BIASED_COGNITION,
        BITE,
        BLADE_DANCE,
        BLASPHEMY,
        BLIND,
        BLIZZARD,
        BLOODLETTING,
        BLOOD_FOR_BLOOD,
        BLUDGEON,
        BLUR,
        BODY_SLAM,
        BOOT_SEQUENCE,
        BOUNCING_FLASK,
        BOWLING_BASH,
        BRILLIANCE,
        BRUTALITY,
        BUFFER,
        BULLET_TIME,
        BULLSEYE,
        BURN,
        BURNING_PACT,
        BURST,
        CALCULATED_GAMBLE,
        CALTROPS,
        CAPACITOR,
        CARNAGE,
        CARVE_REALITY,
        CATALYST,
        CHAOS,
        CHARGE_BATTERY,
        CHILL,
        CHOKE,
        CHRYSALIS,
        CLASH,
        CLAW,
        CLEAVE,
        CLOAK_AND_DAGGER,
        CLOTHESLINE,
        CLUMSY,
        COLD_SNAP,
        COLLECT,
        COMBUST,
        COMPILE_DRIVER,
        CONCENTRATE,
        CONCLUDE,
        CONJURE_BLADE,
        CONSECRATE,
        CONSUME,
        COOLHEADED,
        CORE_SURGE,
        CORPSE_EXPLOSION,
        CORRUPTION,
        CREATIVE_AI,
        CRESCENDO,
        CRIPPLING_CLOUD,
        CRUSH_JOINTS,
        CURSE_OF_THE_BELL,
        CUT_THROUGH_FATE,
        DAGGER_SPRAY,
        DAGGER_THROW,
        DARKNESS,
        DARK_EMBRACE,
        DARK_SHACKLES,
        DASH,
        DAZED,
        DEADLY_POISON,
        DECAY,
        DECEIVE_REALITY,
        DEEP_BREATH,
        DEFEND_BLUE,
        DEFEND_GREEN,
        DEFEND_PURPLE,
        DEFEND_RED,
        DEFLECT,
        DEFRAGMENT,
        DEMON_FORM,
        DEUS_EX_MACHINA,
        DEVA_FORM,
        DEVOTION,
        DIE_DIE_DIE,
        DISARM,
        DISCOVERY,
        DISTRACTION,
        DODGE_AND_ROLL,
        DOOM_AND_GLOOM,
        DOPPELGANGER,
        DOUBLE_ENERGY,
        DOUBLE_TAP,
        DOUBT,
        DRAMATIC_ENTRANCE,
        DROPKICK,
        DUALCAST,
        DUAL_WIELD,
        ECHO_FORM,
        ELECTRODYNAMICS,
        EMPTY_BODY,
        EMPTY_FIST,
        EMPTY_MIND,
        ENDLESS_AGONY,
        ENLIGHTENMENT,
        ENTRENCH,
        ENVENOM,
        EQUILIBRIUM,
        ERUPTION,
        ESCAPE_PLAN,
        ESTABLISHMENT,
        EVALUATE,
        EVISCERATE,
        EVOLVE,
        EXHUME,
        EXPERTISE,
        EXPUNGER,
        FAME_AND_FORTUNE,
        FASTING,
        FEAR_NO_EVIL,
        FEED,
        FEEL_NO_PAIN,
        FIEND_FIRE,
        FINESSE,
        FINISHER,
        FIRE_BREATHING,
        FISSION,
        FLAME_BARRIER,
        FLASH_OF_STEEL,
        FLECHETTES,
        FLEX,
        FLURRY_OF_BLOWS,
        FLYING_KNEE,
        FLYING_SLEEVES,
        FOLLOW_UP,
        FOOTWORK,
        FORCE_FIELD,
        FOREIGN_INFLUENCE,
        FORESIGHT,
        FORETHOUGHT,
        FTL,
        FUSION,
        GENETIC_ALGORITHM,
        GHOSTLY_ARMOR,
        GLACIER,
        GLASS_KNIFE,
        GOOD_INSTINCTS,
        GO_FOR_THE_EYES,
        GRAND_FINALE,
        HALT,
        HAND_OF_GREED,
        HAVOC,
        HEADBUTT,
        HEATSINKS,
        HEAVY_BLADE,
        HEEL_HOOK,
        HELLO_WORLD,
        HEMOKINESIS,
        HOLOGRAM,
        HYPERBEAM,
        IMMOLATE,
        IMPATIENCE,
        IMPERVIOUS,
        INDIGNATION,
        INFERNAL_BLADE,
        INFINITE_BLADES,
        INFLAME,
        INJURY,
        INNER_PEACE,
        INSIGHT,
        INTIMIDATE,
        IRON_WAVE,
        JAX,
        JACK_OF_ALL_TRADES,
        JUDGMENT,
        JUGGERNAUT,
        JUST_LUCKY,
        LEAP,
        LEG_SWEEP,
        LESSON_LEARNED,
        LIKE_WATER,
        LIMIT_BREAK,
        LIVE_FOREVER,
        LOOP,
        MACHINE_LEARNING,
        MADNESS,
        MAGNETISM,
        MALAISE,
        MASTERFUL_STAB,
        MASTER_OF_STRATEGY,
        MASTER_REALITY,
        MAYHEM,
        MEDITATE,
        MELTER,
        MENTAL_FORTRESS,
        METALLICIZE,
        METAMORPHOSIS,
        METEOR_STRIKE,
        MIND_BLAST,
        MIRACLE,
        MULTI_CAST,
        NECRONOMICURSE,
        NEUTRALIZE,
        NIGHTMARE,
        NIRVANA,
        NORMALITY,
        NOXIOUS_FUMES,
        OFFERING,
        OMEGA,
        OMNISCIENCE,
        OUTMANEUVER,
        OVERCLOCK,
        PAIN,
        PANACEA,
        PANACHE,
        PANIC_BUTTON,
        PARASITE,
        PERFECTED_STRIKE,
        PERSEVERANCE,
        PHANTASMAL_KILLER,
        PIERCING_WAIL,
        POISONED_STAB,
        POMMEL_STRIKE,
        POWER_THROUGH,
        PRAY,
        PREDATOR,
        PREPARED,
        PRESSURE_POINTS,
        PRIDE,
        PROSTRATE,
        PROTECT,
        PUMMEL,
        PURITY,
        QUICK_SLASH,
        RAGE,
        RAGNAROK,
        RAINBOW,
        RAMPAGE,
        REACH_HEAVEN,
        REAPER,
        REBOOT,
        REBOUND,
        RECKLESS_CHARGE,
        RECURSION,
        RECYCLE,
        REFLEX,
        REGRET,
        REINFORCED_BODY,
        REPROGRAM,
        RIDDLE_WITH_HOLES,
        RIP_AND_TEAR,
        RITUAL_DAGGER,
        RUPTURE,
        RUSHDOWN,
        SADISTIC_NATURE,
        SAFETY,
        SANCTITY,
        SANDS_OF_TIME,
        SASH_WHIP,
        SCRAPE,
        SCRAWL,
        SEARING_BLOW,
        SECOND_WIND,
        SECRET_TECHNIQUE,
        SECRET_WEAPON,
        SEEING_RED,
        SEEK,
        SELF_REPAIR,
        SENTINEL,
        SETUP,
        SEVER_SOUL,
        SHAME,
        SHIV,
        SHOCKWAVE,
        SHRUG_IT_OFF,
        SIGNATURE_MOVE,
        SIMMERING_FURY,
        SKEWER,
        SKIM,
        SLICE,
        SLIMED,
        SMITE,
        SNEAKY_STRIKE,
        SPIRIT_SHIELD,
        SPOT_WEAKNESS,
        STACK,
        STATIC_DISCHARGE,
        STEAM_BARRIER,
        STORM,
        STORM_OF_STEEL,
        STREAMLINE,
        STRIKE_BLUE,
        STRIKE_GREEN,
        STRIKE_PURPLE,
        STRIKE_RED,
        STUDY,
        SUCKER_PUNCH,
        SUNDER,
        SURVIVOR,
        SWEEPING_BEAM,
        SWIFT_STRIKE,
        SWIVEL,
        SWORD_BOOMERANG,
        TACTICIAN,
        TALK_TO_THE_HAND,
        TANTRUM,
        TEMPEST,
        TERROR,
        THE_BOMB,
        THINKING_AHEAD,
        THIRD_EYE,
        THROUGH_VIOLENCE,
        THUNDERCLAP,
        THUNDER_STRIKE,
        TOOLS_OF_THE_TRADE,
        TRANQUILITY,
        TRANSMUTATION,
        TRIP,
        TRUE_GRIT,
        TURBO,
        TWIN_STRIKE,
        UNLOAD,
        UPPERCUT,
        VAULT,
        VIGILANCE,
        VIOLENCE,
        VOID,
        WALLOP,
        WARCRY,
        WAVE_OF_THE_HAND,
        WEAVE,
        WELL_LAID_PLANS,
        WHEEL_KICK,
        WHIRLWIND,
        WHITE_NOISE,
        WILD_STRIKE,
        WINDMILL_STRIKE,
        WISH,
        WORSHIP,
        WOUND,
        WRAITH_FORM,
        WREATH_OF_FLAME,
        WRITHE,
        ZAP,
    };

    enum class CardRarity {
        COMMON = 0,
        UNCOMMON,
        RARE,
        BASIC,
        SPECIAL,
        CURSE,
        INVALID,
    };

    enum class CardColor {
        RED = 0,
        GREEN,
        BLUE,
        PURPLE,
        COLORLESS,
        CURSE,
        INVALID,
    };

    enum class CardType {
        ATTACK = 0,
        SKILL,
        POWER,
        CURSE,
        STATUS,
        INVALID,
    };

    static constexpr const char* cardEnumStrings[]  = {"INVALID", "ACCURACY", "ACROBATICS", "ADRENALINE", "AFTER_IMAGE", "AGGREGATE", "ALCHEMIZE", "ALL_FOR_ONE", "ALL_OUT_ATTACK", "ALPHA", "AMPLIFY", "ANGER", "APOTHEOSIS", "APPARITION", "ARMAMENTS", "ASCENDERS_BANE", "AUTO_SHIELDS", "A_THOUSAND_CUTS", "BACKFLIP", "BACKSTAB", "BALL_LIGHTNING", "BANDAGE_UP", "BANE", "BARRAGE", "BARRICADE", "BASH", "BATTLE_HYMN", "BATTLE_TRANCE", "BEAM_CELL", "BECOME_ALMIGHTY", "BERSERK", "BETA", "BIASED_COGNITION", "BITE", "BLADE_DANCE", "BLASPHEMY", "BLIND", "BLIZZARD", "BLOODLETTING", "BLOOD_FOR_BLOOD", "BLUDGEON", "BLUR", "BODY_SLAM", "BOOT_SEQUENCE", "BOUNCING_FLASK", "BOWLING_BASH", "BRILLIANCE", "BRUTALITY", "BUFFER", "BULLET_TIME", "BULLSEYE", "BURN", "BURNING_PACT", "BURST", "CALCULATED_GAMBLE", "CALTROPS", "CAPACITOR", "CARNAGE", "CARVE_REALITY", "CATALYST", "CHAOS", "CHARGE_BATTERY", "CHILL", "CHOKE", "CHRYSALIS", "CLASH", "CLAW", "CLEAVE", "CLOAK_AND_DAGGER", "CLOTHESLINE", "CLUMSY", "COLD_SNAP", "COLLECT", "COMBUST", "COMPILE_DRIVER", "CONCENTRATE", "CONCLUDE", "CONJURE_BLADE", "CONSECRATE", "CONSUME", "COOLHEADED", "CORE_SURGE", "CORPSE_EXPLOSION", "CORRUPTION", "CREATIVE_AI", "CRESCENDO", "CRIPPLING_CLOUD", "CRUSH_JOINTS", "CURSE_OF_THE_BELL", "CUT_THROUGH_FATE", "DAGGER_SPRAY", "DAGGER_THROW", "DARKNESS", "DARK_EMBRACE", "DARK_SHACKLES", "DASH", "DAZED", "DEADLY_POISON", "DECAY", "DECEIVE_REALITY", "DEEP_BREATH", "DEFEND_BLUE", "DEFEND_GREEN", "DEFEND_PURPLE", "DEFEND_RED", "DEFLECT", "DEFRAGMENT", "DEMON_FORM", "DEUS_EX_MACHINA", "DEVA_FORM", "DEVOTION", "DIE_DIE_DIE", "DISARM", "DISCOVERY", "DISTRACTION", "DODGE_AND_ROLL", "DOOM_AND_GLOOM", "DOPPELGANGER", "DOUBLE_ENERGY", "DOUBLE_TAP", "DOUBT", "DRAMATIC_ENTRANCE", "DROPKICK", "DUALCAST", "DUAL_WIELD", "ECHO_FORM", "ELECTRODYNAMICS", "EMPTY_BODY", "EMPTY_FIST", "EMPTY_MIND", "ENDLESS_AGONY", "ENLIGHTENMENT", "ENTRENCH", "ENVENOM", "EQUILIBRIUM", "ERUPTION", "ESCAPE_PLAN", "ESTABLISHMENT", "EVALUATE", "EVISCERATE", "EVOLVE", "EXHUME", "EXPERTISE", "EXPUNGER", "FAME_AND_FORTUNE", "FASTING", "FEAR_NO_EVIL", "FEED", "FEEL_NO_PAIN", "FIEND_FIRE", "FINESSE", "FINISHER", "FIRE_BREATHING", "FISSION", "FLAME_BARRIER", "FLASH_OF_STEEL", "FLECHETTES", "FLEX", "FLURRY_OF_BLOWS", "FLYING_KNEE", "FLYING_SLEEVES", "FOLLOW_UP", "FOOTWORK", "FORCE_FIELD", "FOREIGN_INFLUENCE", "FORESIGHT", "FORETHOUGHT", "FTL", "FUSION", "GENETIC_ALGORITHM", "GHOSTLY_ARMOR", "GLACIER", "GLASS_KNIFE", "GOOD_INSTINCTS", "GO_FOR_THE_EYES", "GRAND_FINALE", "HALT", "HAND_OF_GREED", "HAVOC", "HEADBUTT", "HEATSINKS", "HEAVY_BLADE", "HEEL_HOOK", "HELLO_WORLD", "HEMOKINESIS", "HOLOGRAM", "HYPERBEAM", "IMMOLATE", "IMPATIENCE", "IMPERVIOUS", "INDIGNATION", "INFERNAL_BLADE", "INFINITE_BLADES", "INFLAME", "INJURY", "INNER_PEACE", "INSIGHT", "INTIMIDATE", "IRON_WAVE", "JAX", "JACK_OF_ALL_TRADES", "JUDGMENT", "JUGGERNAUT", "JUST_LUCKY", "LEAP", "LEG_SWEEP", "LESSON_LEARNED", "LIKE_WATER", "LIMIT_BREAK", "LIVE_FOREVER", "LOOP", "MACHINE_LEARNING", "MADNESS", "MAGNETISM", "MALAISE", "MASTERFUL_STAB", "MASTER_OF_STRATEGY", "MASTER_REALITY", "MAYHEM", "MEDITATE", "MELTER", "MENTAL_FORTRESS", "METALLICIZE", "METAMORPHOSIS", "METEOR_STRIKE", "MIND_BLAST", "MIRACLE", "MULTI_CAST", "NECRONOMICURSE", "NEUTRALIZE", "NIGHTMARE", "NIRVANA", "NORMALITY", "NOXIOUS_FUMES", "OFFERING", "OMEGA", "OMNISCIENCE", "OUTMANEUVER", "OVERCLOCK", "PAIN", "PANACEA", "PANACHE", "PANIC_BUTTON", "PARASITE", "PERFECTED_STRIKE", "PERSEVERANCE", "PHANTASMAL_KILLER", "PIERCING_WAIL", "POISONED_STAB", "POMMEL_STRIKE", "POWER_THROUGH", "PRAY", "PREDATOR", "PREPARED", "PRESSURE_POINTS", "PRIDE", "PROSTRATE", "PROTECT", "PUMMEL", "PURITY", "QUICK_SLASH", "RAGE", "RAGNAROK", "RAINBOW", "RAMPAGE", "REACH_HEAVEN", "REAPER", "REBOOT", "REBOUND", "RECKLESS_CHARGE", "RECURSION", "RECYCLE", "REFLEX", "REGRET", "REINFORCED_BODY", "REPROGRAM", "RIDDLE_WITH_HOLES", "RIP_AND_TEAR", "RITUAL_DAGGER", "RUPTURE", "RUSHDOWN", "SADISTIC_NATURE", "SAFETY", "SANCTITY", "SANDS_OF_TIME", "SASH_WHIP", "SCRAPE", "SCRAWL", "SEARING_BLOW", "SECOND_WIND", "SECRET_TECHNIQUE", "SECRET_WEAPON", "SEEING_RED", "SEEK", "SELF_REPAIR", "SENTINEL", "SETUP", "SEVER_SOUL", "SHAME", "SHIV", "SHOCKWAVE", "SHRUG_IT_OFF", "SIGNATURE_MOVE", "SIMMERING_FURY", "SKEWER", "SKIM", "SLICE", "SLIMED", "SMITE", "SNEAKY_STRIKE", "SPIRIT_SHIELD", "SPOT_WEAKNESS", "STACK", "STATIC_DISCHARGE", "STEAM_BARRIER", "STORM", "STORM_OF_STEEL", "STREAMLINE", "STRIKE_BLUE", "STRIKE_GREEN", "STRIKE_PURPLE", "STRIKE_RED", "STUDY", "SUCKER_PUNCH", "SUNDER", "SURVIVOR", "SWEEPING_BEAM", "SWIFT_STRIKE", "SWIVEL", "SWORD_BOOMERANG", "TACTICIAN", "TALK_TO_THE_HAND", "TANTRUM", "TEMPEST", "TERROR", "THE_BOMB", "THINKING_AHEAD", "THIRD_EYE", "THROUGH_VIOLENCE", "THUNDERCLAP", "THUNDER_STRIKE", "TOOLS_OF_THE_TRADE", "TRANQUILITY", "TRANSMUTATION", "TRIP", "TRUE_GRIT", "TURBO", "TWIN_STRIKE", "UNLOAD", "UPPERCUT", "VAULT", "VIGILANCE", "VIOLENCE", "VOID", "WALLOP", "WARCRY", "WAVE_OF_THE_HAND", "WEAVE", "WELL_LAID_PLANS", "WHEEL_KICK", "WHIRLWIND", "WHITE_NOISE", "WILD_STRIKE", "WINDMILL_STRIKE", "WISH", "WORSHIP", "WOUND", "WRAITH_FORM", "WREATH_OF_FLAME", "WRITHE", "ZAP", };
    static constexpr const char* cardNames[] = { "INVALID","Accuracy","Acrobatics","Adrenaline","After Image","Aggregate","Alchemize","All for One","All-Out Attack","Alpha","Amplify","Anger","Apotheosis","Apparition","Armaments","Ascender's Bane","Auto-Shields","A Thousand Cuts","Backflip","Backstab","Ball Lightning","Bandage Up","Bane","Barrage","Barricade","Bash","Battle Hymn","Battle Trance","Beam Cell","Become Almighty","Berserk","Beta","Biased Cognition","Bite","Blade Dance","Blasphemy","Blind","Blizzard","Bloodletting","Blood for Blood","Bludgeon","Blur","Body Slam","Boot Sequence","Bouncing Flask","Bowling Bash","Brilliance","Brutality","Buffer","Bullet Time","Bullseye","Burn","Burning Pact","Burst","Calculated Gamble","Caltrops","Capacitor","Carnage","Carve Reality","Catalyst","Chaos","Charge Battery","Chill","Choke","Chrysalis","Clash","Claw","Cleave","Cloak and Dagger","Clothesline","Clumsy","Cold Snap","Collect","Combust","Compile Driver","Concentrate","Conclude","Conjure Blade","Consecrate","Consume","Coolheaded","Core Surge","Corpse Explosion","Corruption","Creative AI","Crescendo","Crippling Cloud","Crush Joints","Curse of the Bell","Cut Through Fate","Dagger Spray","Dagger Throw","Darkness","Dark Embrace","Dark Shackles","Dash","Dazed","Deadly Poison","Decay","Deceive Reality","Deep Breath","Defend","Defend","Defend","Defend","Deflect","Defragment","Demon Form","Deus Ex Machina","Deva Form","Devotion","Die Die Die","Disarm","Discovery","Distraction","Dodge and Roll","Doom and Gloom","Doppelganger","Double Energy","Double Tap","Doubt","Dramatic Entrance","Dropkick","Dualcast","Dual Wield","Echo Form","Electrodynamics","Empty Body","Empty Fist","Empty Mind","Endless Agony","Enlightenment","Entrench","Envenom","Equilibrium","Eruption","Escape Plan","Establishment","Evaluate","Eviscerate","Evolve","Exhume","Expertise","Expunger","Fame and Fortune","Fasting","Fear No Evil","Feed","Feel No Pain","Fiend Fire","Finesse","Finisher","Fire Breathing","Fission","Flame Barrier","Flash of Steel","Flechettes","Flex","Flurry of Blows","Flying Knee","Flying Sleeves","Follow-Up","Footwork","Force Field","Foreign Influence","Foresight","Forethought","FTL","Fusion","Genetic Algorithm","Ghostly Armor","Glacier","Glass Knife","Good Instincts","Go for the Eyes","Grand Finale","Halt","Hand of Greed","Havoc","Headbutt","Heatsinks","Heavy Blade","Heel Hook","Hello World","Hemokinesis","Hologram","Hyperbeam","Immolate","Impatience","Impervious","Indignation","Infernal Blade","Infinite Blades","Inflame","Injury","Inner Peace","Insight","Intimidate","Iron Wave","J.A.X.","Jack of All Trades","Judgment","Juggernaut","Just Lucky","Leap","Leg Sweep","Lesson Learned","Like Water","Limit Break","Live Forever","Loop","Machine Learning","Madness","Magnetism","Malaise","Masterful Stab","Master of Strategy","Master Reality","Mayhem","Meditate","Melter","Mental Fortress","Metallicize","Metamorphosis","Meteor Strike","Mind Blast","Miracle","Multi-Cast","Necronomicurse","Neutralize","Nightmare","Nirvana","Normality","Noxious Fumes","Offering","Omega","Omniscience","Outmaneuver","Overclock","Pain","Panacea","Panache","Panic Button","Parasite","Perfected Strike","Perseverance","Phantasmal Killer","Piercing Wail","Poisoned Stab","Pommel Strike","Power Through","Pray","Predator","Prepared","Pressure Points","Pride","Prostrate","Protect","Pummel","Purity","Quick Slash","Rage","Ragnarok","Rainbow","Rampage","Reach Heaven","Reaper","Reboot","Rebound","Reckless Charge","Recursion","Recycle","Reflex","Regret","Reinforced Body","Reprogram","Riddle with Holes","Rip and Tear","Ritual Dagger","Rupture","Rushdown","Sadistic Nature","Safety","Sanctity","Sands of Time","Sash Whip","Scrape","Scrawl","Searing Blow","Second Wind","Secret Technique","Secret Weapon","Seeing Red","Seek","Self Repair","Sentinel","Setup","Sever Soul","Shame","Shiv","Shockwave","Shrug It Off","Signature Move","Simmering Fury","Skewer","Skim","Slice","Slimed","Smite","Sneaky Strike","Spirit Shield","Spot Weakness","Stack","Static Discharge","Steam Barrier","Storm","Storm of Steel","Streamline","Strike","Strike","Strike","Strike","Study","Sucker Punch","Sunder","Survivor","Sweeping Beam","Swift Strike","Swivel","Sword Boomerang","Tactician","Talk to the Hand","Tantrum","Tempest","Terror","The Bomb","Thinking Ahead","Third Eye","Through Violence","Thunderclap","Thunder Strike","Tools of the Trade","Tranquility","Transmutation","Trip","True Grit","TURBO","Twin Strike","Unload","Uppercut","Vault","Vigilance","Violence","Void","Wallop","Warcry","Wave of the Hand","Weave","Well-Laid Plans","Wheel Kick","Whirlwind","White Noise","Wild Strike","Windmill Strike","Wish","Worship","Wound","Wraith Form","Wreath of Flame","Writhe","Zap", };

    static const char* getCardName(const CardId& id) {
        return cardNames[static_cast<int>(id)];
    }

    static constexpr bool isCardInnate(CardId id, bool upgraded=false) {
        switch (id) {
            case CardId::BACKSTAB:
            case CardId::BOOT_SEQUENCE:
            case CardId::DRAMATIC_ENTRANCE:
            case CardId::MIND_BLAST:
            case CardId::WRITHE:
                return true;

            case CardId::BRUTALITY:
            case CardId::INFINITE_BLADES:
            case CardId::AFTER_IMAGE:
            case CardId::CHILL:
            case CardId::HELLO_WORLD:
            case CardId::STORM:
            case CardId::MACHINE_LEARNING:
            case CardId::BATTLE_HYMN:
            case CardId::ALPHA:
            case CardId::ESTABLISHMENT:
                return upgraded;

            default:
                return false;
        }
    }

    static constexpr int getEnergyCost(CardId id, bool upgraded) {
        switch (id) {
            case CardId::ANGER:
            case CardId::BACKSTAB:
            case CardId::BANDAGE_UP:
            case CardId::BATTLE_TRANCE:
            case CardId::BERSERK:
            case CardId::BLIND:
            case CardId::BLOODLETTING:
            case CardId::BRUTALITY:
            case CardId::CLASH:
            case CardId::DARK_SHACKLES:
            case CardId::DEEP_BREATH:
            case CardId::DRAMATIC_ENTRANCE:
            case CardId::ENLIGHTENMENT:
            case CardId::FINESSE:
            case CardId::FLASH_OF_STEEL:
            case CardId::FLEX:
            case CardId::FORETHOUGHT:
            case CardId::GOOD_INSTINCTS:
            case CardId::IMPATIENCE:
            case CardId::INSIGHT:
            case CardId::INTIMIDATE:
            case CardId::JACK_OF_ALL_TRADES:
            case CardId::JAX:
            case CardId::MASTER_OF_STRATEGY:
            case CardId::MIRACLE:
            case CardId::OFFERING:
            case CardId::PANACEA:
            case CardId::PANACHE:
            case CardId::PANIC_BUTTON:
            case CardId::PURITY:
            case CardId::RECKLESS_CHARGE:
            case CardId::SADISTIC_NATURE:
            case CardId::SECRET_TECHNIQUE:
            case CardId::SECRET_WEAPON:
            case CardId::SWIFT_STRIKE:
            case CardId::THINKING_AHEAD:
            case CardId::VIOLENCE:
            case CardId::WARCRY:
                return 0;

            case CardId::DEFEND_BLUE:
            case CardId::DEFEND_GREEN:
            case CardId::DEFEND_PURPLE:
            case CardId::DEFEND_RED:
            case CardId::DOUBLE_TAP:
            case CardId::STRIKE_BLUE:
            case CardId::STRIKE_GREEN:
            case CardId::STRIKE_PURPLE:
            case CardId::STRIKE_RED:
            case CardId::SWORD_BOOMERANG:
            case CardId::TRIP:
            case CardId::TRUE_GRIT:
            case CardId::WILD_STRIKE:
                return 1;

            case CardId::BASH:
            case CardId::BETA:
            case CardId::CARNAGE:
            case CardId::CHRYSALIS:
            case CardId::CLOTHESLINE:
            case CardId::FIEND_FIRE:
            case CardId::FLAME_BARRIER:
            case CardId::HAND_OF_GREED:
            case CardId::HEAVY_BLADE:
            case CardId::IMMOLATE:
            case CardId::IMPERVIOUS:
            case CardId::JUGGERNAUT:
            case CardId::METAMORPHOSIS:
            case CardId::PERFECTED_STRIKE:
            case CardId::REAPER:
            case CardId::SHOCKWAVE:
            case CardId::THE_BOMB:
            case CardId::UPPERCUT:
            case CardId::SEARING_BLOW:
            case CardId::SEVER_SOUL:
                return 2;

            case CardId::BARRICADE:
            case CardId::CORRUPTION:
                return upgraded ? 2 : 3;

            case CardId::BLUDGEON:
            case CardId::OMEGA:
            case CardId::WRAITH_FORM:
            case CardId::DEMON_FORM:
                return 3;

            case CardId::BLOOD_FOR_BLOOD:
                return upgraded ? 3 : 4;

            case CardId::APOTHEOSIS:
            case CardId::MAGNETISM:
            case CardId::MAYHEM:
            case CardId::MIND_BLAST:
            case CardId::DARK_EMBRACE:
                return upgraded ? 1 : 2;

            case CardId::HAVOC:
            case CardId::SEEING_RED:
            case CardId::BODY_SLAM:
            case CardId::EXHUME:
            case CardId::MADNESS:
                return upgraded ? 0 : 1;


            case CardId::WHIRLWIND:
            case CardId::TRANSMUTATION:
            case CardId::MALAISE:
            case CardId::MULTI_CAST:
            case CardId::REINFORCED_BODY:
                return -1;

            case CardId::BURN:
            case CardId::DAZED:
            case CardId::VOID:
            case CardId::WOUND:
                return -2;

            case CardId::ASCENDERS_BANE:
            case CardId::CLUMSY:
            case CardId::DECAY:
            case CardId::DOUBT:
            case CardId::INJURY:
            case CardId::NORMALITY:
            case CardId::PAIN:
            case CardId::PARASITE:
            case CardId::REGRET:
            case CardId::SHAME:
            case CardId::WRITHE:
            case CardId::NECRONOMICURSE:
            case CardId::CURSE_OF_THE_BELL:
                return -3;


            default:
                return 1;
        }
    }
}

#endif //COMBAT_STS_CARDS_H
