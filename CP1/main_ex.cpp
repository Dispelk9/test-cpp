// Exercise Chapter 1 C Primer 

#include <iostream>

using namespace std;
using std::cin;
using std::cout;

//Ex 1.1 

// int main(){
//     return 0;
// }

//Ex 1.2

// int main(){
//     return -1;
// }

//Ex 1.3

// int main(){
//     cout << "Hello, World!!!" << endl;
// }

//Ex 1.4

// int main(){
//     cout << "Enter 2 numbers:" << endl;
//     int v1 = 0;
//     int v2 = 0;
//     cin >> v1 >> v2;
//     cout << "Sum: " << v1 + v2 << endl;
//     cout << "Product: " << v1 * v2 << endl;
//     return 0;
// }

//Ex 1.5, 1.6 not relevant

//Ex 1.7, 1.8 

// int main(){
//     cout << "/*";
//     cout << "*/";
//     cout << /* "*/" */";
//     cout << /* "*/" /* "/*" */;
// }

//Ex 1.9 to 1.11
int main(){
    int n = 50;
    while(1){
        n++;
        if (n == 100){
            break;
        }
    }
    cout << n << endl;
    
    int m = 10;
    while(1){
        m--;
        if (m==0){
            break;
        }
    }
    cout << m << endl;

    while(1){
        cout << m++ << endl;
        if (m == n){
            break;
        }
    }
    return 0;


}
