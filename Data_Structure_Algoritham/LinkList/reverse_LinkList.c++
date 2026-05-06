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

void print_LinkList(Node*head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
      cout<<tmp->val<<endl;
      tmp=tmp->next;

    }
}

void insert_at_tail(Node*&head,Node* & tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}



void print_reverse(Node*tmp)
{
    if(tmp==NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout<<tmp->val<<endl;
}






int main()
{
    Node*head=NULL;
    Node*tail=NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    //print_LinkList(head);
    print_reverse(head);
    

}