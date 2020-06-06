int i,j[100],z;
int ft_atoi(char *str){
        for(i=0;str[i]!='\0';i++){j[i]=(str[i]-48);z=z+j[i];z=z*10;}
		z=z/10;
		return z;
}
