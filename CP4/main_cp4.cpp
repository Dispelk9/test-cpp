#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main(){
    //Ex 4.1
    //return 105

    //Ex 4.2

    //Ex 4.3

    //Ex 4.4

    //Ex 4.5
    // cout << -30 * 3 + 21 / 5 << endl; //-86
    // cout << -30 + 3 * 21 / 5 << endl; //-18
    // cout << 30 / 3 * 21 % 5 << endl;  //0
    // cout << -30 / 3 * 21 % 4 << endl; //-2

    // //Ex 4.6
    // int v;
    // while(cin >> v){
    //     if (v % 2 == 0){
    //         cout << "even" << endl;
    //     }else{
    //         cout << "odd" << endl;
    //     }
    // }
    // //Ex 4.7
    // short short_value = 32767; // max value if shorts are 16 bits
    // short_value += 1; // this calculation overflows
    // cout << "short_value: " << short_value << endl;
    // // int range, use calculation make these values out of range, then we make it overflows

    // //Ex 4.8
    // // The right side of an && is evaluated if and only if the left side is true.  && is logical AND
    // // The right side of an || is evaluated if and only if the left side is false. || is logical OR

    // //Ex 4.9
    // const char *cp = "Hello World";
    // if (cp && *cp){
    //     /* 
    //         Condition only occur when cp is non zero, if then then check if pointer of cp is non zero or not
    //     */
    // }

    // //Ex 4.10
    // int x;
    // while( cin >> x ){
    //     if(x > 42){
    //         break;
    //     }
    // }

    // //Ex 4.11
    // int a,b,c,d;
    // bool v = true;
    // while(v == true){
    //     cin >> a >> b >> c >> d;
    //     if (a < b){
    //         cout << " a must bigger than b" << endl;
    //     }
    //     if(b < c){
    //         cout << " b must bigger than c" << endl;
    //     }
    //     if(c < d){
    //         cout << " c must bigger than d" << endl;
    //     }
    //     if(a > b && b > c && c > d){
    //         v = false;
    //     }
    // }
    // cout << a << ' ' << b << ' ' << c << ' ' << d << endl; 

    //Ex 4.12
    // i < j < k show that the condition if is true if k is bigger than 1 ( 1 is true of the first comparison)
    // if i < j then it is true which means it equal 1
    // i != j < k means if(i != j < k) = true when i is different from j and k is bigger than 1.

    //Ex 4.13
    // d = i = 3.5 when i is int , make d = 3
    // double d , int i

    //Ex 4.14
    // 1 error
    // 2 i = true

    //Ex 4.15
    // cannot assign int to pointer

    //Ex 4.16
    // // if (p = getPtr() != 0)
    // the first comparison will produce a boolean 1 or 0 and it will be compared with zero
    // right condition i assume is if(p = getPtr() && p != 0)
    // // if (i = 1024) just make 1024 to true

    //Ex 4.17
}