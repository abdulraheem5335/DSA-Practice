// ************ PASS BY VALUE *************

#include<iostream>
using namespace std;

// ********** 9.2 Maximum function ***********
// void maximum(int , int );

// ********** 9.3 Table function ***********
// void table(int);

// ********** 9.4 pressor and succesor function ***********
// void value(int);

// ********** 9.5 factorial function ***********
// void factorial( int num );

// ********** 9.6 Odd, Even or Prime ***********
// void oddEvenChecker(int num);

// ********** 9.7 Mini Calculator Function ***********
// void calculator( int, int, char );

// ********** 9.8 Sqaure of Character Function ***********
// void printSquare( int num, char special_char );

// ********** 9.9 Swap Function ***********
// void swap(int &a, int &b);

// ********** 9.10 Grade Function ***********
// char grade( int marks );

// ********** 9.11 a number is multiple of other ***********
// bool mul( int num1, int num2 );

// ********** 9.12 Area of Triangle ***********
// float areaOfTriangle( float base, float height);

// // ********** 9.13 Cube and add functions ***********
// int square( int num1 );
// int cube( int num2 );

// ********** 9.14 GCD functions ***********
// int gcd( int num1, int num2 );

// ********** 9.15 Sum of series ***********
double sumOfSeries( int num );
double factorial( int num );

int main(){

    // ********** 9.2 Maximum function ***********
    /*int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    maximum(num1, num2);*/



    // ********** 9.3 Table function ***********
    /*int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    table(num);*/



    // ********** 9.4 pressor and succesor function ***********
    /*int num;

    cout << "Enter a number: ";
    cin >> num;
    value(num);*/

    // ********** 9.5 factorial function ***********
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    factorial(num);*/

    // ********** 9.6 Odd, Even or Prime ***********
    /*int num;
    cout << "Enter a number: ";
    cin >> num;
    oddEvenChecker( num );*/

    
    
    // ********** 9.7 Mini Calculator Function ***********
    /*int num1, num2;
    char arithmatic_operator;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter arithmatic operator: ";
    cin >> arithmatic_operator;
    cout << "Enter second number: ";
    cin >> num2;

    calculator( num1, num2, arithmatic_operator );*/

    // ********** 9.8 Sqaure of Character Function ***********
    /*int num;
    char special_char;

    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Enter a specail character: ";
    cin >> special_char;

    printSquare( num, special_char );*/


    
    // ********** 9.9 Swap Function ***********
    /*int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << endl << endl;
    cout << "BEFORE SWAP:" << endl;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;
    
    swap( num1, num2);

    cout << endl << endl;
    cout << "AFTER SWAP:" << endl;
    cout << "num1 : " << num1 << endl;
    cout << "num2 : " << num2 << endl;*/



    // ********** 9.10 Grade Function ***********
    /*int marks;
    char g;
    cout << "Enter your marks: ";
    cin >> marks;

    g = grade(marks);
    cout << "Your grade is: " << g << endl;*/

    
    
    // ********** 9.11 a number is multiple of other ***********
    /*int num1;
    int num2;
    bool check;    

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        check = mul( num1, num2 );

        if ( check )
            cout << num2 << " is a multiple of " << num1 << endl;
        else
            cout << num2 << " is not a multiple of " << num1 << endl;
    }*/
    


    // ********** 9.12 Area of Triangle ***********
    /*float base, height, area;

    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Enter the base of the triangle: ";
    cin >> base;

    area = areaOfTriangle( base, height );

    cout << "Height: " << height << endl;
    cout << "Base: " << base << endl;
    cout << "Area of Triangle: " << area << endl;*/
    


    // ********** 9.13 Cube and add functions ***********
    /*int num1, num2;
    int result;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    result = square( num1 ) + cube ( num2 );

    cout << num1 << " square is : " << square(num1) << endl;
    cout << num2 << " cube is : " << cube(num2) << endl;
    cout << "Result is: " << result << endl;*/



    // ********** 9.14 GCD functions ***********
    /*int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Greatest Common Divisor of " << num1 << " and " << num2 << " is " << gcd( num1, num2 ) << endl;*/

    

    // ********** 9.15 Sum of series ***********
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    cout << "The sum of series is: " << sumOfSeries(number);



    
    return 0;

}

// ********** 9.2 Maximum function ***********
/*void maximum(int a, int b){
    if( a > b )
        cout << a << " is max!" << endl;
    else if( b > a)
        cout << a << " is max!" << endl;
    else
        cout << "Both are equal!" << endl;
}*/

// ********** 9.3 Table function ***********
/*void table(int num){
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
}*/

// ********** 9.4 pressor and succesor function ***********
/*void value(int num){
    cout << "The successor of " << num << " is " << num + 1 << endl;
    cout << "The pressesor of " << num << " is " << num - 1 << endl;
}*/

// ********** 9.5 factorial function ***********
/*void factorial( int num ){
    int temp = num;
    for (int i = num - 1; i > 0; i--)
    {
        temp = temp * i;
    }

    cout << "The factorial of " << num << " is: " << temp << endl;
}*/

// ********** 9.6 Odd, Even or Prime ***********
/*void oddEvenChecker(int num){
    if( num % 2 == 0 )
        cout << num << " is Even!" << endl;
    
    else if( num % 2 != 0 ){
        int check = -1;
        for (int i = 3; i <= num/2 ; i++)
        {
            if ( num % i == 0){
                check = 1;
                break;
            } 
        } 
        if( check == -1 ){
            cout << num << " is a Prime!" << endl;
        }
        else
            cout << num << " is an Odd!" << endl;
    }

}*/

// ********** 9.7 Mini Calculator Function ***********
/*void calculator( int a, int b, char oprt){
    switch( oprt ){
        case '+':
            cout << a << " + " << b << " = " << a + b << endl; 
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl; 
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl; 
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b << endl; 
            break;
        
        default:
            cout << "Invalid Operator :/" << endl;
            break;
    }
}*/

// ********** 9.8 Sqaure of Character Function ***********
/*void printSquare( int num, char special_char ){
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << special_char << " ";
        }
        cout << endl;
    }
    
}*/

// ********** 9.9 Swap Function ***********
/*void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}*/

// ********** 9.10 Grade Function ***********
/*char grade( int marks ){
    if( marks >= 80 )
        return 'A';
    else if( marks >= 60 )
        return 'B';
    else if( marks >= 40 )
        return 'C';
    else
        return 'F';
}*/

// ********** 9.11 a number is multiple of other ***********
/*bool mul( int num1, int num2 ){
    if ( num2 % num1 )
        return false;
    else
        return true;
}*/

// ********** 9.12 Area of Triangle ***********
/*float areaOfTriangle( float base, float height){
    return ( (base * height ) * 0.5 );
}*/

// ********** 9.13 Cube and add functions ***********
/*int square( int num1 ){
    return num1 * num1;
}
int cube( int num2 ){
    return num2 * num2 * num2;
}*/

// ********** 9.14 GCD functions ***********
/*int gcd( int num1, int num2 ){
    int i, counter;

    if ( num1 > num2 )
        counter = num2;
    else 
        counter = num1;

    for (i = counter; i >= 1; i--)
    {
        if ( num1 % i == 0 && num2 % i == 0 )
            return i;
    }
    
    return i;
}*/

// ********** 9.15 Sum of series ***********
double sumOfSeries( int num ){
    double sum = 1;

    for (int i = 1; i <= num; i++)
    {
        sum += 1/factorial(i);
    }
    return sum;
}

double factorial ( int num ){
    double fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
