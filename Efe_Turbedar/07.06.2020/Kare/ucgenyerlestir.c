#include <stdio.h>
int i, j = 0, k = 0, l[50][50], a, aa = 0, fod, fodd, res = 0, ress = 0, increase = 1, found = 0;
char b[50][50], c[50], alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", truth = 'n';
int main() {
  FILE *fptr = fopen("olusansekil.txt", "r");
  FILE *fptrw = fopen("ucgenlenmissekil.txt", "w");
  while (j < 10) {
    fscanf(fptr, "%[^\n]", c);
    for (i = 0; c[i] != '\0'; i++) {
      b[j][i] = c[i];
    }
    j++;
    fscanf(fptr, "\n");
  }
  for (i = 0; b[i][0] != '\0'; i++) {
    for (j = 0; b[i][j] != '\0'; j++) { //printf("Coulmn-%d,Line-%d\n",i,j);
      if (b[i][j] == '_') {
        aa = 1; //printf("Empty space-%d\n",aa);
      }
      if (aa >= 1) { //printf("Looking if TRIANGLE\n");
        for (a = 1; a < aa + increase; a++) {
          for (k = 0; k < aa + increase; k++) { //printf("Looking at col-%d,Looking at line-%d,looking for TRIANGLE size-%d\n",a,k,aa);
            if (b[i + a][j + k] != '_') { //printf("No TRIANGLE this size,a--,back 2 if\n");
              while (increase % 3 != 0 || (increase % 5 == 0 && increase >= 10)) { //printf("purge:%d,%d,%d\n",l[k-1][0],l[k-1][1],increase);
                l[k - 1][0] = '\0';
                l[k - 1][1] = '\0';
                increase--;
              }
              goto IsntSquare;
            }
            else {// printf("list acceptable TRIANGLE to l[%d],xy(%d,%d)\n",k,i+a,j+k);
              l[k][0] = i + a;
              l[k][1] = j + k;
              increase++;
              if (increase % 3 == 0 || (increase % 5 == 0 && increase >= 10)) { //found++;
                truth = 'y'; //printf("we got one!\n");
              }
            }
          }
        }
      }
IsntSquare://printf("Yo im about to head out\n");
      if (truth == 'n') { //printf("aight\n");
        for (res = 0; l[res][0]; res++) {
          for (ress = 0; l[res][ress]; ress++) {
            l[res][ress] = '\0';
          }
        }
      }
      else {//printf("INCREASE:%d\n",increase);
        found = increase - 1;
        for (ress = 1; ress < increase; ress++) { //printf("PRINT:a))%d,%d\n",ress,res);
          for (res = 0; res < increase - ress ; res++) { //printf("PRINT:b))%d,%d,%d\n",res,l[res][0],l[res][1]);
            b[l[res][0]][l[res][1]] = alpha[found];
            found--;
          }
          l[0][0]--;//printf("PRINT:c))%d,%d,%d\n",res,l[res][0],l[res][1]);
        }
      }
      aa = 0;
      increase = 1;
      truth = 'n';
    }
  }
  for (i = 0; b[i][0] != '\0'; i++) {
    for (j = 0; b[i][j] != '\0'; j++) {
      fprintf(fptrw, "%c", b[i][j]);
    }
    fprintf(fptrw, "\n");
  }//printf("TOTAL FOUND:%d",found);
}
