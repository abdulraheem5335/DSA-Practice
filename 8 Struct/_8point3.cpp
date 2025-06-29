// ********** NESTED STRUCTURES ***********

#include<iostream>

using namespace std;


// ********** 8.10 Result and Record Nested Structs **********
/*struct Result{
    int marks;
    char grade;
};

struct Record{
    int rollNo;
    Result result;
};*/

// ********** 8.10 Result and Record Nested Structs **********
/*struct Date{
    int day;
    int month;
    int year;
};
struct Phonebook{
    char name[40];
    char city[40];
    char telephone[40];
    Date date;
};*/

// ********** 8.12 Dimension , Rectangle and Results Nested Structs **********
struct Dimension{
    float length;
    float width;
};

struct Result{
    float area;
    float perimeter;
};

struct Rectangle{
    Dimension dimension;
    Result result;
};

int main(){

    // ********** 8.10 Result and Record Nested Structs **********
    /*Record ahmed;

    ahmed.rollNo = 469273;
    ahmed.result.marks = 85;
    ahmed.result.grade = 'A';

    cout << "AHMED DETAILS!" << endl;
    cout << "Roll No: " << ahmed.rollNo << endl;
    cout << "Marks: " << ahmed.result.marks << endl;
    cout << "Grade: " << ahmed.result.grade << endl;*/

    

    // ********** 8.11 Date and PhoneBook Nested Structs **********
    /*Phonebook phonebook;

    cout << "Enter your name: ";
    cin >> phonebook.name;
    cout << "Enter your city: ";
    cin >> phonebook.city;
    cout << "Enter your telephone( +12 345 6789101) :";
    cin >> phonebook.telephone;
    cout << "Enter your Date of birth(dd/mm/yyyy): ";
    cin >> phonebook.date.day;
    cin >> phonebook.date.month;
    cin >> phonebook.date.year;

    cout << endl << endl;;
    cout << "USER ENTERED: " << endl;
    cout << "Name: " << phonebook.name << endl;
    cout << "City: " << phonebook.city << endl;
    cout << "Tel: " << phonebook.telephone << endl;
    cout << "DOB: " << phonebook.date.day << "/" << phonebook.date.month << "/" << phonebook.date.year << endl;*/


    // ********** 8.11 Date and PhoneBook Nested Structs **********

    Rectangle rectangle;
    cout << "Enter the length of the rectangle: ";
    cin >> rectangle.dimension.length;
    cout << "Enter the widht of the rectangle: ";
    cin >> rectangle.dimension.width;
    
    rectangle.result.area = rectangle.dimension.length * rectangle.dimension.width;
    rectangle.result.perimeter = 2 * (rectangle.dimension.length + rectangle.dimension.width);

    cout << endl << endl;
    
    cout << "Length: " << rectangle.dimension.length << endl;
    cout << "Width: " << rectangle.dimension.width << endl;
    cout << "Area: " << rectangle.result.area << endl;
    cout << "Perimeter: " << rectangle.result.perimeter << endl;
    return 0;
}