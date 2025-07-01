// ************* Structure and Pointers *************

#include<iostream>

using namespace std;

// ******** 11.8 Structure and Pointer ********
/*struct Book {
    char author[30];
    int pages;
    int price;
};*/

// ******** 11.9 Passing Structure to Function using Pointers ********
/*struct Student{
    int rollNo;
    int marks;
    float cgpa;
};
void inputData( Student *);
void displayData( Student *);*/

// ******** 11.10 Time Structure and Pointer ********
struct Time{
    int hours;
    int minutes;
    int seconds;
};

void convertToStandardTime( int, Time * );
void displayTime( Time * );

int main(){
    // ******** 11.8 Structure and Pointer ********
    /*Book book1;
    Book *ptr = &book1;

    cout << "Enter Book Details\n";
    cout << "Author: ";
    cin.get(ptr->author, 30);
    cout << "Pages: ";
    cin >> ptr -> pages;
    cout << "Price: ";
    cin >> ptr -> price;
    
    cout << "\n\nUser entered:\n";
    cout << "Author: " << ptr -> author << endl;
    cout << "Pages: " << ptr -> pages << endl;
    cout << "Price: " << ptr -> price << endl;*/



    // ******** 11.9 Passing Structure to Function using Pointers ********
    /*Student Usman;

    inputData( &Usman );
    displayData( &Usman );*/
    

    // ******** 11.10 Time Structure and Pointer ********
    Time time;

    convertToStandardTime( 86399, &time );
    displayTime( &time );

    return 0;
}

// ******** 11.9 Passing Structure to Function using Pointers ********
/*void inputData( Student *ptr ){
    cout << "Enter Your Details!\n";
    cout << "Roll No: ";
    cin >> ptr -> rollNo;
    cout << "Marks: ";
    cin >> ptr -> marks;
    cout << "CGPA: ";
    cin >> ptr -> cgpa;
}

void displayData( Student *ptr){
    cout << "Usman entered:\n";
    cout << "Roll No: " << ptr -> rollNo << endl;
    cout << "Marks: " << ptr -> marks << endl;
    cout << "CGPA: " << ptr -> cgpa << endl;
}*/

// ******** 11.10 Time Structure and Pointer ********
void convertToStandardTime( int sec, Time *time ){
    
    time -> seconds = sec;
    time -> minutes = time -> seconds / 60;
    time -> seconds %= 60;
    time -> hours = time -> minutes / 60;
    time -> minutes %= 60;
    time -> hours %= 24; 
}

void displayTime( Time *time ){
    cout << "Hours: " << time -> hours << endl;
    cout << "Minutes: " << time -> minutes << endl;
    cout << "Seconds: " << time -> seconds << endl;
}
