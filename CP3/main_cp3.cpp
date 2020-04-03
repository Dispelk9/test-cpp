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
    // ARRAYs , same like vector, but with fixed range

    //Ex 3.27
    //Ex 3.28
    // string sa[3];
    // int    ia[3];
    // cout << sa << endl;
    // cout << ia << endl;
    // // they both give some arbitrary number.

    // //Ex 3.29
    // unsigned scores[11] = {};
    // unsigned grade;
    // while(cin >> grade){
    //     if (grade <= 100)
    //     ++scores[grade/10];
    // }
    // cout << scores << endl;

    //Ex 3.37
    // const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    // const char *cp = ca;
    // while (*cp) {
    //     cout << *cp << endl;
    //     ++cp;
    // }

    //Ex 3.38 Pointers contain addresses. 
    // Adding two addresses makes no sense, because you have no idea what you would point to. 
    // Subtracting two addresses lets you compute the offset between these two addresses, 
    // which may be very useful in some situations.

    //Ex 3.39
    // string str1;
    // string str2;
    // cin >> str1;
    // cin >> str2;

    // // cout << str1 << endl;
    // // cout << str2 << endl;
    // const char *c1 = str1.c_str();
    // const char *c2 = str2.c_str();

    // // cout << c1 << endl;
    // // cout << c2 << endl;

    // if(strcmp(c1,c2) == 0){
    //     cout << "equal" << endl;

    // }else{
    //     cout << "not equal" << endl;
    // }
    // //Ex 3.40
    // int n = str1.length() + str2.length();
    // char a[n];
    // strcpy(a,str1.c_str());
    // strcat(a," ");
    // strcat(a,str2.c_str());
    // cout << a << endl;

    //Ex 3.41
    // int from array to vector
    // int a[] = {1,2,3,4};
    // vector<int> b (begin(a),end(a));
    // for(int i:b){
    //     cout << i << endl;
    // }

    //Ex 3.42
    //int from vector to array

    vector<int> c = {1,2,3,4};
    int n = size(c);
    int a[n];
    for(int i = 0;i < n;i++){
        a[i] = c[i];
        cout << a[i] << endl;
    }
    
}