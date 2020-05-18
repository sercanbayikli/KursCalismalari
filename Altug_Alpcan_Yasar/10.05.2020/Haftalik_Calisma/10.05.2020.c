#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

// Admin ve Ogrenci Bilgilerinin Tutuldugu Degiskenler
char admin[10][2][20] = {
	"admin","123",
	"a","a"
};
char student[10][2][20] = {
	"Ahmet","1234",
	"Ayse", "4567",
	"e","e"
};
// User Counts
int user_count = 3;

// Controller variables
char s_con[50];
char s_con2[50];
char s_arrcon[4][50];
int i_con;
int i_con2;
char c_con;
bool b_con = false;
bool b_con2 = false;

// Other Variables
int author_count = 0;
int a = 0;
bool id_taken = false;
int ids[10];
int ids_counter = 0;
int borrow_count = 0;
int counter = 0;

// Book
struct book {
	int id;
	char name[20];
	char authors[4][20];
	int count;
	char borrow[4][20];
};

struct book books[20] = {
	{1, "Biology", {"Alice","Bob"}, 2, {"Ahmet","Ayse"}},
	{2, "Chemistry", {"Alice"}, 1, {}}
};

int book_count = 2;

int main() {
	void admin_menu();
	void student_menu(char *n);
	printf("\n****Welcome to Library Management System****\nPlease provide login information\n\n");
	while (1) {
		printf("Id: ");
		scanf("%s", &s_con);
		printf("Password: ");
		scanf("%s", &s_con2);
		
		for (int i = 0; i < 10; i++) {
			if (strcmp(s_con, admin[i][0]) == 0) {
				for (int j = 0; j < 10; j++) {
					if (strcmp(s_con2, admin[j][1]) == 0) {
						printf("\nSuccessfully logged in!");
						admin_menu();
						return 0;	
					}
				}
			}
			else if (strcmp(s_con, student[i][0]) == 0) {
				for (int j = 0; j < 10; j++) {
					if (strcmp(s_con2, student[j][1]) == 0) {
						printf("\nSuccessfully logged in!");
						student_menu(s_con);
						return 0;
					}	
				}
			}
		}
		printf("\nInvalid id or password please try again\n\n");
	}
	return 0;
}

void list_books() {
	for (int i = 0; i < book_count; i++) {
		printf("%d. Book id: %03d, Book Name: %s, Book Authors: [", i+1, books[i].id, books[i].name);
		for (int j = 0; j < 4; j++) {
			if (books[i].authors[j][0] == '\0') {
				break;
			}
			else {
				if (j != 0) {
					printf(",");
				}
				printf("%s", books[i].authors[j]);
			}
		}
		printf("], Number of Copies: %d\n", books[i].count);
	}	
}

void show_current_users() {
	for (int i = 0; i < user_count; i++) {
		printf("%d. %s\n", i+1, student[i][0]);
	}
}

void search_books() {
	while (1) {
		printf("\nEnter book name or author name to search ,(Enter 0 to go to main menu)?: ");
		scanf("%s", &s_con);
		// Go to main menu
		if (strcmp(s_con,"0") == 0) {
			break;
		}
		b_con = false;
		
		// ids liste sýfýrlama
		ids_counter = 0;
		for (int i = 0; i < 10; i++) {
			ids[i] = '\0';
		}
		
		for (int i = 0; i < book_count; i++) {
			if (strcmp(books[i].name, s_con) == 0) {
				ids[ids_counter] = i;
				ids_counter++;
				b_con = true;
			}
			else {
				for (int j = 0; j < 4; j++) {
					if (strcmp(books[i].authors[j], s_con) == 0) {
						ids[ids_counter] = i;
						ids_counter++;
						b_con = true;
					}
				}
			}
		}
		if (b_con == true) {
			for (int i = 0; i < ids_counter; i++) {
				printf("\n%d. Book id: %03d, Book Name: %s, Book Authors: [", i+1, books[ids[i]].id, books[ids[i]].name);
				for (int j = 0; j < 4; j++) {
					if (books[ids[i]].authors[j][0] == '\0') {
						break;
					}
					else {
						if (j != 0) {
							printf(",");
						}
						printf("%s", books[ids[i]].authors[j]);
					}
				}
				printf("], Number of Copies: %d", books[ids[i]].count);
			}
			break;
		}
		else {
			printf("\nThere is no book name or author name called %s. Please try again.\n", s_con);
		}
	}
}

void show_my_books(char *n) {
	// ids liste sýfýrlama
	ids_counter = 0;
	for (int i = 0; i < 10; i++) {
		ids[i] = '\0';
	}
	b_con = false;
	for (int i = 0; i < book_count; i++) {
		for (int j = 0; j < 4; j++) {
			if (books[i].borrow[j][0] == '\0') {
				break;
			}
			else if (strcmp(books[i].borrow[j], n) == 0) {
				ids[ids_counter] = i;
				ids_counter++;
				b_con = true;
			}
		}
	}
	if (b_con == true) {
		for (int i = 0; i < ids_counter; i++) {
			printf("\n%d. Book id: %03d, Book Name: %s, Book Authors: [", i+1, books[ids[i]].id, books[ids[i]].name);
			for (int j = 0; j < 4; j++) {
				if (books[ids[i]].authors[j][0] == '\0') {
					break;
				}
				else {
					if (j != 0) {
						printf(",");
					}
					printf("%s", books[ids[i]].authors[j]);
				}
			}
			printf("], Number of Copies: %d", books[ids[i]].count);
		}
	}
	else {
		printf("\nYou don't have any books yet.\n");
	}
}

