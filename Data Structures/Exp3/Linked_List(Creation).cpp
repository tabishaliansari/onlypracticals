#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node* next;
};

int main(){
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	Node* four = NULL;
	
	one = new Node();
	two = new Node();
	three = new Node();
	four = new Node();
	
	one->value = 20;
	two->value = 40;
	three->value = 60;
	four->value = 80;
	
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;
	
	head = one;
	while(head!=NULL){
		printf("%d-->",head->value);
		head=head->next;
	
	}
	printf("NULL");
	
	return 0;
}
