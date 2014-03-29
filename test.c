int main(){
	int * p;
	*p = 5;
	int x;
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
}
