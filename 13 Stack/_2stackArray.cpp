// Stack using Array


#include<iostream>
#define MAX 10

using namespace std;

class Stack{
    int array[MAX];
    int length = 0;

    public:

        bool isEmpty(){
            return length == 0;
        }

        bool isFull(){
            return length == MAX;
        }

        void push( int val ){
            if( !isFull() ){
                array[length] = val;
                cout << array[length] << " is inserted at index " << length << endl;
                length++;
            }
            else
                cout << "Stack is full!\n";
        }

        void pop(){
            if ( !isEmpty() ){
                cout << array[length - 1] << " is poped!\n";
                length--;
            }
            else{
                cout << "List is Empty!\n";
            }
        }

        void peek(){
            if( !isEmpty() ){
                cout << "Top element: "<< array[length - 1] << endl; 
            }
            else{
                cout << "List is Empty!" << endl;
            }
        }

};

int main(){

    Stack s;
    
    cout << "Is the list Empty: "<< s.isEmpty() << endl;
    cout << "Is the list Full: "<< s.isFull() << endl;

    cout << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.peek();

    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.peek();
    
    return 0;
}