
/* in_main.c -- intermission */

#include "doomdef.h"
#include "st_main.h"
#include "r_local.h"

extern int nextmap;

#define T_NULL ""

#define MI_TXT01 "Staging Area"
#define MI_TXT02 "The Terraformer"
#define MI_TXT03 "Main Engineering"
#define MI_TXT04 "Holding Area"
#define MI_TXT05 "Tech Center"
#define MI_TXT06 "Alpha Quadrant"
#define MI_TXT07 "Research Lab"
#define MI_TXT08 "Final Outpost"
#define MI_TXT09 "Even Simpler"
#define MI_TXT10 "The Bleeding"
#define MI_TXT11 "Terror Core"
#define MI_TXT12 "Altar of Pain"
#define MI_TXT13 "Dark Citadel"
#define MI_TXT14 "Eye of the Storm"
#define MI_TXT15 "Dark Entries"
#define MI_TXT16 "Blood Keep"
#define MI_TXT17 "Watch Your Step"
#define MI_TXT18 "Spawned Fear"
#define MI_TXT19 "The Spiral"
#define MI_TXT20 "Breakdown"
#define MI_TXT21 "Pitfalls"
#define MI_TXT22 "Burnt Offerings"
#define MI_TXT23 "Unholy Temple"
#define MI_TXT24 "No Escape"
#define MI_TXT25 "Cat And Mouse"
#define MI_TXT26 "HardCore"
#define MI_TXT27 "Playground"
#define MI_TXT28 "The Absolution"
#define MI_TXT29 "Outpost Omega"
#define MI_TXT30 "The Lair"
#define MI_TXT31 "In The Void"
#define MI_TXT32 "Hectic"
#define MI_TXT33 "TITLE"
#define MI_TXT34 "Plant Ops" // Lost levels
#define MI_TXT35 "Evil Sacrifice"
#define MI_TXT36 "Cold Grounds"
#define MI_TXT37 "Wretched Vats"
#define MI_TXT38 "Thy Glory"
#define MI_TXT39 "Final Judgement"
#define MI_TXT40 "Panic"
#define MI_TXT41 "Hangar"
#define MI_TXT42 "Nuclear Plant"
#define MI_TXT43 "Toxin Refinery"
#define MI_TXT44 "Command Control"
#define MI_TXT45 "Phobos Lab"
#define MI_TXT46 "Central Processing"
#define MI_TXT47 "Computer Station"
#define MI_TXT48 "Phobos Anomaly"
#define MI_TXT49 "Military Base"
#define MI_TXT50 "Hexagonal Heat"
#define MI_TXT51 "Wellspring Catacombs"
#define MI_TXT52 "Blood Canyon"
#define MI_TXT53 "Storage Complex"
#define MI_TXT54 "Wretched Passage"
#define MI_TXT55 "Tempestas Labyrinthus"
#define MI_TXT56 "Cursed Corridors"
#define MI_TXT57 "MeatShot"
#define MI_TXT58 "The Blue Castle"
#define MI_TXT59 "Palace of Shadows"
#define MI_TXT60 "Foreboding Pestilence"
#define MI_TXT61 "The Descent"
#define MI_TXT62 "Ubiquitous"
#define MI_TXT63 "Gateway Lab"
#define MI_TXT64 "Far Removed"
#define MI_TXT65 "The Burning Eye"
#define MI_TXT66 "Immorphium Storage"
#define MI_TXT67 "Pain Harvest"
#define MI_TXT68 "Foggy Mountain"
#define MI_TXT69 "Dark Blue Dot"
#define MI_TXT70 "The Gasman Cometh"
#define MI_TXT71 "Twilight Scream"
#define MI_TXT72 "The Vehemence"
#define MI_TXT73 "Emergency Escape"
#define MI_TXT74 "Doomguy Must Die!"
#define MI_TXT75 "Surnevo Bownkread"
#define MI_TXT76 "Let's Play With Mom"
#define MI_TXT77 "Let's Play With Cyberdemons"
#define MI_TXT78 "CyberPac"
#define MI_TXT79 "Forgotten Battlegrounds"

