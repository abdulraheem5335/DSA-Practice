// *********** Pointers ***********
#include<iostream>

using namespace std;

int main(){

    // ******** 11.2 Using Pointer ********
    /*int number;
    int *p;
    
    cout << "Enter a number: ";
    cin >> number;

    p = &number;

    cout << "The value of number: " << number << endl;
    cout << "The address of number: " << p << endl;*/

    // ********  Void Pointer ********
    /*int n = 1;
    float f = 23.18;
    char c = '$';
    void *ptr;
    ptr = &n;

    cout << "The value of n: " << n << endl;
    cout << "The address of n: " << ptr << endl;

    ptr = &f;

    cout << "The value of f: " << f << endl;
    cout << "The address of f: " << ptr << endl;

    ptr = &c;
    cout << "The value of c: " << c << endl;
    cout << "The address of c: " << ptr << endl;*/



    // ********  Indirection Operator ********
    /*int a, b, s, *p1, *p2;
    p1 = &a;
    p2 = &b;
    cout << "Enter an integer: ";
    cin >> *p1;
    cout << "Enter an integer: ";
    cin >> *p2;
    s = *p1 + *p2;

    cout << *p1 << " + " << *p2 << " = " << s << endl;*/



    // ******** Indirection Operator ********
    /*int a;
    int *ptr = &a;

    cout << "Enter an integer: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr;*/


    return 0;
}