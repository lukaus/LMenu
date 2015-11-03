// Luke Stanley


#include <ncurses.h>
#include <string.h>
#include "LMenu.h"


void LMenu::setVals(int x_coord, int y_coord, int len, int h, char *t, int iCount, LMenu *r, LMenu *l)
{
	x = x_coord;
	y = y_coord;
	length = len;
	height = h;
	title = *t;
	itemCount = iCount;
	selecetedItem = 0;
	isSelected = 0;
	left = r;
	right = l;
}



LMenu::LMenu()
{
	LMenu newMenu;
	newMenu.setVals = &setVals_func;

	char temp[80];

	newMenu.setVals(0, 0, 0, 0, &temp, 0, void, void);
	
	newMenu.disable = &disable_func;
	newMenu.updateMenu = &updateMenu_func;
	newMenu.enable = &enable_func;

	return &newMenu;
}

LMenu::LMenu(int x_coord, int y_coord, int len, int h, char *t, int iCount, LMenu *r, LMenu *l)
{
	LMenu newMenu;
	newMenu.setVals = &setVals_func;

	newMenu.setVals(x_coord, y_coord, len, h, t, iCount, r, l);	

	newMenu.disable = &disable_func;
	newMenu.updateMenu = &updateMenu_func;
	newMenu.enable = &enable_func;

	return &newMenu;

}

void LMenu::disable_func()
{
	isSelected = FALSE;
}

void LMenu::enable_func()
{
	isSelected = TRUE;
}

void LMenu::updateMenu_func()
{

}