#include "stack.h"

class executeStatement{
	public:
		executeStatement(char * statement);
		void setStatement(char * statement);
		void * execute();
	private:
		char * statement;
		void * addfun(void * l, void* r) ;
		void * mulfun(void * l, void* r) ;
		void * divfun(void * l, void* r) ;
		void * subfun(void * l, void* r) ;
		void * modfun(void * l, void* r) ;
		void * andfun(void * l, void* r) ;
		void * orfun(void * l, void* r) ;
		void * lessfun(void * l, void* r) ;
		void * gtfun(void * l, void* r) ;
		void * gefun(void * l, void* r) ;
		void * lefun(void * l, void* r) ;
		void * eqfun(void * l, void* r) ;
		void * neqfun(void * l, void* r) ;
		void * unfun(void * l) ;
		void * plusfun(void * l) ;
		void * minusfun(void * l) ;
		void * castfun(void * l) ;
		void * sizefun(void * l) ;
		void * sizetfun(void * l) ;
		void * ppfun(void * l) ;
		void * mmfun(void * l) ;
		void * arrowfun(void * l, void* r) ;
		void * indexfun(void * l, void* r) ;
		void * dotfun(void * l, void* r) ;	 
		void * indexdfun(void * l, void* r) ;
		void * callfun(void * l, void* r) ;		 
		void * argfun(void * l, void* r) ;		 
		void * structfun(void * l, void* r) ;		 
		void * structvfun(void * l, void* r) ;		 
		void * dblfun(void * l) ;		 
		void * intfun(void * l) ;		 
		void * ifun(void * l) ;		 
		void * voidfun(void * l) ;		 
		void * funword(void * l) ;		 
		void * assfun(void * l, void* r) ;		 
		void * dassfun(void * l, void* r) ;		 
		void * decfun(void * l, void* r) ;		 
		void * dofun(void * l, void* r) ;		 
		void * iffun(void * l, void* r) ;		 
		void * allkindsoffun(void * l, void* r) ;
};
