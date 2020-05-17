#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int navigate, compare(), liststudents(), bot = 0, bib = 1, mycourse[100][100], credits[100][100], listcourses(), ny, population = 0, ai, add,bob, i = -1, totalcourse = 0, list(),bah;
char Id, pas, students[100][100][100][100], courses[100][100][100], mycourses[100][100][100][100], nnnn;
bool adminlog = false, studentlog = false;
int main() {
  while (1) {
    printf("****Welcome to Library Management System****\nPlease provide login information\n\nId: "); scanf("%s", &Id); printf("\nPassword: "); scanf("%s", &pas); if (strcmp(&Id, "admin") == 0 && strcmp(&pas, "123") == 0) {
      adminlog = true;
      printf("\nSuccessfully logged in!\n-------------------\n");
    }
    else {
      i = 0;
      while (i < population) {
        if (strcmp(&students[i][1][1][1], &Id) == 0 && strcmp(&students[i][0][0][0], &pas) == 0) {
          printf("\nSuccessfully logged in!\n-------------------\n");
          studentlog = true;
          break;
        }
        i++;
      }
      if (studentlog == false) {
        printf("Invalid id or password please try again\n\n");
      }
    }
    while (adminlog == true) {
      printf("\nWelcome Admin! What do you want to do?\n\n\n1-List books\n2-Create a book\n3-Clean a book\n4-Search for a book\n5-Change number of copies for a book\n6-Show students borrowed a book\n7-List Users by id\n8-Create User\n9-Delete User\n10-Exit\n\nYour choice: "); scanf("%d", &navigate); printf("\n-------\n\n");
      switch (navigate) {
        case 1:
          if (totalcourse == 0) {
            printf("There are no existing books. Would you like to add a book? (Y/N) ");
            scanf(" %c", &nnnn);
            if (nnnn == 'Y') {
              navigate = 2;
            }
            else if (nnnn == 'N') {
              navigate = 0;
              break;
            }
          }
          else {
            list(); break;
          }
        case 2:
          printf("What is the name of the book you want to add?"); 
          scanf("%s", &courses[totalcourse][0][0]);//name
          printf("What is the id that you want to give for %s book?:",&courses[totalcourse][0][0]);
          scanf("%d", &credits[1][totalcourse]); //id
          printf("What is/are the author(s) of %s book?:",&courses[totalcourse][0][0]);
          scanf("%s", &courses[totalcourse+10][0][0]);//author
          printf("How many copies of it exists?");
          scanf("%d", &credits[5][totalcourse]);//copy
          printf("\nBook id: %d, Book Name: %s, Book Author(s): %s, Number of Copies: %d\n",credits[1][totalcourse],&courses[totalcourse][0][0],courses[totalcourse+10][0],credits[5][totalcourse]); totalcourse++; break;
        case 3:
          if (totalcourse == 0) {
            printf("There are no existing books. Would you like to add a book? (Y/N) ");
            scanf(" %c", &nnnn);
            if (nnnn == 'Y') {
              navigate = 2;
            }
            else if (nnnn == 'N') {
              navigate = 0;
              break;
            }
          }
          else {
            list(); printf("Which book would you like to delete?"); scanf("%d", &ny); if (ny > totalcourse) {
              printf("Invalid choice\n\n");
              break;
            } else if (ny == 0) {
              printf("\n-----\n\n");
            }
            else {
              printf("\n%s has been deleted\n\n", &courses[ny - 1][1][1]);

              courses[ny - 1][0][0] = '\0';//name
              courses[ny + 9][0][0] = '\0';//author
              credits[5][ny - 1] = '\0';//copy
              credits[1][ny - 1] = '\0';//id
              for (int g = -1; g < population; g++) {
                credits[0][g] = credits[0][g] + credits[1][ny - 1];
              }
              credits[1][ny - 1] = '\0';
              while (ny <= totalcourse) {
                strcpy(&courses[ny - 1][0][0], &courses[ny][0][0]);
                strcpy(&courses[ny + 9][0][0], &courses[ny + 10][0][0]);
                credits[5][ny - 1] = credits[5][ny];//copy
                credits[1][ny - 1] = credits[1][ny];
                courses[ny][0][0] = '\0';//name
                courses[ny + 10][0][0] = '\0';//author
                credits[5][ny] = '\0';//copy
                credits[1][ny] = '\0';//id
                ny++;
              }
              totalcourse--;
            }
          }
          break;
        case 4:
         printf("Enter book name or author name to search.(N to go to main menu)"); scanf("%s", &nnnn);
         if (nnnn=='N') {
            printf("\n-----\n\n");
            break;
          }
          else{
           for (bah = 0; bah <= population; bah++) {
             if(strcmp(&courses[bah][0][0],&nnnn)==0 || strcmp(&courses[bah+10][0][0],&nnnn)==0){
               printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",bah+1,credits[1][bah],&courses[bah][0][0], courses[bah+10][0],credits[5][bah]);break;
             }
           }
          }
          break;
        case 5:
          list(); printf("What is the id of the book for the change ?(Enter 0 to go to main menu):");
          scanf("%d", &navigate);
          for (bah = 0; bah <= population; bah++) {
             if(credits[1][bah]==navigate){
               printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",bah+1,credits[1][bah],&courses[bah][0][0], courses[bah+10][0],credits[5][bah]);break;
             }
           }
           printf("Enter the new value for the no of copies:");
           scanf("%d",&navigate);
           credits[5][bah]=navigate;
           printf("\nCurrent book info-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",credits[1][bah],&courses[bah][0][0], courses[bah+10][0],credits[5][bah]);
          break;
        case 7:
          if (population == 0) {
            printf("There are no existing users. Would you like to add a user? (Y/N)"); scanf(" %c", &nnnn);
            if (nnnn == 'Y') {
              navigate = 7;
            }
            else if (nnnn == 'N') {
              navigate = 0;
              break;
            }
          }
          else {
            liststudents();
            break;
          }
        case 8:
          printf("What is the name of user that you want to create? "); scanf("%s", &students[population][1][1][1]); printf("What is the password for account? "); scanf("%s", &students[population][0][0][0]);
          printf("NAME:%s PASS:%s\n", &students[population][1][1][1], &students[population][0][0][0]);

          population++;
          break;
        case 9:
          if (population == 0) {
            printf("There are no existing users. Would you like to add a user? (Y/N)"); scanf(" %c", &nnnn);
            if (nnnn == 'Y') {
              navigate = 7;
            }
            else if (nnnn == 'N') {
              navigate = 0;
              break;
            }
          }
          else {
            liststudents(); printf("Which user would you like to delete?"); scanf("%d", &ny); if (ny > population) {
              printf("Invalid choice\n\n");
              break;
            } if (ny == 0) {
              printf("\n-----\n\n");
            }
            else {
              printf("\nUser %s has been deleted\n\n", &students[ny - 1][1][1][1]);
              students[ny - 1][0][0][0] = '\0';
              students[ny - 1][1][1][1] = '\0';
              credits[0][ny - 1] = '\0';
              while (ny <= population) {
                strcpy(&students[ny - 1][0][0][0], &students[ny][0][0][0]);
                strcpy(&students[ny - 1][1][1][1], &students[ny][1][1][1]);
                credits[0][ny - 1] = credits[0][ny];
                students[ny][0][0][0] = '\0';
                students[ny][1][1][1] = '\0';
                credits[0][ny] = '\0';
                ny++;
              }
              population--;
            }
          } break;
        case 6:
          list(); printf("Which book do you want to show? "); scanf("%d", &navigate); if (navigate > totalcourse) {
            printf("Invalid choice\n\n");
            break;
          } else if (navigate == 0) {
            printf("\n-----\n\n");
          }
          for (int bah = 0; bah < population; bah++) {
            for (int abc = 0; abc < mycourse[bah][abc]; i++) {
              if (strcmp(&students[50 + abc][bah][0][0], &courses[navigate - 1][0][0]) == 0) {
                printf("%d-%s\n", bib, &students[bah][1][1][1]); bib++; break;
              }
            }
          }
          break;
        case 10:
          adminlog = false; break;
      }
    }
 while (studentlog == true) {
      printf("\nWelcome %s! What would you like to do?\n\n1-Search for a book\n2-Add a book to my books list\n3-Delete a book from my books list\n4-Show my borrowed books\n5-Exit\n\n\nYour choice: ", &students[i][1][1][1]); scanf("%d", &navigate); printf("\n-------\n\n");
      switch (navigate) {
        case 2:
          list(); printf("Which book do you want to add (Enter 0 to go to main menu)?"); scanf("%d", &navigate); if (navigate == 0) {
            break;
          }
          else {
            if (0 == credits[5][navigate - 1]) {
              printf("Book currently unavailable"); break;
            }
            else {
              compare(); if (navigate == 0) {
                break;
              } else {
                credits[5][navigate - 1]--;
                strcpy(&students[50 + mycourse[i][bot]][i][0][0], &courses[navigate - 1][0][0]);
                strcpy(&students[60 + mycourse[i][bot]][i][0][0], &courses[navigate + 9][0][0]);
                navigate = 0;
              }
              mycourse[i][bot]++;
              printf("%s nin %d tane kitabı var", &students[i][1][1][1], mycourse[i][bot]);
            }
          }
          break;
        case 3:
          listcourses(); printf("Which book do you want to remove?"); scanf("%d", &navigate); if (navigate > totalcourse) {
            printf("Invalid choice\n\n");
            break;
          } else if (navigate == 0) {
            printf("\n-----\n\n");
            break;
          }
          else {
            credits[5][navigate - 1]++;
            printf("\nBook titled %s has been returned to the rightful hands of the library\n\n", &students[50 + navigate - 1][i][0][0]);
            students[50 + navigate - 1][i][0][0] = '\0';
            while (navigate <= mycourse[i][bot]) {
              strcpy(&students[50 + navigate - 1][i][0][0], &students[50 + navigate][i][0][0]);
              navigate++;
            }
            mycourse[i][bot]--;

          } break;
        case 4:
          listcourses(); break;
        case 1:
         printf("Enter book name or author name to search.(N to go to main menu)"); scanf("%s", &nnnn);
         if (nnnn=='N') {
            printf("\n-----\n\n");
            break;
          }
          else{
           for (bah = 0; bah <= population; bah++) {
             if(strcmp(&courses[bah][0][0],&nnnn)==0 || strcmp(&courses[bah+10][0][0],&nnnn)==0){
               printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s,  Number of Copies: %d\n",bah+1,credits[1][bah],&courses[bah][0][0], courses[bah+10][0],credits[5][bah]);break;
             }
           }
          }
          break;
        case 5:
          studentlog = false; break;
      }
    }
  }
}
int list() {
  printf("\n*** Offered Courses ***\n\nCourse Name\t\tCredit\n");
  for (ai = 0; ai < totalcourse; ai++) {
     printf("\n%d-Book id: %03d, Book Name: %s, Book Author(s): %s, Number of Copies: %d\n",ai+1,credits[1][ai],&courses[ai][0][0],courses[ai+10][0],credits[5][ai]);
  }
  printf("\n------\n"); return 0;

}
int liststudents() {
  printf("\nStudentName\t\tStudentPass\t\tStudentCredits\n");
  for (ai = 0; ai < population; ai++) {
    printf("%d-%s\t\t\t%s\t\t\t%d\n", ai + 1, &students[ai][1][1][1], &students[ai][0][0][0], credits[0][ai]);
  }
  printf("\n------\n"); return 0;
}
int listcourses() {
  printf("\nYour books\n\n");
  for (ai = 0; ai < mycourse[i][bot]; ai++) {
     printf("\n%d-Book id: %d, Book Name: %s, Book Author(s): %s, Number of Copies left: %d\n",ai+1,credits[1][ai],&courses[ai][0][0],courses[ai+10][0],credits[5][ai]);
  }
  printf("\n------\n"); return 0;
}
int compare() {
  for (bob = 0; bob < mycourse[i][bot]; bob++) {
    if (strcmp(&courses[navigate - 1][0][0], &students[50 + bob][i][0][0]) == 0) {
      printf("This book is already in your profile, please choose another book:"); navigate = 0; return 0;
    }
  }
  return 0;
}
