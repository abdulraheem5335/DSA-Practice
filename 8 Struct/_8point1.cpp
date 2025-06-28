// ************ STRUCTURES ***********

#include<iostream>

using namespace std;

// ********* 8.1 declare struct and input values ***********
/*struct Student{
    int rollNo;
    float marks;
    float average;
    char grade;
};*/

// ********* 8.2 display DOB using struct ***********
/*struct DateOfBirth{
    int day;
    int month;
    int year;
};*/

// ********* 8.3 Most Costly book ***********
/*struct Book{
    int id;
    float price;
    int pages;
};*/

// ********* 8.4 intialize and display struct ***********
// struct Employee{
//     int id;
//     float salary;
// };

// ********* 8.5 Phone number using struct ***********
/*struct Phone{
    string nationalCode;
    int areaCode;
    int number;
};*/

// ********** 8.6 Employee Data ***********
/*struct Employee{
    int eid;
    string firstName;
    string lastName;
    float hoursWorked;
    float hourlyRate;
    float grosspay;
};*/

// ********** 8.7 Assign one struct to other ***********
/*struct Student{
    int marks;
    char grade;
};*/

// ********** 8.8 Array as Struct Member ***********
struct Student{
    int rollNo;
    int marks[5];
    int average = 0;
};

int main(){
    
    // ********* 8.1 declare struct and input values ***********
    /*Student John;

    cout << "Student John" << endl;
    cout << "Enter your Roll Number: ";
    cin >> John.rollNo;
    cout << "Enter your Marks: ";
    cin >> John.marks;
    cout << "Enter your Average: ";
    cin >> John.average;
    cout << "Enter your Grade: ";
    cin >> John.grade;

    cout << endl;
    cout << "Name: John" << endl;
    cout << "Roll No: " << John.rollNo << endl;
    cout << "Marks: " << John.marks << endl;
    cout << "Average: " << John.average << endl;
    cout << "Grade: " << John.grade << endl;*/



    // ********* 8.2 display DOB using struct ***********

    /*DateOfBirth John;

    cout << "Enter your day of birth: ";
    cin >> John.day;
    cout << "Enter your month of birth: ";
    cin >> John. month;
    cout << "Enter your year of birth: ";
    cin >> John.year;

    cout << endl;

    cout << "John's Date of Birth: " << John.day << "/" << John.month << "/" << John.year << endl;*/



    // ********* 8.3 Most Costly book ***********

    /*Book book1, book3; // book3 to check , works
    Book book2;

    cout << "Enter Book 1 details: " << endl;
    cout << "Enter ID: ";
    cin >> book1.id;
    cout << "Enter price: ";
    cin >> book1.price;
    cout << "Enter pages: ";
    cin >> book1.pages;

    cout << endl << endl;

    cout << "Enter Book 2 details: " << endl;
    cout << "Enter ID: ";
    cin >> book2.id;
    cout << "Enter price: ";
    cin >> book2.price;
    cout << "Enter pages: ";
    cin >> book2.pages;

    cout << "Most costly books details are: " << endl;
    if (book1.price > book2.price)
    {
        cout << "Book ID: " << book1.id << endl;
        cout << "Price: " << book1.price << endl;
        cout << "Pages: " << book1.pages << endl;
    }
    else if ( book2.price > book1.price ){
        cout << "Book ID: " << book2.id << endl;
        cout << "Price: " << book2.price << endl;
        cout << "Pages: " << book2.pages << endl;
    }
    else
        cout << "Both are of same price!";*/


    
    
    // ********* 8.4 Initialize the struct and display it ***********
    /*Employee amjad = { 101, 50000.75};

    cout << "Employee Details:" << endl;
    cout << "Employee ID: " << amjad.id << endl;
    cout << "Salary: " << amjad.salary << endl;*/


    
    // ********* 8.5 Phone number using struct ***********
    /*Phone n1, n2 = { "+92", 306, 4441077 };

    cout << "Enter national code: ";
    cin >> n1.nationalCode;
    cout << "Enter area code: ";
    cin >> n1.areaCode;
    cout << "Enter your number: ";
    cin >> n1.number;

    cout << "Number 1: "<< n1.nationalCode << " " << n1.areaCode << " " << n1.number << endl;
    cout << "Number 2: "<< n2.nationalCode << " " << n2.areaCode << " " << n2.number << endl;*/




    // ********* 8.6 Employee ***********
    /*Employee e1;

    cout << "ENTER YOU DETAILS!" << endl;
    cout << "Employee ID: ";
    cin >> e1.eid;
    cout << "First Name: ";
    cin >> e1.firstName;
    cout << "Last Name: ";
    cin >> e1.lastName;
    cout << "Hours Worked: ";
    cin >> e1.hoursWorked;
    cout << "Hourly Rate: ";
    cin >> e1.hourlyRate;

    e1.grosspay = e1.hoursWorked * e1.hourlyRate;

    cout << endl << endl;

    cout << "YOUR DETAILS!" << endl;
    cout << "Employee ID: " << e1.eid << endl;
    cout << "Name: " << e1.firstName << " " << e1.lastName << endl;
    cout << "Hours Worked: " << e1.hoursWorked << endl;
    cout << "Hourly Rate: " << e1.hourlyRate << endl;
    cout << "Gross Pay: " << e1.grosspay << endl;*/



    // ********** 8.7 Assign one struct to other ***********
    /*Student Usman, Ali;

    cout << "USMAN'S DETAILS!" << endl;
    cout << "Enter Your mark: ";
    cin >> Usman.marks;
    cout << "Enter your grade: ";
    cin >> Usman.grade;

    Ali = Usman;

    cout << "Usman" << endl;
    cout << "Marks:" << Usman.marks << endl;
    cout << "Grade:" << Usman.grade << endl;
    
    cout << endl;

    cout << "Ali" << endl;
    cout << "Marks:" << Ali.marks << endl;
    cout << "Grade:" << Ali.grade << endl;*/


    
    // ********** 8.7 Array as struct member ***********
    Student john;

    cout << "Enter your roll number: ";
    cin >> john.rollNo;

    cout << "Enter the marks of 5 Subjects:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " marks: ";
        cin >> john.marks[i];
        john.average += john.marks[i];
    }

    john.average = john.average/5;

    cout << "JOHN's DETAILS!" << endl;
    cout << "Roll No: " << john.rollNo << endl;
    cout << "Marks: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "  " << john.marks[i] << endl;
    }
    cout << "Average: " << john.average << endl;
    

    

    return 0;
}