#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int student(void),admin(void);

struct kimlik{
    char id[30];
    int kod;
    char pass[30];
    
}genel[100];

struct book{
   
    int b_id;
    char name[30];
    char a_name[5][20];
    int copy;
    struct kimlik alan[100];
};



struct kimlik genel[100] = { {"admin",2,"123"},{"Ahmet",1,"1234"},{"ayse",1,"4567"}   };

struct book gecici;
struct book all_book[100]={{1,"Biology",{"Alice","Bob"},2},{2,"Chemistry",{"Alice"},1}};
char giris[2][100],ad[100],y,new1[100];
int a,sonuc,sonuc1,secim,b=0,c=0,e=0,f=0,h=0,d=0,alinmis[100];

int main(){
    
    system("clear");
   
    printf("\n\n\t\t\t**** Welcome to Library Management System ****\n\n");
    while(1){
        d=0;
        printf(" -Id: ");
        scanf("%s",giris[0]);
        printf("\n -Password: ");
        scanf("%s",giris[1]);
        h=0;
        
        while(genel[h].id[0]!='\0'){
            sonuc=strcmp(genel[h].id,giris[0]);
            sonuc1=strcmp(genel[h].pass,giris[1]);
            if(sonuc+sonuc1==0){
               printf("\nSuccessfully logged in!\n");
                if(genel[h].kod==2){//admin
                    strcpy(ad,genel[h].id);
                    admin();
                    d=1;
                    break;
                }
                else if(genel[h].kod==1){
                    strcpy(ad,genel[h].id);
                    student();
                    d=1;
                    break;
                }
            }
            h++;
        }
       if(d==0) printf("\nInvalid id or password please try again.\n");
        
    }
    return 0;
}


