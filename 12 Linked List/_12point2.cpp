// Doubly Linked List

#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class DLL {
    Node *head;
    Node *tail;
    
    public:
    DLL(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if( head == NULL ){
            head = tail = newNode;
        }

        else{
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }
    }

    void push_back( int val ){
        Node* newNode= new Node(val);

        if( head == NULL ){
            head = tail = newNode;
        }

        else{
            newNode -> prev = tail;
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if( head == NULL ){
            cout << "Doubly Linked List is empty!\n";
        }

        else{
            Node* temp = head;

            head = head -> next;
            if ( head != NULL )
                head -> prev = NULL;
            temp -> next = NULL;

            delete temp;
        }
    }

    void pop_back(){

        if ( head == NULL )
            cout << "Doubly Linked List is empty!\n";
        else{
            Node* temp = tail;

            tail = tail -> prev;
            if( tail != NULL )
                tail -> next = NULL;
            temp -> prev = NULL;
            delete temp;
        }
    }


    void display(){
        if( head == NULL )
            cout << "Doubly Linked List is empty!\n";
        else{
            Node *temp = head;

            while( temp != NULL ){
                cout << temp -> data << " <=> ";
                temp = temp -> next;
            }
            cout << "NULL\n";
        }

    }
};

int main(){
    DLL dll;

    dll.push_front(2);
    dll.push_front(1);
    dll.push_back(3);

    dll.display();
    
    dll.pop_front();
    dll.pop_back();
    dll.display();
    return 0;
}