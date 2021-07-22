/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

using namespace std;

int main()
{ //variable declaration
    int no;
    long fac;

    //input a numeber
    cout << "Enter a Number : ";
    cin >> no;

    //for loop to calculate factorial
    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }
   
    //display output
    cout <<"Factorial of  " << no <<" is " << fac << endl;  
    return 0;
}
