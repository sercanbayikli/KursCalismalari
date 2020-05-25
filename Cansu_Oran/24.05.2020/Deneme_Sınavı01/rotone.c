void ft_putchar(char c);

int main(int argc,char *argv[]){
int a=0;
while (argv[1][a]){
if ((argv[1][a] >= 'a' && argv[1][a] <= 'z')|| (argv[1][a] >= 'A' && argv[1][a] <= 'Z')){
	if (argv[1][a] == 'Z') ft_putchar('A');
	else if (argv[1][a] == 'z') ft_putchar('a');
	else ft_putchar(argv[1][a] + 1);
}
else
ft_putchar(argv[1][a]);
a++;
}


}
