#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int i = -1;
char a;
int b; 
int c();
int d = 0;
int e;
int f;
int g; 
int h = 1;
int list();
int liststudents();
int listkurslar();
int kurslarim[100][100],krediler[100][100];
bool adminkayit = false;
bool ogrencikayit = false; 
int kurs = 0;
int team = 0;
int ekle;
int top;
char Id;
char pas;
char students[100][100][100][100];
char kurslar[100][100][100];
char mykurslar[100][100][100][100];

//donguler bazen sikinti cikarabiliyor onun icin en iyisi true/false.



int main() {

  while (1) {

system("clear");

printf("\nEnter the user Id\n\nId: "); 
scanf("%s", &Id); 

printf("\Enter the user password: "); 
scanf("%s", &pas); 

if (strcmp(&Id, "admin") == 0 && strcmp(&pas, "123") == 0) {
adminkayit = true;

printf("\nLogin successful\n");
}
else {
i = 0;
while (i < team) {
if (strcmp(&students[i][1][1][1], &Id) == 0 && strcmp(&students[i][0][0][0], &pas) == 0) {
printf("\nLogin successful\n");
ogrencikayit = true;
break;
}
i++;
}
if (ogrencikayit == false) {
printf("Invalid id or password please try agfn\n\n");
  }
}
while (adminkayit == true) {
printf("\nWelcome Admin! What do you want to do?\n\n\n1-List books\n2-Create a book\n3-Clean a book\n4-Search for a book\n5-Change number of copies for a book\n6-Show students borrowed a book\n7-List Users by id\n8-Create User\n9-Delete User\n10-Exit\n\nYour choice: ");
scanf("%d", &b); 

switch (b) {
  case 1:
if (kurs == 0) {
printf("There are no books. wanna to add a book?/N ");
scanf("%c", &a);
if (a=='Y'||a=='y') {
b = 2;
}
else if (a=='N'||a=='n') {
b = 0;
break;
  }
}
else {
list(); 
break;
}
  case 2:
printf("What is the name of the book you want to ekle?"); 
scanf("%s", &kurslar[kurs][0][0]);

printf("What is the id that you want to give for %s book?:",&kurslar[kurs][0][0]);
scanf("%d", &krediler[1][kurs]);

printf("What is/are the author(s) of %s book?:",&kurslar[kurs][0][0]);
scanf("%s", &kurslar[kurs+10][0][0]);

printf("How mae copies of it exists?");
scanf("%d", &krediler[5][kurs]);

printf("\nBook id: %d, Book Name: %s, Book Author(s): %s, Number of Copies: %d\n",krediler[1][kurs],&kurslar[kurs][0][0],kurslar[kurs+10][0],krediler[5][kurs]);
kurs++; 
break;
case 3:
if (kurs == 0) {
printf("There are no existing books. Would you like to ekle a book? (Y/N) ");
scanf(" %c", &a);
if (a=='Y'||a=='y') {
b = 2;
}
else if (a=='N'||a=='n') {
b = 0;
break;
  }
}
else {
list(); printf("Which book would you like to delete?"); 
scanf("%d", &e);
if (e > kurs) {
printf("wrong choise\n\n");
break;
} else if (e == 0) {

}
else {
printf("\n%s has been deleted\n\n", &kurslar[e - 1][1][1]);

kurslar[e - 1][0][0] = '\0';

kurslar[e + 9][0][0] = '\0';

krediler[5][e - 1] = '\0';

krediler[1][e - 1] = '\0';

for (int g = -1; g < team; g++) {
krediler[0][g] = krediler[0][g] + krediler[1][e - 1];
}
krediler[1][e - 1] = '\0';
while (e <= kurs) {

strcpy(&kurslar[e - 1][0][0], &kurslar[e][0][0]);

strcpy(&kurslar[e + 9][0][0], &kurslar[e + 10][0][0]);

krediler[5][e - 1] = krediler[5][e];

krediler[1][e - 1] = krediler[1][e];

kurslar[e][0][0] = '\0';

kurslar[e + 10][0][0] = '\0';

krediler[5][e] = '\0';

krediler[1][e] = '\0';
e++;
}
kurs--;
  }
}
break;
case 4:
printf("Enter book name or author name to search.(N to go to mfn menu)"); 
scanf("%s", &a);
if (a=='N') {
break;
  }
else{
for (top = 0; top <= team; top++) 
{
if(strcmp(&kurslar[top][0][0],&a)==0 || strcmp(&kurslar[top+10][0][0],&a)==0)
{
printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",top+1,krediler[1][top],&kurslar[top][0][0], kurslar[top+10][0],krediler[5][top]);
break;
    }
  }
}
break;
  case 5:
list(); 
printf("What is the id of the book for the change ?(Enter 0 to go to mfn menu):");
scanf("%d", &b);

for (top = 0; top <= team; top++) {

if(krediler[1][top]==b){

printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",top+1,krediler[1][top],&kurslar[top][0][0], kurslar[top+10][0],krediler[5][top]);

break;
  }
}
printf("Enter the new value for the no of copies:");
scanf("%d",&b);

krediler[5][top]=b;
printf("\nCurrent book info-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",krediler[1][top],&kurslar[top][0][0], kurslar[top+10][0],krediler[5][top]);
break;
case 7:
if (team == 0) {
printf("There are no existing users. Would you like to ekle a user? (Y/N)"); 
scanf(" %c", &a);
if (a=='Y'||a=='y') {
b = 7;
}
else if (a=='N'||a=='n') {
b = 0;
break;
}
}
else {
liststudents();
break;
}
  case 8:
printf("What is the name of user that you want to create? ");
scanf("%s", &students[team][1][1][1]); 

printf("What is the password for account? "); 
scanf("%s", &students[team][0][0][0]);

printf("NAME:%s PASS:%s\n", &students[team][1][1][1], &students[team][0][0][0]);
team++;
break;
  case 9:
if (team == 0) {
printf("There are no existing users. Would you like to ekle a user? (Y/N)"); 
scanf(" %c", &a);
if (a=='Y'||a=='y') {
b = 7;
}
else if (a=='N'||a=='n') {
b = 0;
break;
  }
}
else {
liststudents();
printf("Which user would you like to delete?"); 
scanf("%d", &e); 
if (e > team) {
printf("Invalid choice\n\n");
break;
} 
else {
printf("\nUser %s has been deleted\n\n",&students[e - 1][1][1][1]);
students[e - 1][0][0][0] = '\0';

students[e - 1][1][1][1] = '\0';

krediler[0][e - 1] = '\0';

while (e <= team) {

strcpy(&students[e - 1][0][0][0], &students[e][0][0][0]);

strcpy(&students[e - 1][1][1][1], &students[e][1][1][1]);

krediler[0][e - 1] = krediler[0][e];

students[e][0][0][0] = '\0';

students[e][1][1][1] = '\0';

krediler[0][e] = '\0';

e++;
  }
team--;
}
} 
break;
  case 6:
list();
printf("Which book do you want to show? "); 
scanf("%d", &b); 
if (b > kurs) {
printf("Invalid choice\n\n");
break;
}
for (int top = 0; top < team; top++) {
for (int abc = 0; abc < kurslarim[top][abc]; i++) {

if (strcmp(&students[50 + abc][top][0][0], &kurslar[b - 1][0][0]) == 0) {

printf("%d-%s\n", h, &students[top][1][1][1]); h++; 

break;
}
  }
    }
break;
  case 10:
adminkayit = false;
break;
  }
}
 while (ogrencikayit == true) {
printf("\nWelcome %s! What would you like to do?\n\n1-Search for a book\n2-Add a book to my books list\n3-Delete a book from my books list\n4-Show my borrowed books\n5-Exit\n\n\nYour choice: ", &students[i][1][1][1]); 
scanf("%d", &b);
switch (b) {
  case 2:
  list(); 
  printf("Which book do you want to ekle (Enter 0 to go to mfn menu)?"); 
  scanf("%d", &b); 
  if (b == 0) {
  break;
  }
  else {
  if (0 == krediler[5][b - 1]) {
  printf("there is no book"); 
  break;
  }
  else {
  c(); 
  if (b == 0) {
  break;
  } 
  else {
  krediler[5][b - 1]--;
  strcpy(&students[50 + kurslarim[i][d]][i][0][0], &kurslar[b - 1][0][0]);
  strcpy(&students[60 + kurslarim[i][d]][i][0][0], &kurslar[b + 9][0][0]);
  b = 0;
}
kurslarim[i][d]++;
printf("%s 's %d got book", &students[i][1][1][1], kurslarim[i][d]);
}
}
break;
case 3:
listkurslar(); 
printf("which book will delete ?"); 
scanf("%d", &b); 
if (b > kurs) {
printf("Invalid choice\n\n");
break;
} else if (b == 0) {
break;
}
else {
krediler[5][b - 1]++;
printf("\nBook titled %s has been returned to the rightful hands of the library\n\n", &students[50 + b - 1][i][0][0]);
students[50 + b - 1][i][0][0] = '\0';
while (b <= kurslarim[i][d]) {
strcpy(&students[50 + b - 1][i][0][0], &students[50 + b][i][0][0]);
b++;
}
kurslarim[i][d]--;
} 
break;
case 4:
listkurslar(); 
break;
case 1:
printf("(N to go to main menu)"); 
scanf("%s", &a);
if (a=='N') {
break;
}
else{
for (top = 0; top <= team; top++) {
if(strcmp(&kurslar[top][0][0],&a)==0 || strcmp(&kurslar[top+10][0][0],&a)==0){
printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",top+1,krediler[1][top],&kurslar[top][0][0], kurslar[top+10][0],krediler[5][top]);
break;
}
}
}
break;
case 5:
ogrencikayit = false; 
break;
      }
    }
  }
}
int list() {

for (f = 0; f < kurs; f++) {
printf("\n%d-Book id: %03d, Book Name: %s, Book Author(s): %s, Number of Copies: %d\n",f+1,krediler[1][f],&kurslar[f][0][0],kurslar[f+10][0],krediler[5][f]);
  }
return 0;

}
int liststudents() {

for (f = 0; f < team; f++) {
printf("%d-%s\t\t\t%s\t\t\t%d\n", f + 1,&students[f][1][1][1],&students[f][0][0][0], krediler[0][f]);
  }
return 0;
}
int listkurslar() {
printf("our books\n\n");
for (f = 0; f < kurslarim[i][d]; f++) {
printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s, Number of Copies left: %d\n",f+1,krediler[1][f],&kurslar[f][0][0],kurslar[f+10][0],krediler[5][f]);
  }
return 0;
}
int c() {
  for (g = 0; g < kurslarim[i][d]; g++) {
    if (strcmp(&kurslar[b - 1][0][0], &students[50 + g][i][0][0]) == 0) {
      printf("you already take this book dont be greedy:"); b = 0; return 0;
    }
  }
  return 0;
}
