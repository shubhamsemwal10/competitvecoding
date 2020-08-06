#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
} ;
struct LinkedList
{
    Node* head;
    LinkedList()
    {
        head=NULL;
    }
void push(int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

}
void printList()
{
    struct Node* ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
};
int main()
{
    LinkedList ll;
    ll.push(1);
    ll.push(3);
    ll.push(2);
    ll.push(4);
    ll.push(3);
    ll.push(7);
    ll.push(8);
    ll.printList();
}
