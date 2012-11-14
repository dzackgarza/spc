#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int exit_menu = 0;
int got_input = 0;

typedef struct node {
	int value;
	struct node *next;
} node;
node *head = NULL;

int main() {

	while(exit_menu == 0)
	{

		printf("Menu\n");
		printf("a) Add Numbers to List\n");
		printf("p) Print List\n");
		printf("f) Find a Number in the List\n");
		printf("d) Delete a Number from the List\n");
		printf("q) Quit\n");
		
		char menu_input = get_input();
		switch(menu_input)
		{
			case 'a':
				add_to_list();
				break;
			case 'p':
				print_all();
				break;
			case 'f':
				find_number();
				break;
			case 'd':
				delete_number();
				break;
			case 'q':
				exit(0);
				break;
			default:
				printf("Invalid input, please try again.\n");
				break;
		}
	}

	return 0;
}

void add_to_list()  {
	puts("You chose to add numbers.");
	puts("Enter -1 to stop adding.");

	int current_input;
	while(1) 
	{
		// This block is meant to circumvent troublesome '/n's left in the buffer. >:/
		char buff[20];
		fgets(buff, 20, stdin);
		current_input = atoi(buff);
		
		if (current_input == -1) break;
		
		node *temp =  malloc(sizeof(node)); // The node being added
		temp->value = current_input;
		node *temp2 = head; 		// A node that is used to traverse the list

		if (head == NULL) { 		// The list must be empty (That is, we are adding the first number)
			head = temp; 		// Head was pointed at NULL, needs to be moved
			head->next = NULL; 	// To be altered on the next pass
		}
		else {
			while (temp2->next != NULL) temp2 = temp2->next;
			temp->next = NULL;
			temp2->next = temp;
		}
	}
}

void print_all(node *start) {
	node *i = head;
	for(; i != NULL; i = i->next) {
		printf("%d\n", i->value);
	}
}
void find_number() {
	puts("Please enter the number you would like to search for.");
	int search_num; char buff[20]; 
	fgets(buff, 20, stdin);
	search_num = atoi(buff);
	
	node *i = head;
	for(; i != NULL; i=i->next) {
		if (search_num == i->value) {
			printf("Found!\n ");
			return;
		}
		else continue;
	}
	puts("Not Found.");
}

void delete_number() {

	puts("Please enter the number you would like to delete.");
        int delete_num; char buff[20];
        fgets(buff, 20, stdin);
        delete_num = atoi(buff);

        node *i = head;
        for(; i->next != NULL; i=i->next) {
		if(delete_num == i->value && i == head) {
			head = i->next;
			printf("%d was deleted", delete_num);
			return;
		}
	       	if (delete_num == i->next->value) {
                        i->next = i->next->next;
			printf("%d was deleted.\n", delete_num);
			return;
                }
                else continue;
        }
        puts("Not Found.");

}

char get_input() {
	char choice;
	fgets(&choice, 5, stdin);
	return choice;
}