mapinfo_t MapInfo[] = //8005A478
	{ 
		{ T_NULL, 0 }, // map 0!     
		{ MI_TXT01, 96 },
		{ MI_TXT02, 97 },
		{ MI_TXT03, 105 },
		{ MI_TXT04, 104 },
		{ MI_TXT05, 101 },
		{ MI_TXT06, 107 },
		{ MI_TXT07, 108 },
		{ MI_TXT08, 110 },
		{ MI_TXT09, 95 }, 
		{ MI_TXT10, 98 },
		{ MI_TXT11, 99 },
		{ MI_TXT12, 102 },
		{ MI_TXT13, 93 },
		{ MI_TXT14, 106 },
		{ MI_TXT15, 111 },
		{ MI_TXT16, 97 },
		{ MI_TXT17, 103 },
		{ MI_TXT18, 94 },
		{ MI_TXT19, 100 },
		{ MI_TXT20, 112 },
		{ MI_TXT21, 109 },
		{ MI_TXT22, 101 },
		{ MI_TXT23, 108 },
		{ MI_TXT24, 98 },
		{ MI_TXT25, 97 },
		{ MI_TXT26, 98 },
		{ MI_TXT27, 94 },
		{ MI_TXT28, 99 },
		{ MI_TXT29, 101 },
		{ MI_TXT30, 102 },
		{ MI_TXT31, 103 },  //
		{ MI_TXT32, 104 }, //
		{ MI_TXT33, 115 },  //
		{ MI_TXT34, 100 },  //
		{ MI_TXT35, 95 }, //
		{ MI_TXT36, 111 },  //
		{ MI_TXT37, 94 },   //
		{ MI_TXT38, 105 }, //
		{ MI_TXT39, 98 },   //
		{ MI_TXT40, 101 },  //
		{ MI_TXT41, 97 }, //
		{ MI_TXT42, 105 },  //
		{ MI_TXT43, 104 },  //
		{ MI_TXT44, 101 }, //
		{ MI_TXT45, 107 },  //
		{ MI_TXT46, 108 },  //
		{ MI_TXT47, 110 }, //
		{ MI_TXT48, 95 },   //
		{ MI_TXT49, 98 },   //
		{ MI_TXT50, 96 }, // MAP01 "Hexagonal Heat"
		{ MI_TXT51, 97 }, // MAP02 "Wellspring Catacombs"
		{ MI_TXT52, 105 },  // MAP03 "Blood Canyon"
		{ MI_TXT53, 104 },  // MAP04 "Storage Complex"
		{ MI_TXT54, 101 }, // MAP05 "Wretched Passage"
		{ MI_TXT55, 107 },  // MAP06 "Tempestas Labyrinthus"
		{ MI_TXT56, 108 },  // MAP07 "Cursed Corridors"
		{ MI_TXT57, 110 }, // MAP08 "MeatShot"
		{ MI_TXT58, 95 },  // MAP09 "The Blue Castle"
		{ MI_TXT59, 98 }, //	 MAP10 "Palace of Shadows"
		{ MI_TXT60, 99 }, // MAP11 "Foreboding Pestilence"
		{ MI_TXT61, 102 },  // MAP12 "The Descent"
		{ MI_TXT62, 93 },	 // MAP13 "Ubiquitous"
		{ MI_TXT63, 106 }, // MAP14 "Gateway Lab"
		{ MI_TXT64, 111 },  // MAP15 "Far Removed"
		{ MI_TXT65, 97 },	 // MAP16 "The Burning Eye"
		{ MI_TXT66, 103 }, // MAP17 "Immorphium Storage"
		{ MI_TXT67, 94 },   // MAP18 "Pain Harvest"
		{ MI_TXT68, 100 },  // MAP19 "Foggy Mountain"
		{ MI_TXT69, 112 }, // MAP20 "Dark Blue Dot"
		{ MI_TXT70, 109 },  // MAP21 "The Gasman Cometh"
		{ MI_TXT71, 101 },  // MAP22 "Twilight Scream"
		{ MI_TXT72, 108 }, // MAP23 "The Vehemence"
		{ MI_TXT73, 98 },   // MAP24 "Emergency Escape"
		{ MI_TXT74, 97 },	 // MAP25 "Doomguy Must Die!"
		{ MI_TXT75, 98 }, // MAP26 "SurnevoBownkread"
		{ MI_TXT76, 94 },   // MAP27 "Let's Play With Mom"
		{ MI_TXT77, 99 },	 // MAP28 "Let's Play With Cyberdemons"
		{ MI_TXT78, 101 }, // MAP29 "CyberPac"
		{ MI_TXT79, 102 },  // MAP30 "Forgotten Battlegrounds"
		{ T_NULL, 0 } 
	};

