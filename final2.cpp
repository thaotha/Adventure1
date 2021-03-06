// Thao Ha IN200 C++
// Final Practical Exam 2
// https://github.com/thaotha/Adventure1/blob/master/final2.cpp

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{   
    int intNum;
    string firstName;
    int rNum;

    cout << "Hello, please enter an integer number 1 or 2 or 3: ";
    cin >> intNum;
    switch(intNum) {
        case 1: 
            cout << "You have entered 1\n"; 
            break;
        case 2:
            cout << "You have entered 2\n";
            break;
        case 3:
            cout << "You have entered 3\n";
            break;
        default:
            cout << "Invalid input!!!\n";
    }

    cout << "Please enter your fist name: ";
    cin >> firstName;
    if(firstName.length() > 5)
        cout << "You have a long first name!\n";
    else if(firstName.length() == 5)
        cout << "You have a mid-size first name!\n";
    else
        cout << "You have a short first name!\n";

    rNum = (rand() % 100);
    cout << "The random number between 0 and 100 generated by the system is " << rNum << endl;

    return 0;
}