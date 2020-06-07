int i,j,z;
int ft_atoi(char *str){
        for(i=0;str[i]!='\0';i++){j=(str[i]-48);z=z+j;z=z*10;}
		z=z/10;
		return z;
}
