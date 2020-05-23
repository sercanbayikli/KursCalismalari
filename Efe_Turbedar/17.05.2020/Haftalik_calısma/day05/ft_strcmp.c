int ft_strcmp(char *s1, char *s2);
int main(){
	char *a,*b;
	a="onbir";
	b="onbir";
	return (ft_strcmp(a,b));
}
int ft_strcmp(char *s1, char *s2){
	if(s1==s2){return 0;}
	if(s1[0]<s2[0]){return -1;}
	 if(s1[0]>s2[0]){return 1;}

}
