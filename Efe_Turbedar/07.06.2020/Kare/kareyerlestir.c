#include <stdio.h>
int i, j = 0, k = 0, l[50][50], a, aa = 0, fod, fodd, res = 0, ress = 0;
char b[50][50], c[50], alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main() {
  FILE *fptr = fopen("olusansekil.txt", "r");
  FILE *fptrw = fopen("karelenmissekil.txt", "w");
  while (j < 10) {
    fscanf(fptr, "%[^\n]", c);
    for (i = 0; c[i] != '\0'; i++) {
      b[j][i] = c[i];
    }
    j++;
    fscanf(fptr, "\n");
  }
  for (i = 0; b[i][0] != '\0'; i++) {
    for (j = 0; b[i][j] != '\0'; j++) { //printf("Coulmn-%d,Line-%d\n",i+1,j+1);
      for (k = j; b[i][k] == '_'; k++) {
        aa++; //printf("Empty spaces-%d\n",aa);
      }
IsSquare:
      if (aa > 1) { //printf("Looking if square\n");
        for (a = 1; a < aa; a++) {
          for (k = 0; k < aa; k++) { //printf("Looking at col-%d,Looking at line-%d,looking for square size-%d\n",a,k,aa);
            if (b[i + a][j + k] != '_') { //printf("No square this size,a--,back 2 if\n");
              aa--;
              goto IsSquare;
            }
            else { //printf("list acceptable square x,y(%d,%d)\n",i+a,j+k);
              l[k][0] = i + a;
              l[k][1] = j + k;
            }
          }
        }
      }
      if (aa <= 1) {
        for (res = 0; l[res][0]; res++) {
          for (ress = 0; l[res][ress]; ress++) {
            l[res][ress] = '\0';
          }
        }
      }
      else {
        fod = (aa * aa) - aa;
        for (ress = 0; ress < aa; ress++) {
          for (res = 0; res < aa; res++) {
            b[l[res][0]][l[res][1]] = alpha[fod];
            fod++;
            l[res][0]--;
          }
          fod = fod - (aa * res);
        }
      }
      aa = 0;
    }
  }
  for (i = 0; b[i][0] != '\0'; i++) {
    for (j = 0; b[i][j] != '\0'; j++) {
      fprintf(fptrw, "%c", b[i][j]);
    }
    fprintf(fptrw, "\n");
  }
}