typedef struct pstats_s {
	int killpercent;
	int itempercent;
	int secretpercent;
} pstats_t;

float f_killvalue, f_itemvalue, f_secretvalue;
pstats_t pstats; // 800633C4

// used to accelerate or skip a stage
int acceleratestage; // 800633B0
int nextstage; // 800633B4

char timetext[32];
int start_time;
int end_time;
int time_paused;
extern int extra_episodes;

extern void P_FlushAllCached(void);

void IN_Start(void) // 80004AF0
{
	int time;

	memset(timetext, 0, 32);

	P_FlushAllCached();

	f_killvalue = f_itemvalue = f_secretvalue = -1.0f;

	if (totalkills)
		pstats.killpercent = (players[0].killcount * 100) / totalkills;
	else
		pstats.killpercent = 100;

	if (totalitems)
		pstats.itempercent = (players[0].itemcount * 100) / totalitems;
	else
		pstats.itempercent = 100;

	if (totalsecret)
		pstats.secretpercent =
			(players[0].secretcount * 100) / totalsecret;
	else
		pstats.secretpercent = 100;

	time = (unsigned int)(end_time - start_time - time_paused);

	if ((time / 60) < 60)
		sprintf(timetext, "%2.2d:%2.2d", (time / 60), (time % 60));
	else
		memcpy(timetext, "--:--", 5);

	nextstage = 0;
	acceleratestage = 0;
	last_ticon = 0;
	text_alpha = 255;

	int last_level;
	if (extra_episodes && startmap >= 41)
		last_level = 50;
	else if (extra_episodes && startmap >= 34 && startmap <= 40)
		last_level = LOST_LASTLEVEL;
	else
		last_level = ABS_LASTLEVEL;

	if ((nextmap >= 2) && (nextmap < last_level)) {
		M_EncodePassword(Passwordbuff);
		CurPasswordSlot = 16;
	}

	S_StartMusic(114);
}

void IN_Stop(int exit) // 80004DB0
{
	(void)exit;
	S_StopMusic();
	int last_level;
	if (extra_episodes && startmap >= 41)
		last_level = 50;
	else if (extra_episodes && startmap >= 34 && startmap <= 40)
		last_level = LOST_LASTLEVEL;
	else
		last_level = ABS_LASTLEVEL;

	if ((nextmap >= 2) && (nextmap < last_level) && !FUNLEVEL(gamemap)) {
		if (UseVMU) {
			in_menu = 1;
			MiniLoop(M_SavePakStart, M_SavePakStop, M_SavePakTicker, M_SavePakDrawer);
			in_menu = 0;
		}
	}

	I_WIPE_FadeOutScreen();
}

