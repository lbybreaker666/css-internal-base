#pragma once
#include "../../SDK/Entities/C_CSPlayer.h"

#define COLOR_MENUOUTLINEBIG	Color(25, 25, 25, 255)
#define COLOR_MENUBG	Color(16, 16, 16, 255)
#define COLOR_OUTLINE	Color(0, 0, 0, 255)
class CUtil_MENU
{
public:
	void Render();


};

namespace U { inline CUtil_MENU MENU; }