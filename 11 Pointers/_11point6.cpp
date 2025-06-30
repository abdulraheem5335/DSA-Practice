// ******** Array of Pointers ********

#include<iostream>
using namespace std;

int main(){

    // ********* Ex Array of Pointers *********
    int *ptr[3], a, b, c;
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;

    cout << "Enter three integers: \n";
    cin >> a >> b >> c;

    cout << "\nThe user enter the following values: \n";
    for (size_t i = 0; i < 3; i++)
    {
        cout << *ptr[i] << " ";
    }
    
    return 0;
}