int admin(){
    while (1) {
        
    
    printf("\n Welcome %s! What do you want to do?\n\n\t1-List books\n\t2-Create a book\n\t3-Clean a book\n\t4-Search for a book\n\t5-Change number of copies of book by id\n\t6-Show students borrowed a book by id\n\t7-List Users by id\n\t8-Create User\n\t9-Delete User\n\t10-Exit\n Your choice: ",ad);
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            a=0;
            printf("*** List of Books ***\n");
            while(all_book[a].b_id!='\0'){
                b=0;
                printf("\n%d-Book id: %03d, Book Name: %s, Book Authors: [",a+1,all_book[a].b_id,all_book[a].name);
                while(all_book[a].a_name[b][0]!='\0'){
                    printf("'%s'",all_book[a].a_name[b]);
                    
                    if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                    b++;
                }
                printf("], Number of Copies: %d",all_book[a].copy);
                a++;
            }
            break;
            
        case 2:
            e=0;
            f=0;
            c=0;
            d=0;
            printf("\nWhat is the name of the book that you want to add?: ");
            scanf("%s",gecici.name);
            
            while(all_book[c].name[0]!='\0'){
                if(strcmp(all_book[c].name,gecici.name)==0){ printf("\nThere is already a book with this name. Enter the NEW author(s) of %s book.",gecici.name);d=1; goto y1;break;}
                c++;
            }
           
        x:
            printf("\nWhat is the id that you want to give for %s book?: ",gecici.name);
            scanf("%d",&gecici.b_id);
            while(all_book[f].b_id!='\0'){
                if(all_book[f].b_id==gecici.b_id){
                    printf("\nThere is already a book with this id. Please try with a different id.");
                    goto x;
                }
                f++;
            }
        y1:
            printf("\nWhat is/are the author(s) of %s book?: ",gecici.name);
            scanf("%s",new1);
            printf("\nHow many copies you have for %s book?: ",gecici.name);
            scanf("%d",&gecici.copy);
            while(1){
            printf("\nAre you sure?[Y/N]");
            scanf("%s",&y);
            if(y=='Y'||y=='y'){
                e=0;
                f=0;
                h=0;
               
                
                strcpy(all_book[c].name,gecici.name);
                all_book[c].b_id=gecici.b_id;
                if(d==1){
                    while(all_book[c].a_name[e][0]!='\0') e++;
                }
                while(new1[h]!='\0'){
                    if(new1[h]==','){
                       
                        h++;
                        e++;
                        f=0;
                    }
                    all_book[c].a_name[e][f]=new1[h];
                    f++;
                    h++;
                }
                
                e=0;
                all_book[c].copy=gecici.copy;
                printf("\nThe following book has been added to your collection:\nBook id: %03d, Book Name: %s, Book Authors: [",all_book[c].b_id,all_book[c].name);
                while(all_book[c].a_name[e][0]!='\0'){
                    printf("'%s'",all_book[c].a_name[e]);
                    
                    if(all_book[c].a_name[e+1][0]!='\0') printf(",");
                    e++;
                }
                printf("], Number of Copies: %d",all_book[c].copy);
                c++;
                break;
            }
            else if(y=='N'||y=='n'){
                printf("\nThe book has not been saved.");
                break;
            }
            else{
               printf("\nInvalid answer, please try again.");
            }}
            break;
            
        case 3:
            a=0;
            d=0;
            
            printf("\n*** List of Books ***\n");
            while(all_book[a].b_id!='\0'){ b=0;
                printf("\n%d-Book id: %03d, Book Name: %s, Book Authors: [",a+1,all_book[a].b_id,all_book[a].name);
                while(all_book[a].a_name[b][0]!='\0'){
                    printf("'%s'",all_book[a].a_name[b]);
                    
                    if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                    b++;
                }
                printf("], Number of Copies: %d",all_book[a].copy);
                a++;
            }//listeleme
            while(1){
                e=0;
            printf("\nWhat is the id of the book that you want to delete,(Enter 0 to go to main menu)? ");
            scanf("%03d",&a);
            if(a==0){
                break;
            }
            while(all_book[e].b_id!='\0'){
                
                if(a==all_book[e].b_id){
                    b=0;
                    printf("\nThe following book has been deleted:\nBook id: %03d, Book Name: %s, Book Authors: [",all_book[e].b_id,all_book[e].name);
                    
                    while(all_book[e].a_name[b][0]!='\0'){
                        printf("'%s'",all_book[e].a_name[b]);
                        
                        if(all_book[e].a_name[b+1][0]!='\0') printf(",");
                        b++;
                    }
                    printf("], Number of Copies: %d",all_book[e].copy);
            
                    a=0;
                    while(all_book[e].b_id!='\0'){
                    all_book[e].b_id=all_book[e+1].b_id;
                    strcpy(all_book[e].name,all_book[e+1].name);
                    while(all_book[e].a_name[a][0]!='\0'){
                        while(all_book[e+1].a_name[a][0]!='\0'){
                            strcpy(all_book[e].a_name[a],all_book[e+1].a_name[a]);
                            a++;
                        }
                        strcpy(all_book[e].a_name[a],"\0");
                        a++;
                    }
                        a=0;
                        all_book[e].copy=all_book[e+1].copy;
                    while(all_book[e].alan[a].id[0]!='\0'){
                        while(all_book[e+1].alan[a].id[0]!='\0'){
                            strcpy(all_book[e].alan[a].id,all_book[e+1].alan[a].id);
                            a++;
                        }
                        strcpy(all_book[e].alan[a].id,"\0");
                        a++;
                    }
                        e++;
                    }
                    d=1;
                    break;
                }
                e++;
            }
                if(d==0) printf("\nInvalid answer, please try again.");
                else if(d==1) break;
            }
            break;
        case 4:
            while(1){
                d=0;
                a=0;
                h=1;
                e=0;
                printf("\nEnter book name or author name to search ,(Enter 0 to go to main menu)?: ");
                scanf("%s",new1);
                if(strcmp(new1,"0")==0) break;
                
                while(all_book[a].name[0]!='\0'){
                    e=0;
                    if(strcmp(all_book[a].name,new1)==0){
                        d=1;
                        b=0;
                        printf("\n%d. Book id: %03d , Book Name: %s, Book Authors: [",h,all_book[a].b_id,all_book[a].name);
                        while(all_book[a].a_name[b][0]!='\0'){
                            printf("'%s'",all_book[a].a_name[b]);
                            
                            if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                            b++;
                        }
                        printf("], Number of Copies: %d",all_book[a].copy);
                        h++;
                    }
                    
                while(all_book[a].a_name[e][0]!='\0'){
                    if(strcmp(all_book[a].a_name[e],new1)==0){
                        d=1;
                        b=0;
                        printf("\n%d. Book id: %03d , Book Name: %s, Book Authors: ['%s'], Number of Copies: %d",h ,all_book[a].b_id ,all_book[a].name,all_book[a].a_name[e], all_book[a].copy);
                        h++;
                    }
                    e++;
                       
                }
                    
                    
                    a++;
                }
                if(d==1) break;
                else if(d==0) printf("\nInvalid answer, please try again.");
            }
            break;
        case 5:
            a=0;
            printf("\n*** List of Books ***\n");
            while(all_book[a].b_id!='\0'){ b=0;
                printf("\n%d-Book id: %03d, Book Name: %s, Book Authors: [",a+1,all_book[a].b_id,all_book[a].name);
                while(all_book[a].a_name[b][0]!='\0'){
                    printf("'%s'",all_book[a].a_name[b]);
                    
                    if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                    b++;
                }
                printf("], Number of Copies: %d",all_book[a].copy);
                a++;
            }
            while(1){
                d=0;
                a=0;
                f=0;
            printf("\nWhat is the id of the book for the change ?(Enter 0 to go to main menu): ");
            scanf("%03d",&e);
                if(e==0) break;
                while(all_book[a].b_id!='\0'){
                    while(all_book[a].b_id==e){
                       printf("\nEnter the new value for the no of copies: ");
                       scanf("%d",&h);
                        while(all_book[a].alan[f].id[0]!='\0'){
                            f++;
                        }
                        if(h<f) printf("\n%d user(s) is/are holding the book, try a larger number!",f);
                        
                        else if(h>=f){
                            b=0;
                            all_book[a].copy=h;
                            printf("\nThe following book has been updated:\n Book id: %03d, Book Name: %s, Book Authors: [",all_book[a].b_id,all_book[a].name);
                            while(all_book[a].a_name[b][0]!='\0'){
                                printf("'%s'",all_book[a].a_name[b]);
                                
                                if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                                b++;
                            }
                            printf("], Number of Copies: %d",all_book[a].copy);
                            d=1;
                            break;
                        }
                    }
                    if(d==1) break;
                    a++;
                }
               
                if(d==1) break;
                else if(d==0) printf("\nInvalid answer, please try again.");
            }
                break;
        case 6:
            while(1){
                e=0;
                d=0;
                printf("\nWhat is the id of the book that you want to show, (Enter 0 to go to main menu)?: ");
                scanf("%03d",&a);
                while(all_book[e].b_id!='\0'){
                    if(all_book[e].b_id==a){
                        d=1;
                        a=0;
                        printf("\nStudents that borrowed the book:");
                        while(all_book[e].alan[a].id[0]!='\0'){
                            printf("\n-%s",all_book[e].alan[a].id);
                            a++;
                        }
                        
                    }
                    if(d==1) break;
                    e++;
                }
                if(d==1) break;
                else if(d==0) printf("\nInvalid answer, please try again.");
            }
            break;
        case 7:
            a=0;
            e=1;
            printf("\n*** Current Users ***");
            while(genel[a].kod!='\0'){
                if(genel[a].kod==1){
                    printf("\n%d- %s",e,genel[a].id);
                    e++;
                }
                a++;
            }
            break;
        case 8:
            a=0;
            
            while(genel[a].kod!='\0'){
                a++;
            }
        y:
            printf("\nWhat is the name of the user that you want to create? ");
            scanf("%s",genel[a].id);
            e=0;
            while(e<a){
                if(strcmp(genel[e].id,genel[a].id)==0){
                    
                    printf("\nThere is already a user with this id. Please try with a different id.");
                    goto y;
                    
                }
                e++;
            }
            printf("\nWhat is the password for the new account? ");
            scanf("%s",genel[a].pass);
            genel[a].kod=1;
            printf("\nThe following user has been added:\nName: %s, Password: %s",genel[a].id,genel[a].pass);
            break;
        case 9:
            a=0;
            e=0;
            d=0;
            printf("\n*** Current Users ***");
            while(genel[a].kod!='\0'){
                if(genel[a].kod==1){
                    printf("\n%d- %s",e+1,genel[a].id);
                    e++;
                }
                a++;
            }
            e=0;
        x1:
            printf("\nWhich user do you want to delete: ");
            scanf("%s",new1);
            while(genel[e].id[0]!='\0'){
                if(strcmp(genel[e].id,new1)==0){
                    printf("%s is deleted!",genel[e].id);
                    d=1;
                    while(genel[e].id[0]!='\0'){
                        strcpy(genel[e].id,genel[e+1].id);
                        genel[e].kod=genel[e+1].kod;
                        strcpy(genel[e].pass,genel[e+1].pass);
                        e++;
                    }
                    e=0;
                    a=0;
                    while(all_book[e].b_id!='\0'){
                        a=0;
                        while(all_book[e].alan[a].id[0]!='\0'){
                            if(strcmp(all_book[e].alan[a].id,new1)==0){
                                all_book[e].copy++;
                                while(all_book[e].alan[a].id[0]!='\0'){
                                    strcpy(all_book[e].alan[a].id,all_book[e].alan[a+1].id);
                                    a++;
                                }
                            }
                            a++;
                        }
                        e++;
                    }
                   
                }
                e++;
            }
            if(d==0){
                printf("\nInvalid answer, please try again.");
                goto x1;}
            break;
        case 10:
            system("clear");
            return 0;
            break;
            
    }}}

