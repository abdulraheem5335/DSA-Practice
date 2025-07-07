// STACK

#include<iostream>
#include <vector>

using namespace std;

class Stack{
    vector<int> v;
    
    public:

        void push( int val ){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top() {
            return v[v.size() - 1];
        }

        bool isEmpty(){
            return v.size() == 0;
        }

};

int main(){

    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    while(!stack.isEmpty()){
        cout << stack.top() << endl;
        stack.pop();
    }

    cout << endl;
    return 0;
}