int IN_Ticker(void) // 80004E24
{
	static int last_f_gametic = 0;
	boolean state;
	int buttons, oldbuttons;

	buttons = ticbuttons[0] & 0xffff0000;
	oldbuttons = oldticbuttons[0] & 0xffff0000;

	if ((buttons != oldbuttons) && (buttons & (PAD_A | PAD_B | PAD_START | ALL_TRIG | ALL_CBUTTONS))) {
		acceleratestage++;
		if (acceleratestage == 1) {
			f_killvalue = (float)pstats.killpercent;
			f_itemvalue = (float)pstats.itempercent;
			f_secretvalue = (float)pstats.secretpercent;
			nextstage = 5;
			last_ticon = 0;
			S_StartSound(NULL, sfx_explode);
		} else if (acceleratestage >= 2) {
			S_StartSound(NULL, sfx_explode);
			return ga_exit;
		}
	}

	if (last_ticon) {
		if ((ticon - last_ticon) <= 90) // 3 * TICRATE
			return ga_nothing;
	}

	state = false;

	switch (nextstage) {
	case 0:
		S_StartSound(NULL, sfx_explode);
		nextstage = 1;
		break;

	case 1: // kills
		f_killvalue += (4 * f_vblsinframe[0] * 0.5f);
		if (f_killvalue > pstats.killpercent) {
			S_StartSound(NULL, sfx_explode);
			f_killvalue = pstats.killpercent;
			last_ticon = ticon;
			nextstage = 2;
		} else {
			state = true;
		}
		break;

	case 2: // item
		f_itemvalue += (4 * f_vblsinframe[0] * 0.5f);
		if (f_itemvalue > pstats.itempercent) {
			S_StartSound(NULL, sfx_explode);
			f_itemvalue = pstats.itempercent;
			last_ticon = ticon;
			nextstage = 3;
		} else {
			state = true;
		}
		break;

	case 3: // secret
		f_secretvalue += (4 * f_vblsinframe[0] * 0.5f);
		if (f_secretvalue > pstats.secretpercent) {
			S_StartSound(NULL, sfx_explode);
			f_secretvalue = pstats.secretpercent;
			last_ticon = ticon;
			nextstage = 4;
		} else {
			state = true;
		}
		break;

	case 4:
		S_StartSound(NULL, sfx_explode);
		last_ticon = ticon;
		nextstage = 5;
		break;
	}

	if (!state && (acceleratestage == 0)) {
		if (nextstage == 5) {
			acceleratestage = 1;
		}
	}

	if (last_f_gametic != (int)f_gametic) {
		// Play Sound sfx_pistol
		if (!((int)f_gametic & 3) && state) {
			S_StartSound(NULL, sfx_pistol);
		}
		last_f_gametic = (int)f_gametic;
	}

	if (backres[13] != 0xad) {
		I_Error("PVR OOM for SYMBOLS lump texture");
	}

	return ga_nothing;
}

void IN_Drawer(void) // 80005164
{
	int i, c;
	char password[32];
	char *pbuff;

	I_ClearFrame();

	// Fill borders with black
	pvr_set_bg_color(0, 0, 0);
	pvr_fog_table_color(0.0f, 0.0f, 0.0f, 0.0f);
	pvr_fog_table_custom(empty_table);

	M_DrawBackground(EVIL, 128);

	ST_DrawString(-1, 20, MapInfo[gamemap].name, PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);

	ST_DrawString(-1, 36, "Finished", PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);

	if ((nextstage > 0) && (f_killvalue > -1.0f)) {
		ST_DrawString(57, 60, "Kills", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawString(248, 60, "%", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawNumber(210, 60, (int)f_killvalue, 1, PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
	}

	if ((nextstage > 1) && (f_itemvalue > -1.0f)) {
		ST_DrawString(57, 78, "Items", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawString(248, 78, "%", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawNumber(210, 78, (int)f_itemvalue, 1, PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
	}

	if ((nextstage > 2) && (f_secretvalue > -1.0f)) {
		ST_DrawString(57, 99, "Secrets", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawString(248, 99, "%", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawNumber(210, 99, (int)f_secretvalue, 1, PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
	}

	if ((nextstage > 3)) {
		ST_DrawString(57, 120, "Time", PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
		ST_DrawString(210, 120, timetext, PACKRGBA(192, 0, 0, text_alpha), ST_BELOW_OVL);
	}

	int last_level;
	if (extra_episodes && startmap >= 41)
		last_level = 50;
	else if (extra_episodes && startmap >= 34 && startmap <= 40)
		last_level = LOST_LASTLEVEL;
	else
		last_level = ABS_LASTLEVEL;

	if ((nextstage > 4) && FUNLEVEL(nextmap)) {
		; // do nothing
	} else if ((nextstage > 4) && (nextmap < last_level)) {
		ST_DrawString(-1, 145, "Entering", PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);
		ST_DrawString(-1, 161, MapInfo[nextmap].name, PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);
		ST_DrawString(-1, 187, "Password", PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);

		pbuff = password;
		for (i = 0; i < 16; i++) {
			c = i & 3;

			if ((i < 0) && (c != 0))
				c -= 4;

			if (c == 0)
				*pbuff++ = ' ';

			*pbuff++ = passwordChar[Passwordbuff[i]];
		}
		*pbuff = 0;

		ST_DrawString(-1, 203, password, PACKRGBA(255, 255, 255, text_alpha), ST_BELOW_OVL);
	}

	I_DrawFrame();
}

