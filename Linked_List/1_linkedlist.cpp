/*
Array -> LL
Traversal in LL
Length of LL
*/
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArrToLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    int n = arr.size();
    for (int i = 1; i < n; i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node *temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    vector<int> arr = {12, 3, 4, 5};
    Node *head = convertArrToLL(arr);
    // cout << head->data << " ";

    //Traversal Code start here

    // Node *temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    int length = lengthOfLL(head);
    cout << length;
    return 0;
}