// Exercises Chapter 1 C++ Primer, Fifth Edition

#include <iostream>
#include <vector>
#include "Sales_item.h"

using std::endl;
using std::cin;
using std::cout;

int main(){

    //Ex 1.1 to 1.3
    //     cout << "Hello, World!!!" << endl;
    //Ex 1.4

    //     cout << "Enter 2 numbers:" << endl;
    //     int v1 = 0;
    //     int v2 = 0;
    //     cin >> v1 >> v2;
    //     cout << "Sum: " << v1 + v2 << endl;
    //     cout << "Product: " << v1 * v2 << endl;

    //Ex 1.5, 1.6 not relevant

    //Ex 1.7, 1.8 
    //     cout << "/*";
    //     cout << "*/";
    //     cout << /* "*/" */";
    //     cout << /* "*/" /* "/*" */;

    //Ex 1.9 to 1.11
    //     int n = 50;
    //     while(1){
    //         n++;
    //         if (n == 100){
    //             break;
    //         }
    //     }
    //     cout << n << endl;
        
    //     int m = 10;
    //     while(1){
    //         m--;
    //         if (m==0){
    //             break;
    //         }
    //     }
    //     cout << m << endl;

    //     while(1){
    //         cout << m++ << endl;
    //         if (m == n){
    //             break;
    //         }
    //     }

    // Ex 1.12
    // 1.12 increase 200 time from -100 to 100. sum = 0
    // int sum = 0;
    // for (int i = -100; i <= 100; i++){
    //     sum += i;
    // }
    // cout << sum << endl;

    //Ex 1.13
    // int sum = 0, val = 1;
    // // keep executing the while as long as val is less than or equal to 10
    // for (val = 1; val < 12; val++){
    //     sum += val; // assigns sum + val to sum
        
    // }
    // std::cout << "Sum of 1 to 10 inclusive is "

    // << sum << std::endl;

    // //Ex 1.15
    // // error: used colon, not a semicolon, after endl
    // std::cout << "Read each file." << std::endl;
    // // error: missing quotes around string literal
    // std::cout << "Update master." << std::endl;
    // // error: second output operator is missing
    // std::cout << "Write new master." << std::endl;
    // // error: missing ; on return statement

    //Ex 1.16
    // int sum = 0;
    // while(1){
    //     int x;
    //     cout << "Input number, finish with zero:" << endl;
    //     cin >> x;
    //     sum = sum +x;
    //     if (x == 0){
    //         break;
    //     }
    // }
    // cout << "Result:" << endl;
    // cout << sum << endl;

    //Ex 1.17
    // // currVal is the number we're counting; we'll read new values into val
    // int currVal = 0, val = 0;
    // // read first number and ensure that we have data to process
    // if (std::cin >> currVal) {
    //     int cnt = 1; // store the count for the current value we're processing
    //     while (std::cin >> val) { // read the remaining numbers
    //         if (val == currVal) // if the values are the same
    //             ++cnt; // add 1 to cnt
    //         else { // otherwise, print the count for the previous value
    //             std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    //             currVal = val; // remember the new value
    //             cnt = 1; // reset the counter
    //          }
    //     } // while loop ends here
    // // remember to print the count for the last value in the file
    // std::cout << currVal << " occurs "
    // << cnt << " times" << std::endl;
    // } // outermost if statement ends here

    //Ex 1.18  the input values are equal, so the if func won't run. 

    //Ex 1.19
    // int v1, v2;
    // cout << "Input v1: " << endl;
    // cin >> v1;
    // cout << "Input v2: " << endl;
    // cin >> v2;
    // int sum = 0, val = 0;
    // if (v1 < v2){
    //     val = v1;
    //     while (val < v2){
    //         sum += val;
    //         val++;
    //     }
    // }else{
    //     val = v2;
    //     while(val < v1){
    //         sum += val;
    //         val++;
    //     }
    // }
    // cout << "sum: " << sum << endl;
    
    //Ex 1.20 to 1.22 to 1.25
    int w = 2;
    string y;
    bool a = true;
    Sales_item trans,sum;
    int cnt = 0;
    while(w > 1){

        // Enter the book
        cout << "Enter the book:" << endl;
        cin >> trans;

        if(trans.isbn() == sum.isbn()){
            sum = sum + trans;
            cnt++;
        }else{
            cout << "New ISBN, do not add" << endl;
            cout << "Total sum with " + sum.isbn() + " equal: " << sum << " with " << cnt << " transactions " << endl;
            // Insert the new transactions to sum
            sum = trans;
            cnt = 1;
        }

        // Loop to continue add or break
        cout << "Continue?" << endl;
        cin >> y;
        if (y == "y"){
            a = true;
        }else if(y == "n"){
            a = false;
        }
        if (a == false){
            break;
        }
        
    }
    //cout << "Total sum with " + item1.isbn() + " equal: " << sum << endl;
    return 0;

    
}

