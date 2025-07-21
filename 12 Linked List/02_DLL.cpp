// DOUBLY LINKED LIST

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DLL
{
    Node *head;
    Node *tail;

public:
    DLL()
    {
        head = tail = nullptr;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void insertAtFront(int val)
    {
        Node *newNode = new Node(val);

        if (isEmpty())
        {
            head = tail = newNode;
            return;
        }
        else
        {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return;
        }
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);

        if (isEmpty())
        {
            head = tail = newNode;
            return;
        }

        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            return;
        }
    }

    int deleteFront()
    {

        if (isEmpty())
        {
            cout << "List is MT. Cannot Delete!\n";
            return -1;
        }

        int deletedValue = head->data;
        Node *temp = head;

        if (head == tail)
        {
            head = tail = nullptr;
        }

        else
        {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
        return deletedValue;
    }

    int deleteLast()
    {
        if (isEmpty())
        {
            cout << "Cannot delete from Last as List is MT" << endl;
            return -1;
        }

        int deletedValue = tail->data;
        Node *temp = tail;

        if (head == tail)
        {
            head = tail = nullptr;
        }

        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }

        delete temp;
        return deletedValue;
    }

    void Delete(int val){
        if (isEmpty()){
            cout << "Cannot delete, list is empty.\n";
            return;
        }

        Node *temp = head;

        // Case 1: Value is in head
        if (head->data == val)
        {
            cout << "Deleted Value: " << deleteFront() << endl;
            return;
        }

        // Search for node
        while (temp != nullptr && temp->data != val){
            temp = temp->next;
        }

        // Case 2: Value not found
        if (temp == nullptr){
            cout << "Value not found!" << endl;
            return;
        }

        // Case 3: Node is tail
        if (temp == tail){
            cout << "Last Node Deleted: " << deleteLast() << endl;
            return;
        }

        // Case 4: Node is in the middle
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        cout << "Deleted Middle Node: " << temp->data << endl;
        delete temp;
    }

    void printForward(){
        if( head != nullptr){
            Node *temp = head;
            while( temp != nullptr){
                cout << temp ->data << " <-> ";
                temp = temp -> next;
            }
            cout << "Null" << endl;
        }
        else{
            cout << "List is Empty!" << endl;
            return;
        }
    }

    void printReverse(){
        if( head != nullptr){
            Node *temp = tail;
            while( temp != nullptr){
                cout << temp ->data << " <-> ";
                temp = temp -> prev;
            }
            cout << "Null" << endl;
        }
        else{
            cout << "List is Empty!" << endl;
            return;
        }
    }
};

int main()
{

    DLL dll;

    dll.insertAtFront(50);
    dll.insertAtFront(40);
    dll.insertAtFront(30);

    dll.printForward();
    dll.printReverse();

    dll.insertAtEnd(10);
    dll.insertAtEnd(20);

    dll.printForward();
    dll.printReverse();

    dll.Delete(50);
    dll.printForward();
    
    return 0;

}