#include <ncurses.h>
#include <string>
#include <vector>
//#include "LMenuItem.h"
#define MAX_STRING_LEN 80
#ifndef LMENU_H
#define LMENU_H

using namespace std; 

class LMenu
{
	private:

		int x;				// left side coordinate
		int y;				// top side coordinate

		int length;			// horizontal length 
		int height;			// vertical height

		string title;		// title of menu

		int itemCount;		// number of menu items
//		vector<LMenuItem> items;
		int selecetedItem;	// index of selected item

		int isSelected;		// 0 or 1, boolean for whether key presses work or not

		LMenu *right;		// to be selected with left arrow
		LMenu *left;		// to be selected with right arrow


	public:

		LMenu();
		LMenu(int x_coord, int y_coord, int len, int h, string t, int iCount, LMenu *r, LMenu *l);
		void setVals(int x_coord, int y_coord, int len, int h, string t, int iCount, LMenu *r, LMenu *l);
		void updateMenu();
		void enable();
		void disable();
};
#endif