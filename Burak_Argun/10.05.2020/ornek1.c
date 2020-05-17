#include <stdio.h>
#include <string.h>
int menu, ID, kisibul(), nufus = 5,derssayisi=0,kisisayisi=0,createbook(),booklist(),deletebook(),del,createuser(),userlist(),deleteuser(),budgetmenuchoice,sel,studentmoneyadd,numberofcopies(),studentmoneysubtract,userbudgetmenu(),borrowbook(),showmybooks(),deletemybook(),showstudents(),i,j;
char username, password;
char bookname[100][100];
char bookcopy[100][100];
char authorname[100][100];
char studentname[100][100];
char studentpassword[100][100];
int studentbudget[100][100];
char userbooks[100][100];

int main(void) {
  while (1) {
    kisibul();
      while (ID == 2) {
        printf("\nWelcome Admin! What do you want to do?\n\n\n1-List books\n2-Add a book\n3-Delete a book\n4-Search for a book\n5-Change number of copies of book by id\n6-Show students borrowed a book by id\n7-List Users by id\n8-Create User\n9-Delete User\n10-Exit\nYour choice: ");
        scanf("%d", &menu);
        switch (menu) {
          case 1:
          booklist();
            break;
          case 2: 
           createbook(); 
            break;
          case 3:
           deletebook();
            break;
          case 4:
           showstudents();
            break;
          case 5:
           numberofcopies();
            break;
          case 6:
           showstudents();
            break;
          case 7:
           userlist();
            break;
          case 8:
           createuser();
            break;
          case 9: 
           deleteuser();
            break;
          case 10: ID=1;
            break;
        }
      }
        while (ID == 0) {
          printf("\nWelcome student! What would you like to do?\n\n1-Search for a book\n2-Add books to my library\n3-Delete a book from my books list\n4-Show my borrowed books\n5-Exit\n\n\nYour choice: "); scanf("%d", &menu);
          switch (menu) {
            case 1:
             
              break;
            case 2:
             borrowbook();
              break;
            case 3:
             deletemybook();
              break;
            case 4:
             showmybooks();
              break;
            case 5: ID=1;
              break;
          }
        }
}
}
int createbook(){
printf("\nEnter book name:\n");
 scanf("%s" , &bookname[derssayisi][0]);
printf("Enter number of copies:\n");
 scanf("%s" , &bookcopy[derssayisi][0]);
printf("Enter enter author name:\n");
 scanf("%s" , &authorname[derssayisi][0]);
printf("%s - %s copies author: %s\n", &bookname[derssayisi][0], &bookcopy[derssayisi][0], &authorname[derssayisi][0]);
 derssayisi++;
 return 0;
}
int booklist(){
  for(int i=0; i<derssayisi; i++){
    printf("%d Book: %s (%s copies) author: %s\n",i+1, &bookname[i][0], &bookcopy[i][0],  &authorname[i][0]);
}
return 0;
}
int deletebook(){
  booklist();
  printf("Which book do you want to delete?");
  scanf("%d", &del);
    del--;
    bookname[del][0] = '\0'; 
    bookcopy[del][0] = '\0';
  for(int i=0; i<derssayisi; i++){
    strcpy( &bookname[i][0], &bookname[i+1][0]);
     bookname[i+1][0] = '\0'; 
    strcpy( &bookcopy[i][0], &bookcopy[i+1][0]);
     bookcopy[i+1][0] = '\0'; 
  }
  printf("Book has been deleted\n");
  derssayisi--;
  return 0;
  }
