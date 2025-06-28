// ***********  7.3 Sorting *********

#include<iostream>

using namespace std;

int main(){

    const int length = 5;
    int array[length];

    cout << "Enter 5 values: " << endl;

    for (int i = 0; i < length; i++)
    {
        cin >> array[i];
    }

    cout << endl << endl;
    cout << "BEFORE SORTING" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if ( array[j] > array [j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array [ j + 1 ] = temp;
            }
        }   
    }

    cout << endl << endl;
    cout << "AFTER SORTING" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }

    
    
    
    return 0;
}