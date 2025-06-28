// **********   SEARCHING   *********

#include<iostream>

using namespace std;

int main(){

    
    // ****** 7.10 Sequential Search *******
    
    /*int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    int searched_number;
    int loc = -1;
    
    cout << "Enter the number you want to search: ";
    cin >> searched_number;

    for (int i = 0; i < 10; i++)
    {
        if ( searched_number == array[i] ){
            loc = i;
            break;
        }
    }

    if( loc != -1 ){
        cout << searched_number << " is found at index " << loc << endl;
    }
    else{
        cout << searched_number << " Not Found :/";
    }*/
    

    // ********* 7.11 Binary Search *************

    /*int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0;
    int end = 9;
    int mid;
    int searched_element;
    int loc = -1;

    cout << "Enter the searched element: ";
    cin >> searched_element;

    while (start <= end ){

        mid = (start + end ) / 2;

        if ( array[mid] == searched_element ){
            loc = mid;
            break;
        }

        else if( searched_element < array[mid] )
            end = mid - 1;
        
        else 
            start = mid + 1;
    }

    
    cout << searched_element << " is found at index: " << loc;*/
    return 0;
}