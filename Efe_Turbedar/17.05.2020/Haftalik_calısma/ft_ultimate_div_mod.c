int main(void) {return 0;}
void  ft_ultimate_div_mod(int *a,int *b){
        int tmpa=*a,tmpb=*b,tmp;
	tmp=tmpa/tmpb;
	a=&tmp;
	tmp=tmpa%tmpb;
	b=&tmp;
}
