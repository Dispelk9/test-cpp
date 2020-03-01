// Exercises Chapter 1 C++ Primer, Fifth Edition

#include <iostream>

using namespace std;
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
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    for (val = 1; val < 12; val++){
        sum += val; // assigns sum + val to sum
        
    }
    std::cout << "Sum of 1 to 10 inclusive is "

    << sum << std::endl;

    //Ex 1.15
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl;
    // error: missing quotes around string literal
    std::cout << "Update master." << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." << std::endl;
    // error: missing ; on return statement

    return 0;
}

