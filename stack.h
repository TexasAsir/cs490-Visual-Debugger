struct varble{
	char * name;
	char * type;
	double value;
};
struct function{
	int startpoint;
	int numargs;
	char *type;
	char *name;
};
struct sstruct{
	char * name;
	char * type;
	varble *var;
};
union stack{
	varble var;
	sstruct st;
};

struct frame{
	stack * sstack;
};
struct cstack{
	function **funcs;
	int funcmax ;
	int funcount;
	frame **fframe;
	int stacksize;
	int maxsize;
	cstack();
	void push(frame *aframe);
	void pop();
	frame * getframe(int i);
	static cstack thiscstack;
};