void admin_menu() {
	//int main();
	printf("\nWelcome Admin! What do you want to do?");
	while (1) {
		printf("\n\n1-List books\n2-Create a book\n3-Clean a book\n4-Search for a book\n5-Change number of copies of book by id\n6-Show students borrowed book by id\n7-List Users by id\n8-Create User\n9-Delete User\n10-Exit\n\n");
		printf("Your Choice: ");
		scanf("%d",&i_con);
	
		switch (i_con) {
			case 1:
				printf("\n***List of Books***\n\n");
				list_books();
				break;
			case 2:
				printf("What is the name of the book that you want to add?: ");
				scanf("%s", &s_con);
				while (1) {
					id_taken = false;
					printf("\nWhat is the id that you want to give for %s book?: ", s_con);
					scanf("%d", &i_con);
					// Unique ID
					for (int i = 0; i < book_count; i++) {
						if (i_con == books[i].id) {
							printf("This ID is already taken!\n");
							id_taken = true;
						}
					}
					if (id_taken == false) {
						break;
					}
				}
				printf("\nWhat is/are the author(s) of %s book?: ", s_con);
				scanf("%s", &s_con2);
				printf("\nHow many copies you have for %s book?: ", s_con);
				scanf("%d", &i_con2);
				author_count = 0;
				
				// s_arrcon sýfýrla
				for (int i = 0; i < 4; i++) {
					memset(s_arrcon[i],0,strlen(s_arrcon[i]));
				}
				
				for (int i = 0; i < 50; i++) {
					if (s_con2[i] == '\0') {
						s_arrcon[author_count][a];
						a = 0;
						break;
					}
					else if (s_con2[i] == ',') {
						s_arrcon[author_count][a] = '\0';
						a = 0;
						author_count++;
					}
					else {
						s_arrcon[author_count][a] = s_con2[i];
						a++;
					}
				}
				books[book_count].id = i_con;
				strcpy(books[book_count].name, s_con);
				for (int i = 0; i < author_count + 1; i++) {
					strcpy(books[book_count].authors[i], s_arrcon[i]);
				}
				books[book_count].count = i_con2;
				book_count++;
				printf("\nThe book has been added to your collection.");	
				break;
			case 3:
				printf("\n***List of Books***\n\n");
				list_books();
				while (1) {
					printf("\n\nWhat is the id of the book that you want to delete,(Enter 0 to go to main menu)?: ");
					scanf("%d", &i_con);
					if (i_con != 0) {
						b_con = false;
						for (int i = 0; i < book_count; i++) {
							if (b_con == true) {
								books[i-1].id = books[i].id;
								strcpy(books[i-1].name, books[i].name);
								for (int j = 0; j < 4; j++) {
									strcpy(books[i-1].authors[j], books[i].authors[j]);
									books[i].authors[j][0] = '\0';
									strcpy(books[i-1].borrow[j], books[i].borrow[j]);
									books[i].borrow[j][0] = '\0';
								}
								books[i-1].count = books[i].count;
							}
							else if (books[i].id == i_con) {
								b_con = true;
							}
						}
						if (b_con == false) {
							printf("\nThis ID is not exist. Please enter a valid ID.");
						}
						else {
							printf("\nThe book has been deleted.");
							book_count--;
							break;
						}
					}
					else {
						break;
					}
				}
				break;
			case 4:
				search_books();
				break;
			case 5:
				printf("\n***List of Books***\n\n");
				list_books();
				while (1) {
					printf("\nWhat is the id of the book for the change ,(Enter 0 to go to main menu)?: ");
					scanf("%d", &i_con);
					if (i_con != 0) {
						b_con = false;
						for (int i = 0; i < book_count; i++) {
							if (books[i].id == i_con) {
								b_con = true;
								borrow_count = 0;
								for (int j = 0; j < 4; j++) {
									if (books[i].borrow[j][0] != '\0') {
										borrow_count++;
									}
									else {
										break;
									}
								}
								printf("\nEnter the new value for the no of copies: ");
								scanf("%d", &i_con2);
								while (i_con2 < borrow_count) {
									printf("\n%d user(s) is/are holding the book, try a larger number!\n", borrow_count);
									printf("\nEnter the new value for the no of copies: ");
									scanf("%d", &i_con2);
								}
								books[i].count = i_con2;
								printf("\nThe book has been updated.\n");
								break;
							}
						}
						if (b_con == false) {
							printf("\nThis ID is not exist. Please enter a valid ID.\n");
						}
						else {
							break;
						}
					}
					else {
						break;
					}
				}
				break;
			case 6:
				printf("\n***List of Books***\n\n");
				list_books();
				while (1) {
					printf("\nWhat is the id of the book that you want to show, (Enter 0 to go to main menu)?: ");
					scanf("%d", &i_con);
					if (i_con != 0) {
						b_con = false;
						for (int i = 0; i < book_count; i++) {
							if (books[i].id == i_con) {
								b_con = true;
								printf("\nStudents that borrowed the book:\n\n");
								for (int j = 0; j < 4; j++) {
									if (books[i].borrow[j][0] != '\0') {
										printf("--> %s\n", books[i].borrow[j]);
									}
								}
								break;
							}
						}
						if (b_con == false) {
							printf("\nThis ID is not exist. Please enter a valid ID.\n");
						}
						else {
							break;
						}
					}
					else {
						break;
					}
				}
				break;
			case 7:
				printf("\n***Current Users***\n\n");
				show_current_users();
				break;
			case 8:
				printf("\nWhat is the name of the user that you want to create?: ");
				scanf("%s", &s_con);
				printf("\nWhat is the password for the new account?: ");
				scanf("%s", &s_con2);
				strcpy(student[user_count][0], s_con);
				strcpy(student[user_count][1], s_con2);
				printf("\nUser has been created.");
				user_count++;
				break;
			case 9:
				printf("\n***Current Users***\n\n");
				show_current_users();
				while (1) {
					printf("\nWhich user do you want to delete?: ");
					scanf("%s", &s_con);
					b_con = false;
					for (int i = 0; i < user_count; i++) {
						if (b_con == true) {
							strcpy(student[i-1][0], student[i][0]);
							strcpy(student[i-1][1], student[i][1]);
						}
						else if (strcmp(student[i][0], s_con) == 0) {
							b_con = true;
						}
					}
					if (b_con == false) {
						printf("That user doesn't exist. Please try again.");
					}
					else {
						for (int i = 0; i < book_count; i++) {
							for (int j = 0; j < 4; j++) {
								if (strcmp(books[i].borrow[j], s_con) == 0) {
									books[i].borrow[j][0] = '\0';
								}
							}
						}
						printf("\nUser has been deleted.");
						user_count--;
						break;
					}
				}
				break;
			case 10:
				main();
				break;
			default:
				printf("\nPlease select a valid option.");
				break;
		}
	}
}

