#include <bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node* next;

    public:
    Node(int val){
        data = val;
        next = nullptr;
    }
    void AddNode(int val, Node* head){
        Node* temp = new Node(val);
        temp->next = nullptr;
        head->next = temp;
    } 

    void print(Node* head){
        while(head != nullptr){
            cout<< head->data << " ";
            head = head->next;
        }
    }
    
};
Node* ConvertArrLL(int arr[]){
    Node* temp = new Node(arr[0]);
    Node* Mover = temp;
    for(int i = 0; i<4; i++){
        Mover->AddNode(arr[i], temp);
    }
    return temp;
}


int main() {
    int arr[4] = {1, 2, 3, 4};

    Node* LL = ConvertArrLL(arr);
    LL->print(LL);

    return 0;
}