// ********** POINTERS AND FUNCTIONS **********

#include<iostream>

using namespace std;

// ******** 11.6 swap uisng pointers *********
// void swap( int*, int* );

// ******** 11.7 Double the value *********
void takeInput( int *ptr );
void doubleInput( int *ptr );
int main(){

    // ******** 11.6 swap uisng pointers *********
    /*int a, b;

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter an integer: ";
    cin >> b;

    cout << "Value of a before swapping: " << a << endl;
    cout << "Value of b before swapping: " << b << endl;

    swap( &a, &b );

    cout << "Value of a after swapping: " << a << endl;
    cout << "Value of b after swapping: " << b << endl;*/



    // ******** 11.7 Double the value *********
    int input;

    takeInput( &input );
    cout << "User entered: " << input << endl;

    doubleInput( &input );
    cout << "Double of input is: " << input << endl;
    return 0;
}

// ******** 11.6 swap uisng pointers *********
/*void swap( int* ptrA, int* ptrB){
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}*/

// ******** 11.7 Double the value *********
void takeInput( int *ptr ){
    cout << "Enter an integer: ";
    cin>> *ptr;
}

void doubleInput( int *ptr ){
    *ptr *= 2;
}