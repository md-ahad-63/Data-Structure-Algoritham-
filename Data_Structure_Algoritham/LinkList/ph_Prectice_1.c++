#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(node* &head, node* &tail, int val) {
    node* newNode = new node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return; 
    }

    tail->next = newNode;
    tail = newNode;
}

//linkList size print

void printLinkList(node* head) {
    node* tmp = head;
    int count=0;
    while (tmp != NULL) {
        count++;
        cout << tmp->val << " ";
        tmp = tmp->next;
    } 
    cout<<"Linked list size: "<<count;
}

int main() {
    node* head = NULL;
    node* tail = NULL;
    int val;

    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    printLinkList(head);

    return 0;
}
