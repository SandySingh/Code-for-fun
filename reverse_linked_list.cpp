#include <iostream>
#include <cstdlib>
using namespace std;

//Structure of node of linked list
struct node
{
    int item;
    struct node* next;
}*start = NULL, *ptr, *p, *ptr2, *new_start;

int main() {
	int a;
	
	//Getting 5 integers and putting them at the starting of list one by one
	for (int i = 0; i < 5; i++){
	    p = (struct node*)malloc(sizeof(node));
	    cin >> a;
	    p -> item = a;
	    p -> next = start;
	    start = p;
	}
	
	//Printing list before reversing
	ptr = start;
	cout << "Before reversing:";
	while(ptr){
	    cout << "\t" << ptr -> item;
	    ptr = ptr -> next;
	}
	cout << endl;
	
	//Assigning ptr to last node
	ptr = start;
	while (ptr -> next != NULL){
	    ptr = ptr -> next;
	}
	new_start = ptr; //new_start is the starting node after list is reversed
	
	//Reversing the list
	// MAIN CODE
	ptr2 = start;
	while (ptr2 != ptr){
	    while ((ptr2 -> next) -> item != ptr -> item){
	        ptr2 = ptr2 -> next;
	    }
	    ptr -> next = ptr2;
	    ptr = ptr2;
	    ptr2 = start;
	}
	ptr -> next = NULL; //First node becomes the last node
	
	//Printing your reversed list
	ptr = new_start;
	cout << "After reversing:";
	while (ptr){
	    cout << "\t" << ptr -> item;
	    ptr = ptr -> next;
	}
	return 0;
}
