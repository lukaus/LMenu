// Luke Stanley

#include <ncurses.h>
#include <string>
#include "LMenu.h"

#ifndef LMENUITEM_H
#define LMENUITEM_H
using namespace std;

class LMenuItem
{
	private:
		string text;
		LMenu *within;
	public:
		LMenuItem(LMenu *w, string t, void (*invoke_func)());
		void (*invoke)();
};
#endif