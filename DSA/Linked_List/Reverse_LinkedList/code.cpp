// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data=data;
        next= NULL;
    }
};

int main() 
{
    Node* n1 = new Node(10);
    Node* n2= new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);
    
    Node* head =n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=NULL;
    
    Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            
        }
        
        head=prev;
        Node* temp=head;

    while(temp!=NULL)
    {
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
  
}
