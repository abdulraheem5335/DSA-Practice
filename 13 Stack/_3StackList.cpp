// Stack using Linked List

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

class Stack{
    Node * head;
    Node * tail;

    public: 
        Stack(){
            head = tail = NULL;
        }

        void push( int val ){
            Node* newNode = new Node( val );

            if ( head == NULL ){
                head = tail = newNode;    
            }

            else{
                newNode -> next = head;
                head = newNode;
            }
        }

        void pop(){

            if( head == NULL ){
                cout << "Cannot Pop! List is Empty ;)\n";
            }
            else{
                Node *temp = head;

                head = head -> next;
                temp -> next = NULL;
                delete temp;

                if (head == NULL) {
                tail = NULL; // empty stack: tail must be NULL too
                }
            }
        }

        void peek(){
            if( head == NULL )
                cout << "Cannot peek! List is Empty ;)" << endl;
            
            else{
                cout << head -> data << endl;
            }
        }

        void display(){
            if( head == NULL )
                cout << "Cannot display! List is Empty ;)\n";
            
            else{
                Node *temp = head;
                while( temp != NULL ){
                    cout << temp -> data << " -> ";
                    temp = temp -> next;
                }
                cout << "NULL" << endl;
            }
        }
        
};
int main(){

    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    return 0;
}