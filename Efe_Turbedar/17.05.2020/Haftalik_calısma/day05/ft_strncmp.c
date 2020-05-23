int ft_strncmp(char *s1, char *s2,unsigned int n);
int main(){
        char *a,*b;
        a="onbir";
        b="onbir";
        return (ft_strcmp(a,b));
}
int ft_strncmp(char *s1, char *s2,unsigned int n){
        if(s1==s2){return 0;}
        if(s1[0]<s2[0]){return -1;}
         if(s1[0]>s2[0]){return 1;}

}

