#include <stdio.h> 
#include <string.h> 

char b[3];
void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void permute(char *a, int l, int r) 
{ 
int i; 
if (l == r){ 
	FILE *file = fopen("komb.txt","a");
  strcpy(b,a);
  fprintf(file,"%s\n", b);
}
else
{ 
	for (i = l; i <= r; i++) 
	{ 
		swap((a+l), (a+i)); 
		permute(a, l+1, r); 
		swap((a+l), (a+i));
	} 
} 
} 
int main() 
{ 
  FILE *file = fopen("komb.txt","w");
  fclose(file);
	char str[] = "abc"; 
	int n = strlen(str); 
	permute(str, 0, n-1); 
  fclose(file);
	return 0; 
}
