//print elements of linked list
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
};
void printList(Node* head){
while(head->next!=NULL){
    cout<<head->data<<endl;
    head=head->next;    
}
cout<<head->data;
}
int main(){
Node* head= new Node();
Node* second= new Node();
int first=0, secondData=0;
cin>>first;
head->data=first;
head->next=second;
cin>>secondData;
second->data= secondData;
second->next=NULL;
printList(head);
return 0;
}