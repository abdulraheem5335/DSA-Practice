// ******** Memory Management *********

#include<iostream>

using namespace std;

int main(){
    // ********* 11.11Using new Operator ********
    /*int *ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;
    cout << "You entered: " << *ptr << endl;
    cout << "It is stored: " << ptr << endl;
    delete ptr;*/



    // ********* 11.12 Dynamic array ********
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int *ptr = new int[size];

    cout << "Enter the value of the array\n";
    for (size_t i = 0; i < size; i++)
    {
        cin >> *(ptr + i);
    }

    cout << "\n\nUser entered:\n";
    for (int i = 0; i < size; i++)
    {
        cout << *ptr++ << " ";
    }
    
    delete [] ptr;

    return 0;
}