#include<iostream>
using namespace std;

int main(){

    // ******* 7.1 input 5 elements in array *******

    /*int array[5];
    cout << "Enter 5 elements: "<< endl;
    cin >> array[0];
    cin >> array[1];
    cin >> array[2];
    cin >> array[3];
    cin >> array[4];

    cout << "The user entered the following values" << endl;
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;*/



    // ******* 7.2 input 5 elements in array using loop *******

    /*int array[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter the value for array[" << i << "]: ";
        cin >> array[i];
    }

    cout << endl;

    cout << "The user entered the following values: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "array[0]: " << array[i] << endl;
    }*/


    
    // ******* 7.3 sum and average of the array *******

    /*const int size = 5;
    int array[size];
    int sum = 0;
    float average = 0;

    for( int i = 0; i < size; i++ ){
        cout << "Enter value for array[" << i << "]: ";
        cin >> array[i];
        sum += array[i];
    }

    average = sum / size;

    cout << endl << endl;

    cout << "The elements are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl << "Sum of the array: " << sum << endl;
    cout << "Average of the array: " << average << endl;*/
    

    // ********* 7.4 Total days ********
    
    /*int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31 ,30, 31};
    int current_day = 0, current_month = 0;
    int total_days;
    
    cout << "Enter the current day: ";
    cin >> current_day;
    cout << "Enter the current month: ";
    cin >> current_month;
    
    total_days = current_day;
    
    for( int i = 0; i < current_month - 1; i++ ){
        total_days += month[i];
        }
        
        cout << endl << "Total Days: " << total_days;*/
        
    
    
    // ********* 7.5 Total days ********

    /*int numberPerson;
    cout << "Enter the number of person required: ";
    cin >> numberPerson;

    int age[10];
    int count = 0;

    for (int i = 0; i < numberPerson; i++)
    {
        cout << "Enter the age of the person["<< i << "]: ";
        cin >> age[i];
        
        if (age[i] >= 50 && age[i] <= 60)
            count++;
    }

    cout << endl << "There are " << count << " person between 50 and 60";*/
    

    // ********* 7.6 square, cube and sum ********

    /*const int size = 5;

    int numbers[size];
    int squares[size];
    int cubes[size];
    int sum[size] = {0};

    cout << "numbers     Squares     Cubes      Sum" << endl;

    for (int i = 0; i < size; i++)
    {
        numbers[i] = i;
        squares[i] = i * i;
        cubes[i] = i * i * i;
        sum[i] = numbers[i] + squares[i] + cubes[i];

        cout << numbers[i] << "            " << squares[i] << "           " << cubes[i] << "         " << sum[i] << endl;
    }*/
    


    // ********* 7.7 show max ********

    /*int array[10];
    int max;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value for array[" << i << "]: ";
        cin >> array[i];
    }

    max = array[0];

    for (int i = 1; i < 10; i++)
    {
        if ( array[i] > max )
            max = array[i];
    }
    

    cout << "Maximum Number is: " << max;*/
    


    // ********* 7.8 show min ********

    /*int array[10];
    int min;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value for array[" << i << "]: ";
        cin >> array[i];
    }

    min = array[0];

    for (int i = 1; i < 10; i++)
    {
        if ( array[i] < min )
            min = array[i];
    }

    cout << "Maximum Number is: " << min;*/

    
    
    // ********* 7.9 Actual and Reverse Order of the array ********

    /*int array[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for element no." << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "The ACTUAL ORDER is: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    cout << "The REVERSE ORDER is: " << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << array[i] << " ";
    }*/
    

    
    
    return 0;
}