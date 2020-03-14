#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    // Chapter 3 STRING and VECTOR
    // string word;
    // while(getline(cin,word))
    // if(word.size() > 10)
    //     cout << word << endl;
    // else{
    //     break;
    // }
    // return 0;

    //Ex 3.6
    // string str;
    // cin >> str;
    // char cstr[str.size() + 1];
    // str.copy(cstr, str.size() + 1);
    // cstr[str.size()] = '\0';
    // for(int index = 0; index <= str.size(); index++){
    //     cstr[index] = 'X';
    // }
    // cout << cstr << endl;

    //Ex 3.8
    // string str2;
    // int n = 0;
    // while(cin >> str2){
    //     str2[n] = 'X';
    //     n++;
    //     if(n > str2.size()){
    //         break;
    //     }
    // }
    //Ex 3.12 VECTOR 
    // vector<string> svec(10, "null");

    //Ex 3.14
    // int x;
    // std::vector<int> v;
    // while(cin >> x){
    //     v.push_back(x);
    //     for(std::vector<int>::const_iterator i = v.begin(); i != v.end(); i++){ //print vector
    //         cout << *i << " ";
    //     }
    // }

    //Ex 3.15
    string s;
    std::vector<string> sv;
    while(cin >> s){
        sv.push_back(s);
        for(std::vector<string>::iterator a = sv.begin(); a != sv.end(); a++){
            cout << *a << " ";
        }
    }
}