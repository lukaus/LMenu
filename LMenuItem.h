class LMenuItem
{
	private:
		char text[MAX_STRING_LEN];
		LMenu *within;
	public:
		LMenuItem(LMenu *w, char *t, void (*invoke_func)());
		void (*invoke)();
};
