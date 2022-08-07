/*A simple code to calculate the sum of all odd numbers less than a number*/

#include <iostream>
using namespace std;

int main (){
    int number;
    int b = 1;
    int sums = 0;

    cout << "enter a number: ";
    cin >> number;

    while (b < number){
        if (b%2 == 1){
            sums = sums + b;
        }
    b= b+1;
    }

    cout <<"The sum of odd numbers less than " <<number<< " is " <<sums;
}
