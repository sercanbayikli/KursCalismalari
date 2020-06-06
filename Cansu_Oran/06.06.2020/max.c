
void ft_putnbr(int nb);
int		max(int* tab, unsigned int len);
int ft_atoi(char *c);
int main(int argc,char *argv[]){
int tab[]={40,30,9,12000,1,567};
max(tab,6);
}


int max(int* tab, unsigned int len){
int a=1;
int enbuyuk=tab[0];
while(a<6){
if(tab[a]>enbuyuk){
enbuyuk=tab[a];
}


a++;
}
ft_putnbr(enbuyuk);
}
