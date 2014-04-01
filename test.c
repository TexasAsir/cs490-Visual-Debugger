int x[5];
int main(){
	int * p;
	
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
}
