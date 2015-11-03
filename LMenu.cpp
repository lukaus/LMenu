// Luke Stanley


#include <ncurses.h>
#include <string>
#include "LMenu.h"
#include <vector>

using namespace std;

LMenu::LMenu()
{
	setVals(0, 0, 0, 0, "null", 0, NULL, NULL);	
}

LMenu::LMenu(int x_coord, int y_coord, int len, int h, string t, int iCount, LMenu *r, LMenu *l)
{
	setVals(x_coord, y_coord, len, h, t, iCount, r, l);	
}

void LMenu::setVals(int x_coord, int y_coord, int len, int h, string t, int iCount, LMenu *r, LMenu *l)
{
	x = x_coord;
	y = y_coord;
	length = len;
	height = h;
	title = t;
	itemCount = iCount;
	selecetedItem = 0;
	isSelected = 0;
	left = r;
	right = l;
}

void LMenu::disable()
{
	isSelected = FALSE;
}

void LMenu::enable()
{
	isSelected = TRUE;
}

void LMenu::updateMenu()
{

}