int student(){
    while(1){
        printf("\n\nWelcome %s what do you want to do ?\n\t1-Search for a book\n\t2-Add a book to my books list\n\t3-Delete a book from my books list\n\t4-Show my borrowed books\n\t5-Exit\n Your choice: ",ad);
        scanf("%d",&secim);
        switch (secim) {
            case 1:
                while(1){
                    d=0;
                    a=0;
                    h=1;
                    e=0;
                    printf("\nEnter book name or author name to search ,(Enter 0 to go to main menu)?: ");
                    scanf("%s",new1);
                    if(strcmp(new1,"0")==0) break;
                    
                    while(all_book[a].name[0]!='\0'){
                        e=0;
                        if(strcmp(all_book[a].name,new1)==0){
                            d=1;
                            b=0;
                            printf("\n%d. Book id: %03d , Book Name: %s, Book Authors: [",h,all_book[a].b_id,all_book[a].name);
                            while(all_book[a].a_name[b][0]!='\0'){
                                printf("'%s'",all_book[a].a_name[b]);
                                
                                if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                                b++;
                            }
                            printf("], Number of Copies: %d",all_book[a].copy);
                            h++;
                        }
                        
                        while(all_book[a].a_name[e][0]!='\0'){
                            if(strcmp(all_book[a].a_name[e],new1)==0){
                                d=1;
                                b=0;
                                printf("\n%d. Book id: %03d , Book Name: %s, Book Authors: ['%s'], Number of Copies: %d",h ,all_book[a].b_id ,all_book[a].name,all_book[a].a_name[e], all_book[a].copy);
                                h++;
                            }
                            e++;
                            
                        }
                        
                        
                        a++;
                    }
                    if(d==1) break;
                    else if(d==0) printf("\nInvalid answer, please try again.");
                }
                break;
            case 2:
                a=0;
                b=0;
                d=0;
                printf("\n*** List of Books ***\n");
                while(all_book[a].b_id!='\0'){ b=0;
                    printf("\n%d-Book id: %03d, Book Name: %s, Book Authors: [",a+1,all_book[a].b_id,all_book[a].name);
                    while(all_book[a].a_name[b][0]!='\0'){
                        printf("'%s'",all_book[a].a_name[b]);
                        
                        if(all_book[a].a_name[b+1][0]!='\0') printf(",");
                        b++;
                    }
                    printf("], Number of Copies: %d",all_book[a].copy);
                    a++;
                }
                while(1){
                printf("\nWhat is the id of a book that you want to add (Enter 0 to go to main menu)?: ");
                scanf("%03d",&a);
                if(a==0) break;
                    e=0;
                while(all_book[e].b_id!='\0'){
                    if(all_book[e].b_id==a){
                        d=1;
                        f=0;
                        while(all_book[e].alan[f].id[0]!='\0'){
                        if(strcmp(all_book[e].alan[f].id,ad)==0){
                            d=2;break;
                            }
                            f++;
                        }
                        if(d!=2 && all_book[e].copy>=1){
                            b=0;
                            strcpy(all_book[e].alan[f].id,ad);
                            printf("The following book has been added to your profile:\nBook id: %03d, Book Name: %s, Book Authors: [",all_book[e].b_id,all_book[e].name);
                                while(all_book[e].a_name[b][0]!='\0'){
                                       printf("'%s'",all_book[e].a_name[b]);
                                       
                                       if(all_book[e].a_name[b+1][0]!='\0') printf(",");
                                       b++;
                                   }
                            printf("], Available Copies: %d",all_book[e].copy);
                            all_book[e].copy--;
                        }
                        else if(d!=2 && all_book[e].copy<1) {
                            d=3; break;
                        }}
                    e++;
                }
                    if(d==1) break;
                    else if(d==2) printf("\nThis book is already in your profile, please choose another book. ");
                    else if(d==3) printf("\nThere are not enough copies of this book, please choose another book.");
                    else if(d==0) printf("\nInvalid answer, please try again.");
                }
                break;
            case 3:
                a=0;
                b=0;
                h=1;
                
                printf("\n\n*** List of Books ***\n");
                while(all_book[a].b_id!='\0'){
                   
                    while(all_book[a].alan[b].id[0]!='\0'){
                        if(strcmp(all_book[a].alan[b].id,ad)==0){
                            e=0;
                            printf("\n%d. Book id: %03d, Book Name: %s, Book Authors: [",h,all_book[a].b_id,all_book[a].name);
                            alinmis[h-1]=all_book[a].b_id;
                            while(all_book[a].a_name[e][0]!='\0'){
                                printf("'%s'",all_book[a].a_name[e]);
                                
                                if(all_book[a].a_name[e+1][0]!='\0') printf(",");
                                e++;
                            }
                                   printf("], Number of Copies:%d",all_book[a].copy);
                            h++;
                            
                            
                        }
                        b++;
                    }
                     b=0;
                    a++;
                }
                while(1){
                printf("\nWhat is the id of a book that you want to return (Enter 0 to go to main menu)?: ");
                scanf("%03d",&h);
                if(h==0) break;
                a=0;
                e=0;
                d=0;
                while(alinmis[a]!='\0'){
                    if(alinmis[a]==h){
                        d=1;
                        b=0;
                        while(all_book[e].b_id!='\0'){
                            if(all_book[e].b_id==alinmis[a]) break;
                            e++;
                        }
                        printf("\nThe following book has been selected:\nBook id: %03d, Book Name: %s, Book Authors: [",all_book[e].b_id,all_book[e].name);
                        while(all_book[e].a_name[b][0]!='\0'){
                            printf("'%s'",all_book[e].a_name[b]);
                            
                            if(all_book[e].a_name[b+1][0]!='\0') printf(",");
                            b++;
                        }
                        printf("], Number of Copies:%d",all_book[e].copy);
                        while(1){
                            d=0;
                            printf("\nAre you sure that you want to return this book ? [Y/N] ");
                            scanf("%s",&y);
                            if(y=='Y'||y=='y'){
                                f=0;
                                d=2;
                                while(all_book[e].alan[f].id[0]!='\0'){
                                    if(strcmp(all_book[e].alan[f].id,ad)==0){
                                        while(all_book[e].alan[f].id[0]!='\0'){
                                            strcpy(all_book[e].alan[f].id,all_book[e].alan[f+1].id);
                                            f++;
                                        }
                                        
                                        printf("\nThe book has been returned.");
                                        all_book[e].copy++;
                                        break;
                                    }
                                    f++;
                                }
                                break;
                            }
                            else if(y=='N'||y=='n'){
                                d=2;
                                printf("\nThe book has NOT been returned.");
                                break;
                                }
                            
                            else if(d==0) printf("\n\nInvalid answer, please try again..\n");
                        }
                        
                    }
                    if(d==2) break;
                    a++;
                }
                    if(d==2) break;
                else if(d==0) printf("You do not have a book with this id, please try with a different id.");
                }
                a=0;
                while(alinmis[a]!='\0'){//dizi temizleme
                    alinmis[a]='\0';
                    a++;
                }
                break;
            case 4:
                a=0;
                b=0;
                h=1;
                                                          
                 printf("\n\n*** List of Books ***\n");
                  while(all_book[a].b_id!='\0'){
                     
                     while(all_book[a].alan[b].id[0]!='\0'){
                         
                        if(strcmp(all_book[a].alan[b].id,ad)==0){
                          e=0;
                           printf("\n%d. Book id: %03d, Book Name: %s, Book Authors: [",h,all_book[a].b_id,all_book[a].name);
                            
                             while(all_book[a].a_name[e][0]!='\0'){
                               printf("'%s'",all_book[a].a_name[e]);
                                  if(all_book[a].a_name[e+1][0]!='\0') printf(",");
                                      e++;
                                   }
                             printf("], Number of Copies:%d",all_book[a].copy);
                                h++;
                                 }
                            b++;
                       }
                       b=0;
                  a++;
               }
              break;
             case 5:
               system("clear");
                 return 0;
             break;
                                                          
                
        }}}


