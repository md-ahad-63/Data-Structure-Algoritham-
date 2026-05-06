#include<bits/stdc++.h>
using namespace std;

class node{
  
    public:
   
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    } 
};

bool isduplicate(node* head)
{
    node*tmp=head;
    int freq[101]={0};
    while(tmp!=NULL)
    { 
        freq[tmp->val]++;
        if(freq[tmp->val]>1)
        {
            return true;
        }
        tmp=tmp->next;     
    } 
    return false;
}






void insert_at_tail(node* &head,node* &tail,int val)
{
    
    
    
    node* newNode = new node(val);

      if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
      }
      tail->next=newNode;
      tail=newNode;
 
}  










void printLinkList(node*head)
{
    node*tmp=head;
    while(tmp!=NULL)
    {  
        cout<<tmp->val<<endl;
        tmp=tmp->next;
    } 

}




int main()
{
     node*head=NULL;
     node*tail=NULL;

     while(true)
     {
        int val;
        cin>>val;
        if(val==-1)
        break;
         insert_at_tail(head,tail,val);
     }
      if(isduplicate(head)){
        cout<<"Yes"<<endl;
     
      } else{
        cout<<"No"<<endl;
      }
    


     printLinkList(head);
}