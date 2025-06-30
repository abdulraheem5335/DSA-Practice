// ********* Pointers and Strings **********


#include<iostream>
using namespace std;

int main(){
    // ******** 11.4 Print String using pointer ********
    /*char name[40];
    char *ptr = name;

    cout << "Enter your name: ";
    cin.get(name, 40);

    cout << "Your name is: " << ptr << endl;*/



    // ******** 11.5 Print String using pointer ********
    char name[] = "Abdul Raheem is a good boy";
    char single_char;
    char *ptr = name;

    cout << "Enter a character: ";
    cin >> single_char;
    
    while( *ptr != '\0'){
        if ( single_char == *ptr )
        {
            cout << "Searched charater is found!\n";
            break;
        }
        else
            ptr++;
        
    }
    
    return 0;
}