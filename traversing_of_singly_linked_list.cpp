#include<iostream>
using namespace std;
struct Node {
	int data;//store the value
	Node*next;//store the address of the next node
	
	Node(int x) {
		data=x;
		next=NULL;
		
	}
};

int main () {
	Node*head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	
	Node*temp=head;
	while(temp!=NULL) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
