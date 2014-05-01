int x[5];

struct varble{
	int ident;//will be zero
	char * name;
	char * type;
	void* value;
};

int main(){
	/*int * p;
	
	*p = 5;
	//int x;
	int x[5];
	p = &x;
	p = !x;
	p = -p;
	*p = 5 - *p + &x;
	++x;
	--p;
	p++;
	x--;
	x >= p;
	x != p;
	p = sizeof(10);
	p = sizeof(int);
	p = p.x;
	p = p->x;
	p = (int)x;
	p && x;
	p = 'c';
	int p = 5;
	int d;
	p =5;
	function(15);
	//function(14,13,12,11,10,9,8,7,6,5,4,3,2,1);
	my_func("get fucnky");
	if(x){
		x=5;
		x++;
		int y;
		y=x;	
	}
	else if(x){
		x=10;
	}
	while(1){
		x++;
		y++;
		int x=2;
	}
	do{
		x++;
		y++;
	}while(1);
	for(x=1;x<5;x++){
		x++;
	}
	for(;;){
		x="infinite loop";
	}*/
	//const int j;//TODO fix
	int x[5];
	int j,a;
	while(j<5){
		j=j+1;
	}
	struct varble v;
	v.ident=0;
	int x = 0++;
	int a=j+1;
	
	char c='\n';
	int i;
	for(i = 0; i < 5; i++){
		x++;
	}
	if(i<6){
		i++;
	}
	printf("x = %d %d\n",x,sizeof(const int *));
	scanf("asdf %c\n",&c);
}
