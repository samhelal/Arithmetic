/*(Arithmetic) Write a program that asks the user to enter
two numbers, obtains the two numbers from the user and prints
the sum, product, difference, and quotient of the two numbers. (c++ how to program)*/
// program for (+ , * , - , /) for two numbers in c++
#include <iostream>
using namespace std ;
int main () {
    int x(0) , y(0) ;
    cout << " enter the two numbers : " ;
    cin >> x >> y ;
    cout << " the sum is : " << x+y << endl;
    cout << " the difference is : " << x-y << endl;
    cout << " the product is : " << x*y << endl;
    cout << " the quotient is : " << x/y << endl;
    
}