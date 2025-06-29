// ********* GLOBAL and STATIC VARIABLE ***********

#include<iostream>
using namespace std;

int global;

// ********* 9.16 Global Varaible *********
// void fun();

// ********* 9.16 Static Varaible *********
void staticFunction();
int main(){
    
    // ********* 9.16 Global Varaible *********
    /*cout << "Enter a value: ";
    cin >> global;

    cout << "Global Variable before function call is: " << global << endl;
    fun();
    cout << "Global Variable after function call is: " << global << endl;*/

    // ********* 9.16 Static Varaible *********
    for (int i = 0; i < 5; i++)
    {
        staticFunction();
    }
    
    return 0;
}

// ********* 9.16 Global Varaible *********
/*void fun(){
    global *= 2;
}*/

// ********* 9.17 Static Varaible *********
void staticFunction(){
    static int count = 0;
    count++;
    cout << "The value of static var is: " << count<< endl;

}
