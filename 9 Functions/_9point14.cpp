// ********** FUNCTION OVERLOADING *********

#include<iostream>
using namespace std;

// *********** 9.30 Function Overloading *********** 
/*void pattern(); 
void pattern(int); 
void pattern(int, char);*/

// *********** 9.31 Overloading sum() *********** 
// int sum( int [] );
// int sum( int [], char );

// *********** 9.32 Recursion *********** 
// int factorial( int );

// *********** 9.32 Recursion *********** 
int power( int, int );

int main(){

    // *********** 9.30 Function Overloading ***********  
    /*pattern();
    pattern(5);
    pattern( 10, 'L');*/



    // *********** 9.31 Function Overloading *********** 
    /*int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char special_char;

    cout << "Sum of array: " << sum( array ) << endl;
    cout << "Sum of even elements: " << sum( array, 'E') << endl;
    cout << "Sum of even elements: " << sum( array, 'O') << endl;*/
    


    // *********** 9.32 Recursion *********** 
    /*int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Factorial is : " << factorial(num);*/
    


    // *********** 9.32 Recursion *********** 
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << num1 << " ^ " << num2 << ": " << power(num1, num2) << endl;
    return 0;
}

// *********** 9.30 Function Overloading ***********  
/*void pattern(){
    for (size_t i = 0; i < 10; i++)
    {
        cout << "*" ;
    }
    cout << "\n";
}
void pattern(int count){
    for (size_t i = 1; i <= count; i++)
    {
        cout << "*" << " ";
    }
    cout << "\n";
} 
void pattern(int count, char special_char){
    for (size_t i = 1; i <= count; i++)
    {
        cout << special_char << " ";
    }
    cout << "\n";
} */

// *********** 9.31 Overloading sum() *********** 
/*int sum( int array[] ){
    int sum = 0;

    for (size_t i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

int sum( int array[], char evenOdd ){
    int sum = 0;
    
    for (size_t i = 0; i < 10; i++)
    {
        if(evenOdd == 'E' ){
            if (array[i] % 2 == 0)
            sum += array[i];
        }
        else if (evenOdd == 'O'){
            if (array[i] % 2 != 0)
                sum += array[i];
        }
        else
            sum = 0;
    }

    return sum;
}*/

// *********** 9.32 Recursion *********** 
/*int factorial( int num ){
    if ( num == 0 )
        return 1;
    else
        return num * factorial( num - 1 );
}*/

// *********** 9.33 Recursion *********** 
int power( int num1, int num2 ){
    if( num2 == 1 )
        return num1;
    else if ( num2 > 0 ){
        return num1 * power( num1, num2 - 1);
    }
}