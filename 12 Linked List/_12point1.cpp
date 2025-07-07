// Singly Linked List
#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            this->data = val;
            this->next = NULL;
        }
};

class List{
    Node *head;
    Node *tail;

    public:
        List(){
            head = tail = NULL;
        }

        void pushFront( int val ){
            Node * newNode = new Node(val); // dynamic

            // Node newNode(val) // static 
            if( head == NULL){
                head = tail = newNode;
                return;
            }

            else{
                newNode -> next = head;
                head = newNode;
            }
        }

        void pushBack(int val){
            Node *newNode = new Node(val);
            
            if( head == NULL){
                head = tail = newNode;
                return;
            }
            
            else{
                
                tail -> next = newNode;
                tail = newNode;
            }
        }
        
        void insert( int val, int pos ){

            if( pos < 0 ){
                cout << "Invalid Position\n";
                return;
            }

            else if( pos == 0 ){
                pushFront(val);
                return;
            }

            else{
                Node* temp = head;
                
                for (size_t i = 0; i < pos -1 ; i++)
                {
                    if ( temp == NULL ){
                        cout << "Invalid Position\n";
                        return;
                    }
                    temp = temp -> next;
                }
                
                Node *newNode = new Node(val);
                newNode -> next = temp -> next;
                temp -> next = newNode;
            }
        }

        void pop_front(  ){

            if( head == NULL ){
                cout << "LL is empty\n";
                return;
            }
            Node *temp = head;

            head = head -> next;
            temp -> next = NULL;

            delete temp;
        }
        
        void pop_back(){

            if( head == NULL ){
                cout << "LL is empty\n";
                return;
            }


            else {
                Node *temp = head;

                while ( temp -> next != tail ){
                    temp = temp -> next;
                }

                temp -> next = NULL;
                delete tail;
                tail = temp;
            }
        }
        
        int search( int val ){
            int count = 0;
            Node *temp = head;

            while( temp != NULL ){
                if( val == temp -> data){
                    return count;
                }
                temp = temp -> next;
                count++;
            }
            
            return -1;
        }
        
        void printList(){
            Node* temp = head;
            
            while (temp != NULL)
            {
                cout << temp ->data << " -> ";
                temp = temp -> next;
            }
            cout << "NULL" << endl;
            
        }
};
int main(){
    List ll;

    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);

    ll.insert( 4, 0 );

    ll.printList();
    cout << ll.search(3);
    return 0;
}