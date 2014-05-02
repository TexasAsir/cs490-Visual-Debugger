struct varble{
	int ident;//will be zero
	char * name;
	char * type;
	void* value;
};
struct function{
	char * body;
	int numargs;
	char *type;
	char *name;
};
struct sstruct{
	int ident;
	char * name;
	char * label;
	char * type;
	int size;
	varble **var;
};
union stack{
	varble var;
	sstruct st;
};

struct frame{
	stack ** sstack;//array of variables/structs
	int stacksize;
	int maxsize;
	frame * pframe;//previous frame
};
struct cstack{
	function **funcs;
	int funcmax ;
	int funcount;
	frame **fframe;
	frame *curframe;
	int stacksize;
	int maxsize;
	cstack();
	void push(frame *aframe);
	void pop();
	frame * getframe(int i);
	int find(frame * f, char * var);
	int findstruct(frame * f, char * var);
	void pushsstack(stack * s, frame *f);
	void printframe(frame *f);
	static cstack thiscstack;
	int findfunc(char *func);
};
