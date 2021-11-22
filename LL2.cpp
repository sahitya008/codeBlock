//creation of linked list and insertions of new nodes at end and printing them
#include <bits/stdc++.h>
using namespace std;
class LLnode{
//contains the strucute of LL and manufacturing of each node
public:
    int data;
    LLnode *next;
LLnode(int nodeData){
    this->data=nodeData;
    this->next=NULL;
    }
};

class linkedList{
//contains the arrangement of each node after it is created
public:
LLnode *head;
LLnode *tail;
linkedList(){
    this->head=NULL;
    this->tail=NULL;
    }

void insertNode(int nodeData){
    LLnode *newNode= new LLnode(nodeData);
    if(!this->head){
        this->head=newNode;
    }
    else{
        this->tail->next= newNode;
    }
    this->tail = newNode;
    }

};
void printList(LLnode *head){
while (head->next!=NULL) {
cout<<head->data<<endl;
head=head->next;
}
cout<<head->data;
}
int main(){
linkedList *llist= new linkedList();
int lCount=0;
cout<<"enter size of list";
cin>>lCount;
for(int i=0;i<lCount;i++){
    int LLitem;
    cin>>LLitem;
    llist->insertNode(LLitem);
}
printList(llist->head);
return 0;
}