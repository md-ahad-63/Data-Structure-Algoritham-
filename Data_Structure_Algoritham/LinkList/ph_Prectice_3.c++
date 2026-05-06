#include<bits/stdc++.h>
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
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int getSize(node* head) {
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void printMiddle(node* head) {
    int size = getSize(head);
    node* temp = head;

    if (size % 2 == 1) {
        int midIdx = size / 2;
        for (int i = 0; i < midIdx; i++) {
            temp = temp->next;
        }
        cout << temp->val << endl;
    } else {
        int midIdx1 = size / 2 - 1;
        int midIdx2 = size / 2;
        for (int i = 0; i < midIdx1; i++) {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val << endl;
    }
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }

    printMiddle(head);
}
