// ********* Function and Structure *********
#include<iostream>
using namespace std;


// ******** 9.22 Passing struct by value *********
/*struct Result{
    int marks;
    char grade;
};
void displayStructure( Result );*/

// ******** 9.23 Country with more Population *********
/*struct Country{
    string name;
    int population;
};
void populatedCountry( Country, Country );*/

// ******** 9.24 Time Struct *********
/*struct Time{
    int hours;
    int minutes;
    int seconds;
};
void displayTime( Time [] );*/

// ******** 9.26 Passing Struct by Reference *********
/*struct Book{
    int price;
    string author;
};

void displayBook( Book & );*/

// ******** 9.27 Time mini Project *********
/*struct Time{
    int hours;
    int minutes;
    int seconds;
};

void setTime( int , int, int, Time & );
void increment( int, Time & );
void displayTime( Time );*/

// ******** 9.28 Returning Structure from a function *********
struct Book{
    string author;
    int pages;
    int price;
};

Book moreExpensive( Book, Book );
int main(){
    
    // ******** 9.22 Passing struct by value *********
    /*Result raheem;

    cout << "Enter your result:"<< endl;
    cout << "Enter your marks: ";
    cin >> raheem.marks;
    cout << "Enter your grade: ";
    cin >> raheem.grade;

    displayStructure( raheem );*/



    // ******** 9.23 Country with more Population *********
    /*Country c1, c2;

    cout << "Enter details of Country 1:" << endl;
    cout << "Name: ";
    cin >> c1.name;
    cout << "Population(in millions): ";
    cin >> c1.population;

    cout << endl << endl;

    cout << "Enter details of Country 2:" << endl;
    cout << "Name: ";
    cin >> c2.name;
    cout << "Population(in millions): ";
    cin >> c2.population;

    populatedCountry( c1, c2 );*/



    // ******** 9.24 Time Struct *********
    /*Time t[2];

    cout << "Enter Time detail\n" << endl;

    for (size_t i = 0; i < 2; i++)
    {
        cout << "Time " << i + 1 << ":" << endl;
        cout << "Hours: ";
        cin >> t[i].hours;
        cout << "Minutes: ";
        cin >> t[i].minutes;
        cout << "Seconds: ";
        cin >> t[i].seconds;

        cout << "\n";
    }
    
    displayTime( t );*/



    // ******** 9.26 Passing Struct by Reference *********
    /*Book book;

    cout << "Enter values:" << endl;
    cout << "Author: ";
    cin >> book.author;
    cout << "Price: ";
    cin >> book.price;

    displayBook( book );*/



    // ******** 9.27 Time mini Project *********
    /*Time time;

    setTime( 30, 120, 60, time );
    displayTime(time);
    increment( 57539, time );
    displayTime(time);*/



    // ******** 9.28 Returning Structure from a function *********
    Book b1, b2, result;

    cout << "Enter Book 1 details!" << endl;
    cout << "Author: ";
    cin >> b1.author;
    cout << "Pages: ";
    cin >> b1.pages;
    cout << "Price: ";
    cin >> b1.price;

    cout << "\n\n";

    cout << "Enter Book 2 details!" << endl;
    cout << "Author: ";
    cin >> b1.author;
    cout << "Pages: ";
    cin >> b1.pages;
    cout << "Price: ";
    cin >> b1.price;

    cout << "\n\n";

    result = moreExpensive( b1, b2 );

    cout << "Most Expensive Book Details!\n";
    
    cout << "Author: " << result.author << endl;
    cout << "Pages: " << result.pages << endl;
    cout << "Price: " << result.price << endl;

    return 0;
}


// ******** 9.22 Passing struct by value *********
/*void displayStructure( Result raheem){
    cout << "User entered:" << endl;
    cout << "Marks: " << raheem.marks << endl;
    cout << "Grade: " << raheem.grade << endl;
}*/

// ******** 9.23 Country with more Population *********
/*void populatedCountry( Country c1, Country c2){
    cout << "More Populated country's details:" << endl;
    
    if ( c1.population > c2.population ){
        cout << "Name: " << c1.name << endl;
        cout << "Population: " << c1.population << " million" << endl;
    }
    else if( c1.population < c2.population ){
        cout << "Name: " << c2.name << endl;
        cout << "Population: " << c2.population << " million" << endl;   
    }
    else
        cout << "Both countries has same population!" << endl;
}*/

// ******** 9.24 Time Struct *********
/*void displayTime( Time time[] ){
    int hours = 0, minutes = 0, seconds = 0;

    seconds = time[0].seconds + time[1].seconds;  
    minutes = time[0].minutes + time[1].minutes;  
    hours = time[0].hours + time[1].hours;  
    
    if( seconds >= 60 ){
        minutes += seconds / 60;
        seconds = seconds % 60;
    }
    if ( minutes >= 60 )
    {
        hours += minutes / 60;
        minutes %= 60;
    }
    if( hours >= 24 ){
        hours = hours % 24;
    }

    cout << hours << " : " << minutes << " : " << seconds;
}*/

// ******** 9.26 Passing Struct by Reference *********
/*void displayBook( Book &b ){
    cout << "\nUser Entered:\n";
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;
}*/

// ******** 9.27 Time mini Project *********
/*void setTime( int hours, int minutes, int seconds, Time &time ){
    time.seconds = seconds;
    time.minutes = minutes + seconds / 60;
    time.seconds %= 60;
    time.hours = hours + minutes / 60;
    time.minutes %= 60 ;
    if( time.hours >= 24 )
        time.hours %= 24;
}

void displayTime( Time time ){
    cout << "Time: " << time.hours << " : " << time.minutes << " : " << time.seconds << endl;
}

void increment( int seconds, Time &time ){
    time.seconds += seconds;
    time.minutes += seconds / 60;
    time.seconds = seconds % 60;
    time.hours += time.minutes / 60;
    time.minutes %= 60;
    time.hours %= 24;
}*/


Book moreExpensive( Book b1, Book b2){
    if ( b1.price > b2.price )
        return b1;
    else 
        return b2;
}