int createuser(){
printf("\nEnter username:\n");
 scanf("%s" , &studentname[kisisayisi][0]);
printf("Enter password:\n");
 scanf("%s" , &studentpassword[kisisayisi][0]);
printf("User:%s  (password %s) has been created\n", &studentname[kisisayisi][0], &studentpassword[kisisayisi][0]);
 kisisayisi++;
 return 0;
}
int userlist(){
  for(int i=0; i<kisisayisi; i++){
    printf("%d User: %s (password %s)\n",i+1, &studentname[i][0], &studentpassword[i][0]);
}
return 0;
}
int deleteuser(){
  userlist();
  printf("Which user do you want to delete?");
  scanf("%d", &del);
    del--;
    studentname[del][0] = '\0'; 
    studentpassword[del][0] = '\0';
    studentbudget[del][0] = '\0';
  for(int i=0; i<kisisayisi; i++){
    strcpy( &studentname[i][0], &studentname[i+1][0]);
     studentname[i+1][0] = '\0'; 
    strcpy( &studentpassword[i][0], &studentpassword[i+1][0]);
     studentpassword[i+1][0] = '\0'; 
  }
  printf("user has been deleted\n");
  kisisayisi--;
  return 0;
  }
  
  int numberofcopies(){
  booklist();
  printf("Select book");
  scanf("%d", &sel);
  sel--;
  printf("What do you want to do?\n1-Add more copies of this book to the library\n2-Remove copies of this book\n3-Exit to admin menu");
  scanf("%d", &budgetmenuchoice);
  switch (budgetmenuchoice){
    case 1: printf("How many copies do you want to add?\n");
    scanf("%d" , &studentmoneyadd);
    bookcopy[sel][0]=bookcopy[sel][0]+studentmoneyadd;
    printf("New copy quantity: %d\n", bookcopy[sel][0]);
    break;
 
    case 2: printf("How many copies do you want to remove?\n");
    scanf("%d" , &studentmoneysubtract);
    bookcopy[sel][0]=bookcopy[sel][0]-studentmoneysubtract;
    printf("New copy quantity: %d\n", bookcopy[sel][0]);
    break;
    
    case 3: break;
  }
   return 0;
  }
  int kisibul(){
   printf("Welcome to Library Management System\nPlease provide login information\n\nId: ");
   scanf("%s", &username);

   if(strcmp(&username, "admin") == 0) {
     printf("\nPassword:"); scanf(" %s", &password);
     if(strcmp(&password,"sercan123") == 0) {
       printf("\nSuccessfully logged in as admin!\n--------------\n");
       ID=2;
      return 0;
      }
    }
    else{
      for (i=0; i<kisisayisi; i++){
    if (strcmp(&username, &studentname[i][0]) == 0){
    printf("\nPassword:"); scanf(" %s", &password);
    if (strcmp(&password, &studentpassword[i][0] ) == 0){
    ID=0;
    return 0;
    }
    }
      }
    }
    return 0;
  }
    int userbudgetmenu(){
    printf("What do you want to do?\n1-Add money to user\n2-Exit to admin menu");
    scanf("%d", &budgetmenuchoice);
    switch (budgetmenuchoice){
    case 1: printf("How much money do you want to add?\n");
    scanf("%d" , &studentmoneyadd);
    studentbudget[0][0]=studentbudget[0][0]+studentmoneyadd;
    printf("New user budget: %d\n", studentbudget[0][0]);
    break;
    
    case 2: break;
  }
   return 0;
  }
  int borrowbook(){
 int sel;
 booklist();
 printf("\nWhich book do you want to borrow?:");
 scanf("%d", &sel);
 sel--;
 bookname[sel][0]=bookname[sel][0];
 studentbudget[i][0]=studentbudget[i][0]-bookcopy[50+sel][0];
 j++;
 printf("you have borrowed the book -> ''%s'' ", &bookname[sel][0]);
 return 0;
  }
int showmybooks(){
 printf("you have %d books:\n-------------------\n", j);
 for(int a=0;a<j;a++){
 printf("%d.  bookname:%s  copies:%s\n ",a+1,&bookname[a][0], &bookcopy[a][0]);
 }
 return 0;
 }

 int deletemybook(){
  int choice;
  showmybooks();
  printf("\nWhich book do you want to return?:");
  scanf("%d", &choice);
  choice--;
  printf("\nYou have returned the book ''%s''", &userbooks[choice][0]);
  bookname[choice][0]='\0';
  bookcopy[50+choice][0]='\0';
  for(int i=0;i<j;i++){
   strcpy(&bookname[i][0], &bookname[i+1][0]);
   bookname[i+1][0]='\0';
   strcpy(&bookcopy[50+i][0], &bookcopy[51+i][0]);
   bookcopy[51+i][0]='\0';
 }
 return 0;
 }
 int showstudents(){
 printf("you have %d books:\n-------------------\n", j);
 for(int a=0;a<derssayisi;a++){
 printf("%d.  bookname:%s  copies:%s\n ",a+1,&bookname[a][0], &bookcopy[a][0]);
 if(j>0){
 {printf("%s borrowed a book", &studentname[a][0]);}
 }
 }
 return 0;
 }
