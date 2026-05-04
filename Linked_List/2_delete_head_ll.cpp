#include<bits/stdc++.h>
using namespace std;

struct Node{

    public:
    int data;
    Node *next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertTOLL(vector<int>& arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    int n = arr.size();
    for (int i = 1; i < n; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node * deleteFromHead(Node* head){
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2, 3, 4, 5, 6};
    Node *head = convertTOLL(arr);

    Node * newHead = deleteFromHead(head);

    cout << newHead->data;
    return 0;
}