void student_menu(char *n) {
	printf("\nWelcome %s what do you want to do?: ",n);
	while (1) {
		printf("\n\n1-List Books\n2-Search for a book\n3-Add a book to my books list\n4-Delete a book from my books list\n5-Show my borrowed books\n6-Exit\n\n");
		printf("Your Choice: ");
		scanf("%d",&i_con);
	
		switch (i_con) {
			case 1:
				printf("\n***List of Books***\n\n");
				list_books();
				break;
			case 2:
				search_books();
				break;
			case 3:
				printf("\n***List of Books***\n\n");
				list_books();
				printf("\nWhat is the id of a book that you want to add (Enter 0 to go to main menu)?: ");
				scanf("%d", &i_con);
				if (i_con != 0) {
					b_con = false;
					for (int i = 0; i < book_count; i++) {
						if (books[i].id == i_con) {
							b_con = true;
							b_con2 = false;
							counter = 0;
							for (int j = 0; j < 4; j++) {
								if (counter >= books[i].count) {
									printf("\nThere is no available copies of this book.");
									b_con2 = true;
									break;
								}
								if (books[i].borrow[j][0] == '\0') {
									strcpy(books[i].borrow[j], n);
									break;
								}
								else {
									counter++;
								}
							}
							break;
						}
					}
					if (b_con == false) {
						printf("\nThis ID is not exist. Please enter a valid ID.\n");
					}
					else {
						if (b_con2 == true) {
							break;
						}
						else {
							printf("\nThe book has been added to your profile.");
							break;
						}
					}
				}
				else {
					break;
				}
				break;
			case 4:
				printf("\n***Your Books***\n");
				show_my_books(n);
				printf("\n\nWhat is the id of a book that you want to return (Enter 0 to go to main menu)?: ");
				scanf("%d", &i_con);
				if (i_con != 0) {
					b_con = false;
					for (int i = 0; i < book_count; i++) {
						if (books[i].id == i_con) {
							b_con = true;
							b_con2 = false;
							for (int j = 0; j < 4; j++) {
								if (b_con2 == true) {
									strcpy(books[i].borrow[j-1], books[i].borrow[j]);
								}
								else if (strcmp(books[i].borrow[j], n) == 0) {
									b_con2 = true;
								}
							}
							break;
						}
					}
					if (b_con == false) {
						printf("\nThis ID is not exist. Please enter a valid ID.\n");
					}
					else {
						printf("\nThe book has been returned.");
						break;
					}
				}
				else {
					break;
				}
				break;
			case 5:
				printf("\n***Your Books***\n");
				show_my_books(n);
				break;
			case 6:
				main();
				break;
			default:
				printf("\nPlease select a valid option.");
				break;
		}
	}
}


