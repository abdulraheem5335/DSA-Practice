// ********** FUNCTIONS AND ARRAYS ***********

#include<iostream>
using namespace std;

// ********* 9.18 Display array using function *********
// void displayArray( int [] );

// ********* 9.18 Even Numbers in Array *********
// int evenNumbers( int [] );

// ********* 9.20 Passing Individual Elements *********
// int square( int num );

// ********* 9.21 Passing 2-D Array  *********
int maximum( int [][2] );

int main(){
    // ********* 9.18 Display array using function *********
    /*int array[5];
    cout << "Enter 5 values: ";
    for (int i = 0; i < 5; i++)
    {
        cin>> array[i];
    }
    
    displayArray(array);*/



    // ********* 9.19 Even Numbers in Array *********
    /*int array[5];

    cout << "Enter five integers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    int count = evenNumbers( array );
    
    cout << "The user entered the following array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\nThere are " << count << " even numbers!" << endl;*/
    


    // ********* 9.20 Passing Individual Elements *********
    /*int array[5];

    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }

    
    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "]: "<< array[i] << " and sqaure is: " << square(array[i]) << endl;
    }*/

    
    
    // ********* 9.21 Passing 2-D Array  *********
    int array[3][2];
    int max;
    cout << "Enter value!" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "array[" <<i<< "][" << j << "]: ";
            cin >> array[i][j];
        }
        cout << endl;
    }

    max = maximum( array );

    cout << "The user entered the following value:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Maximum: " << max;
    
    
    
    return 0;
}

// ********* 9.18 Display array using function *********
/*void displayArray( int arr[] ){
    cout << "The user entered the following values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
}*/

// ********* 9.19 Even Numbers in Array *********
/*int evenNumbers( int arr[] ){
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        if( arr[i] % 2 == 0)
            count++;
    }
    return count;
}*/

// ********* 9.20 Passing Individual array element *********
/*int square( int num ){
    return num * num;
}*/

// ********* 9.21 Passing 2-D Array  *********
int maximum( int array[][2] ){
    int max = array[0][0];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            if ( array[i][j] > max )
                max = array[i][j];
        }
        
    }
    return max;
}