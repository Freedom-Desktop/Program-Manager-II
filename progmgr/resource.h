/* * * * * * * *\
	RESOURCE.H -
		Copyright (c) 2023 freedom7341, Freedom Desktop
	DESCRIPTION -
		Program Manager's resource collection.
		** NO DEPENDENCIES **
	LICENSE INFORMATION -
		MIT License, see LICENSE.txt in the root folder
\* * * * * * * */

/* Pragmas */
#pragma once

/* Primary Icon Library */
#define IDI_PROGMGR		1
#define IDI_PROGGRP		2
#define IDI_PROGITM		3

/* Secondary Icon Library */

/* Menus and Commands */
// Context Menus and Accelerators
#define IDM_MAIN					100
#define IDM_ITEM					101
#define IDM_GROUP					102
#define IDA_ACCELS					103
// File, 110-119
#define IDM_FILE					110
#define IDM_FILE_NEW				111
#define IDM_FILE_OPEN				112
#define IDM_FILE_MOVE				113
#define IDM_FILE_COPY				114
#define IDM_FILE_DELETE				115
#define IDM_FILE_PROPS				116
#define IDM_FILE_RUN				117
#define IDM_FILE_EXIT				118
// Options, 130-149
#define IDM_OPTIONS					130
#define IDM_OPTIONS_AUTOARRANGE		131
#define IDM_OPTIONS_MINONRUN		132
#define IDM_OPTIONS_SAVESETTINGS	133
#define IDM_OPTIONS_SAVENOW			134
// Window, 150-169, 200-999
#define IDM_WINDOW					150
#define IDM_WINDOW_CASCADE			151
#define IDM_WINDOW_TILE				152
#define IDM_WINDOW_TILEHORIZONTALLY	153
#define IDM_WINDOW_ARRANGEICONS		154
#define IDM_WINDOW_CHILDSTART		200
// Help, 170-179
#define IDM_HELP					170
#define IDM_HELP_INDEX				171
#define IDM_HELP_ABOUT				172
// Miscellaneous, 180-199
#define IDM_SHUTDOWN				180
#define IDM_TASKMGR					181

/* String Table */
#define IDS_APPTITLE			1
#define IDS_PMCLASS				2
#define IDS_WEBSITE				3
#define IDS_RUN					4
#define IDS_TASKMGR				5
#define IDS_EXIT				6
#define IDS_SHUTDOWN			7
