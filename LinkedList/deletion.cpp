#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }

    // Function to add a node at the end
    void AddNode(int val) {
        Node* temp = new Node(val);
        Node* curr = this;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = temp;
    }

    // Function to print the list
    void print() {
        Node* curr = this;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }

    Node* removeHead(){
        Node* curr = this;
        Node* temp = curr;
        curr = curr->next;
        delete temp;
        return curr;
    }
};

// Function to convert array to linked list
Node* ConvertArrLL(int arr[], int size) {
    Node* head = new Node(arr[0]);
    for (int i = 1; i < size; i++) {
        head->AddNode(arr[i]);
    }
    return head;
}

int main() {
    int arr[4] = {1, 2, 3, 4};

    Node* LL = ConvertArrLL(arr, 4);
    cout << "Before: " << endl;
    LL->print();
    LL = LL->removeHead();
    cout << "After: " << endl;
    LL->print();

    return 0;
}
