#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node*next;
   Node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};


void insert_at_head(Node*&head,int val)
{
      Node* newNode= new Node(val);
      newNode->next=head;
      head=newNode;
      
      
}


void insert_at_tail(Node*&head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
     tmp=tmp->next;   
    }
    tmp->next=newNode;

}


void  insert_at_any_position(Node* & head,int idx,int val)
{
    Node* newNode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<idx-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;

}







void print_LinkList(Node*head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
      cout<<tmp->val<<endl;
      tmp=tmp->next;

    }
}



int main()
{
    Node*head=new Node(10);
    Node*a=new Node(20);
    Node*b=new Node(30);

    head->next=a;
    a->next=b;

   // insert_at_head(head,200);
    insert_at_any_position(head,2,600);
   // insert_at_tail(head,400);
    print_LinkList(head);

    

}