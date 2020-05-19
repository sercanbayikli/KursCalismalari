int i,j,a[]={1,4,3,7,5,9,8,3,10},*b;
void ft_sort_integer_table(int *tab, int size);
void ft_sort_integer_table(int *tab, int size){
        for(i=0;i<size;i++){
                for(j=i;tab[j]<tab[j-1];j--){
                        tab[j-1]=tab[j];
                }
        }
}
int main(){
        b=a;
        ft_sort_integer_table(b,9);
        return 0;
}
