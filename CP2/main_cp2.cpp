#include <iostream>
#include "Sales_data.h"

using namespace std;

 int main(){
     //Ex 2.1 2.2 2.3 2.4
    //  unsigned u = 10, u2 = 42;
    // std::cout << u2 - u << std::endl;   // normal
    // std::cout << u - u2 << std::endl;   // unpredicted unsigned?
    // int i = 10, i2 = 42;
    // std::cout << i2 - i << std::endl;   // normal
    // std::cout << i - i2 << std::endl;   // negative
    // std::cout << i - u << std::endl;    // Mix of unsigned and signed make unpredicted value

    //Ex 2.5
    // 'a';         character literal
    // "Hello";     string literal
    // "\n";        newline 
    // "\v";        vertical tab
    // "\t";        horizontal tab
    // "\\";        backlash
    // "\b";        backspace
    // "\a";        alert
    // "\"";        double quote
    // "\'";        single quote

    //Ex 2.6 2.7

    //Ex 2.8
    // cout << "2M \n";
    // cout << "2\tM\n";

    //Ex 2.9
    // std::cin >> int input_value;
    // int i = { 3.14 };
    // double salary = wage = 9999.99;
    // int i = 3.14;

    //Ex 2.11 declared, defined, defined.

    //SCOPE
    //Ex 2.13 always take value in scope first.
    // int ia = 429;
    // int j = ia;
    // cout << j << endl;
    //Ex 2.14
    // int x = 100, sum = 0;
    // for(int x = 0; x !=10; ++x){
    //     sum +=x;
    //     cout << x << sum << endl;
    // }

    //REFERENCE && POINTER
    int i = 42;
    int &r = i; // & follows a type and is part of a declaration; r is a reference
    int *p; // * follows a type and is part of a declaration; p is a pointer
    p = &i; // & is used in an expression as the address-of operator
    *p = i; // * is used in an expression as the dereference operator
    int &r2 = *p; // & is part of the declaration; * is the dereference operator
    int *p1 = nullptr; // equivalent to int *p1 = 0;
    int *p2 = 0; // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL; // equivalent to int *p3 = 0;

    //Ex 2,27 
    // int i = -1, &r = 0; // &r k bằng 1 giá trị được?
    // int *const p2 = &r;
    // const int i = -1, &r = 0;
    // const int *const p3 = &r;
    // const int *p1 = &r;
    // const int &const r2;  // thieu dau =
    // const int i2 = i, &r = i;

    //Ex 2.28
    // int i, *const cp;
    // int *p1, *const p2; //
    // const int ic, &r = ic; // &r address cannot be int?
    // const int *const p3;  // too many const?
    // const int *p;

    //Ex 2.29
    // i = ic;
    // p1 = p3;
    // p1 = &ic;
    // p3 = &ic;
    // p2 = p1;
    // ic = *p3;

    //Ex 2.32
    // int null = 0;
    // *p = null;

    // int ival = 1024;
    // int *pi = 0; // pi is a valid, null pointer
    // int *pi2 = &ival; // pi2 is a valid pointer that holds the address of ival
    // if (pi); // pi has value 0, so condition evaluates as false
    // // ...
    // if (pi2); // pi2 points to ival, so it is not 0; the condition evaluates as true
 
    //Ex 2.34 to 2.38 decltype and auto
    // Remember that decltype((variable)) (note, double parentheses) is always
    // a reference type, but decltype(variable) is a reference type only if variable
    // is a reference.

    // int a = 3, b = 4, &z = a;
    // decltype(a) c = a;   // not reference?
    // decltype((b)) d = a; //reference
    // ++c;
    // ++d;
    // cout << c << " and " << d << endl;

    // decltype((a)) k = a;
    // auto m = z;
    // cout << k << " and " << m << endl;

    //Ex 2.41
    Data_sales b1,b2;
    cout << "Input book 1 and book 2:" << endl;
    cin >> b1.Isbn >> b1.b_sold >> b1.b_price;
    cin >> b2.Isbn >> b2.b_sold >> b2.b_price;
    if (b1.Isbn == b2.Isbn){
        double Sum;
        b1.total = b1.b_sold * b1.b_price;
        b2.total = b2.b_sold * b2.b_price;
        Sum = b1.total + b2.total;
        cout << "b1.total" << b1.total << endl;
        cout << "b2.total" << b2.total << endl;
        cout << "Total: " << Sum << endl;
        return 0;
    }else{
        cout << "wrong ISBN" << endl;
        return -1;
    }

 }  
 