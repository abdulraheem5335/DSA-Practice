//  2-D ARRAYS

#include<iostream>
using namespace std;

int main(){

    // ********* 7.14 2 rows and 4 columns ******** 

    /*const int rows = 2, columns = 4;
    int array[rows][columns];

    for(int i = 0; i < rows; i++ ){
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value for array["<< i << "][" << j << "]: ";
            cin >> array[i][j];
        }
        
    }

    cout << endl << "The user has entered the following values: " << endl;

    for(int i = 0; i < rows; i++ ){
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;    
    }*/




    // ********* 7.15 2 rows and 3 columns ******** 
    
    /*const int rows = 2, columns = 3;
    
    int array[rows][columns] = {{1, 2, 3},
                                {4, 5, 6}};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }*/

    
    

    // ********* 7.15 2 rows and 4 columns and min, max ******** 

    /*int array[2][4] = { {10, 20, 3, 4},
                        {5, 16, -7, 8}};

    int min, max;
    
    min = max = array[0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if( array[i][j] > max)
                max = array[i][j];
            
            else if ( array[i][j] < min )
                min = array[i][j];
        }
        
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;*/
    

    
    // ********* 7.17 sum of each row and each column ******** 
    


    

    // ********* 7.19 2 rows and 4 columns and min, max ******** 

    /*int array[4][4];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter value for array["<< i << "]["<< j << "]: ";
            cin >> array[i][j];
            
            if ( i == j )
                sum += array[i][j];
        }
    }

    cout << "The matrix is: " << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Sum of Diagonal entries is: " << sum;*/
    
   

    return 0;
}