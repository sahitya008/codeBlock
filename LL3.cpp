#include <bits/stdc++.h>
using namespace std;
class LLnode
{
public:
    int data;
    LLnode *next;

    LLnode(int nodeData)
    {
        //  cout<<"came to constructoe";
        this->data = nodeData;
        this->next = NULL;
        //  cout<<"cleft constructior";
    }
};
class linkedChain
{
public:
    LLnode *head;
    LLnode *tail;
    linkedChain()
    {
        this->head = NULL;
        this->tail = NULL;
    }
    //function declaration
    void insertNode(int);
    void insertAtLast(int);
    void insertAtHead(int);
    void insertPos(int, int);
    void deleteNode(int);
    void printList();
    void reverseList(LLnode *head);
};
//function defintion: INSERTION to makes a linked list
void linkedChain::insertNode(int nodeData)
{
    // cout<<"inside insert node";
    LLnode *newNode = new LLnode(nodeData);
    //cout<<head->data;
    if (this->head == NULL)
    {
        cout << "checling head";
        this->head = newNode;
        return;
    }
    // cout<<"no head checking";
    LLnode *temp = head;
    while (temp->next != NULL)
    {

        // Update temp
        temp = temp->next;
    }

    // Insert at the last.
    temp->next = newNode;
}
void linkedChain::insertAtHead(int nodeData)
{
    LLnode *frontHead = new LLnode(nodeData);
    LLnode *temp;
    temp = this->head;
    // frontHead->next = this->head;
    this->head = frontHead;
    frontHead->next = temp;
    cout << "head node" << endl;
    cout << this->head->data << endl;
}
void linkedChain::insertAtLast(int nodeData)
{
    LLnode *lastNode = new LLnode(nodeData);
    LLnode *temp;
    temp = head;
    while (temp->next != NULL)
    {
        // cout<<temp->data
        temp = temp->next;
    }
    temp->next = lastNode;
}
void linkedChain::deleteNode(int delPos)
{
    LLnode *temp;
    temp = head;
    int pos = 0;
    if (delPos == 0)
    {
        head = temp->next;
        free(temp);
        return;
    }
    if (this->head == NULL)
        return;
    LLnode *iter1 = this->head;
    LLnode *iter2 = iter1->next;
    while (iter2->next != NULL && pos < (delPos - 1))
    {
        iter2 = iter2->next;
        iter1 = iter1->next;
        pos++;
    }
    iter1->next = iter2->next;
}
void linkedChain::insertPos(int insPos, int nodeData)
{
    LLnode *newNode = new LLnode(nodeData);
    LLnode *temp;
    temp = head;
    int pos = 0;
    while (temp->next != NULL && pos < (insPos - 1))
    {
        temp = temp->next;
        pos++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void linkedChain::reverseList(LLnode *head)
{
    if (head == NULL)
    {
        return;
    }
    reverseList(head->next);
    cout << head->data;
}
void linkedChain::printList()
{
    LLnode *temp;
    temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << temp->data;
};
int main()
{
    linkedChain *node = new linkedChain();
    int lCount;
    cout << "enter size of list" << endl;
    cin >> lCount;
    for (int i = 0; i < lCount; i++)
    {
        int Ldata;
        cout << "elements " << i << endl;
        cin >> Ldata;
        node->insertNode(Ldata);
        //  cout<<"came after inserting";
    }
    cout << "elements of list are" << endl;
    node->printList();
    cout << endl;
    node->insertAtLast(25);
    cout << "after adding at last" << endl;
    node->printList();
    node->insertAtHead(777);
    cout << "after inserting at head" << endl;
    node->printList();

    cout << "enter position frowhere to delete the node" << endl;
    int delPos;
    cin >> delPos;
    if ((delPos >= 0) && (delPos < lCount))
        node->deleteNode(delPos);
    cout << "after deleting" << endl;
    node->printList();
    int insPos, insNodeData;
    cout << "enter position to insert node" << endl;
    cin >> insPos;
    if ((insPos >= 0) && (insPos < lCount))
    {
        cout << "enter node data to be onserted" << endl;
        cin >> insNodeData;
        node->insertPos(insPos, insNodeData);
        cout << "after inserting at position " << endl;
        node->printList();
    }
    else
    {
        cout << "enter correct value to insert" << endl;
    }
    //node->reverseList();
    cout << "after reversing";
    node->reverseList(node->head);
    return 0;
}