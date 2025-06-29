// *********** Union and Enumeration ***********

#include<iostream>
using namespace std;

// ********** 8.13 Union ************
/*union Shirt{
    char size;
    int chest;
    int height;
};*/

// ********** 8.14 Enum ************
enum Year {January = 100, February, March, April, May, June, July, August, September, October, November, December};
int main(){
    // ********** 8.13 Union ************
    /*Shirt myshirt;

    cout << "Size of Union: " << sizeof(myshirt) << endl;
    cout << "What size (S/M/L)? ";
    cin >> myshirt.size;
    cout << "The size is: " << myshirt.size << endl;
    cout << "The chest measurement is: " << myshirt.chest << endl;
    cout << "The height measurement is: " << myshirt.height << endl;

    cout << endl;

    cout << "What is the chest measurement? ";
    cin >> myshirt.chest;
    cout << "The size is: " << myshirt.size << endl;
    cout << "The size measurement is: " << myshirt.size << endl;
    cout << "The height measurement is: " << myshirt.height << endl;

    cout << endl;

    cout << "What is the height measurement? ";
    cin >> myshirt.height;
    cout << "The size is: " << myshirt.size << endl;
    cout << "The size measurement is: " << myshirt.size << endl;
    cout << "The height measurement is: " << myshirt.height << endl;*/

    // ********** 8.13 Enum ************

    Year y;
    y = June;
    cout << "The value of y is: " << y;
    return 0;
}