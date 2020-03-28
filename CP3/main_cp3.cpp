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
    // string s;
    // std::vector<string> sv;
    // while(cin >> s){
    //     sv.push_back(s);
    //     for(std::vector<string>::iterator a = sv.begin(); a != sv.end(); a++){
    //         cout << *a << " ";
    //     }
    // }

    //Ex 3.16
    // vector<int> v4{10};
    // vector<int> v5{10, 42};
    // vector<string> v6{10};
    // vector<string> v7{10, "hi"};
    // for(std::vector<int>::iterator a = v4.begin(); a != v4.end(); a++){
    //     cout << *a << " " << endl;
    // }
    // cout << size(v4) << endl;
    // for(std::vector<int>::iterator a = v5.begin(); a != v5.end(); a++){
    //     cout << *a << " " << endl;
    // }
    // cout << size(v5) << endl;
    // for(std::vector<string>::iterator a = v6.begin(); a != v6.end(); a++){
    //     cout << *a << " " << endl;
    // }
    // cout << size(v6) << endl;
    // for(std::vector<string>::iterator a = v7.begin(); a != v7.end(); a++){
    //     cout << *a << " " << endl;
    // }
    // cout << size(v7) << endl;

    //Ex 3.17
    // string s;
    // vector<string> stv;
    // while(cin >> s)
    // {
    //     stv.push_back(s);
    // }
    // for( auto &c : stv){
    //     for(auto &d : c){
    //         d = toupper(d);
    //     }
    // }
    // const unsigned perLine = 8 ;
    // decltype(stv.size()) wordCount ;

    // for ( wordCount = 0; wordCount != stv.size() ; ++wordCount )
    // {
    //     std::cout << stv[wordCount] << ' ' ;
    //     if ( (wordCount + 1) % perLine == 0 )  // evenly divisible?
    //         std::cout << '\n' ;
    // }

    // if ( wordCount % perLine != 0 )
    //     std::cout << '\n' ;
    // return 0;

    //Ex 3.18
    // vector<int> i;
    // i[0] = 42;

    //Ex 3.20

    // vector<int> i;
    // int n,sum;
    // while(cin >> n){
    //     i.push_back(n);
    // }
    // int e = i.size();
    // cout << e << endl;
    // cout << "ans" << endl;
    // for(int a = 0; a != i.size()/2; a++){
    //     sum = i[a] + i[e - 1];
    //     cout << sum << endl;
    //     e = e -1;
    // }

    // ITERATORS
    
}