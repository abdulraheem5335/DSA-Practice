// Circular Linked List

#include<iostream>

using namespace std;

class Node{
    
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class CLL{

    public:
        Node* head;
        Node* tail;

        CLL(){
            head = tail = NULL;
        }

        void insertAtHead(int val){
            Node *newNode = new Node( val );
            if( head == NULL ){
                head = tail = newNode;
                tail -> next = newNode;
            }
            else{
                newNode -> next = head;
                head = newNode;
                tail -> next = head;
            }
        }

        void insertAtTail( int val ){
            Node* newNode = new Node(val);
            
            if( head == NULL ){
                head = tail = newNode;
                tail -> next = newNode;
            }
            else{
                tail -> next = newNode;
                newNode -> next = head;
                tail = newNode;
            }
            
        }

        void deleteAtHead(){
            if( head == NULL ){
                cout << "Circular List is empty!\n";
            }

            else{
                Node* temp = head;
                if( head -> next != NULL );
            }
        }

        void display(){

            if ( head == NULL )
                cout << "Circular List is empty\n";
            else{
                Node *temp = head;
                do{
                    cout << temp -> data << " -> ";
                    temp = temp -> next;
                }while( temp != head);
                cout << " head\n";
            }
        }
    };

int main(){
    CLL cll;

    cll.insertAtTail(3);
    cll.insertAtTail(2);
    cll.insertAtTail(1);

    cll.display();

    return 0;
}