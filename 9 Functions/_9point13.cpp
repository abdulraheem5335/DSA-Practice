// ********* COMMAND LINE PARAMETERS *********

#include<iostream>
using namespace std;

int main( int argc, char* argv[]){
    cout << "Hello world";
    for (size_t i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
    
    return 0;
}