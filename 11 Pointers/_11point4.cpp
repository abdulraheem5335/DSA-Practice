// ********** Pointers and Arrays **********

#include<iostream>

using namespace std;

int main(){

    // ******** Ex Accessing Array Element with Pointers ********
    /*int num[5] = {10, 20, 30, 40, 50};
    int *ptr = num;
    cout << *ptr << endl;
    ptr++;

    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *ptr << endl;*/



    // ******** 11.2 Accessing Array Element with Pointers ********
    /*int array[5];
    int *ptr = array;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    // Method 1
    // cout << "The user entered: \n"; 
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << *(ptr + i) << " ";
    // }

    // Method 2
    // cout << "The user entered: \n"; 
    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << *ptr++ << " ";
    // }
    */
    
    

    // ******** 11.3 Input 5 floating-point and display in reverse ********
    float array[5];
    float* ptr = &array[4];

    cout << "Enter 5 floating point values: ";
    for (size_t i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    cout << "\nUser entered\n";
    for (size_t i = 0; i < 5; i++)
    {
        cout << *ptr-- << " " ;
    }
    
    


    


    
    
    return 0;
}