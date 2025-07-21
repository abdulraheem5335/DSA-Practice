#include <iostream>
#include <unordered_set>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    
    // ✅
    void insertAtEnd(int val){
        Node *newNode = new Node(val);

        if(head == nullptr){
            head = tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
    // ✅
    void insertAtBeginning(int val){
        Node* newNode= new Node(val);

        if( head == nullptr){
            head = tail = newNode;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }
    
    // ✅
    void insertAtPosition(int val, int pos){
        if( pos < 0 ){
            cout << "Invalid Position: " << pos << endl;
            return;
        }

        else if( pos == 0 ){
            insertAtBeginning(val);
            return;
        }

        else{
            Node* temp = head;

            while( pos > 1 ){
                if ( temp -> next == nullptr)
                    break;
                temp = temp -> next;
                pos--;
            }

            if( pos != 1 ){
                cout << "Cannot insert!\n";
                return;
            }

            Node *newNode = new Node(val);
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }
   
    // ✅
    void deleteFromBeginning(){
        if( head == nullptr ){
            cout << "Cannot Delete from end as the list is Empty!\n";
        }
        else{
            Node* temp = head;
            head = head -> next;
            if( head == nullptr)
                tail = nullptr;
            delete temp;
        }
    }
    
    // ✅
    void deleteFromEnd() {
    if (head == nullptr) {
        cout << "Cannot Delete from end as the list is Empty!\n";
    }
    else if (head->next == nullptr) {
        // Only one node in the list
        delete head;
        head = tail = nullptr;
    }
    else {
        Node* temp = head;

        // Traverse to the second last node
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;         // delete last node
        tail = temp;         // update tail
        tail->next = nullptr;
    }
}
    
    // ✅
    void deleteFromPosition(int pos){
        if( pos < 0 ){
            cout << "Cannot Delete Invalid position!\n";
            return;
        }
        else if( pos == 0){
            deleteFromBeginning();
            return;
        }
        else{
            Node *temp = head;
            Node *prev = nullptr;

            while ( pos > 0){
                if( temp -> next == nullptr)
                    break;
                prev = temp;
                temp = temp -> next;
                pos--;
            }

            if( pos != 0 ){
                cout << "Cannot Delete!\n";
                return;
            }

            prev -> next = temp -> next;
            if (temp == tail){
                tail = prev; // 🛠 Fix tail pointer if deleting last node
            }
            delete temp;

            return;
        }
    }

    // ✅
    void reverse(){
        if (head == nullptr || head->next == nullptr) {
        
            return;
        }

        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        tail = head; // old head will become the new tail

        while (current != nullptr) {
            next = current->next;   // store next node
            current->next = prev;   // reverse the link
            prev = current;         // move prev forward
            current = next;         // move current forward
        }

        head = prev; // update head to the new first node
    }
    


    bool detectLoop();
    void removeDuplicates();
    void mergeSort();
    Node* mergeSortedLists(Node* l1, Node* l2);
    
    // ✅
    void display(){
        if( head == nullptr){
            cout << "List is Empty. Cannot Display! :(\n";
            return;
        }
        else{
            Node *temp = head;

            while (temp != nullptr){
                cout << temp -> data << " -> ";
                temp = temp -> next;
            }
            cout << "NULL\n";
        }
    }
    
    Node* getHead() { return head; }

private:
    Node* mergeSortUtil(Node* head);
};

// --------- Implementations go here ----------

int main() {
    SinglyLinkedList list;

    list.insertAtEnd(5);
    list.insertAtEnd(10);
    list.insertAtBeginning(1);
    list.insertAtPosition(7, 0);
    list.deleteFromBeginning();
    list.display();

    // cout << "Reversing list...\n";
    // list.reverse();
    // list.display();

    // cout << "Detecting loop: " << (list.detectLoop() ? "Loop Found" : "No Loop") << endl;

    // You can create two sorted lists and merge them here
    // Additional logic to test merge, remove duplicates, and merge sort

    return 0;
}