
#include<iostream>
#include<string>
using namespace::std;

int main(){
    string s("hello world!!!");
    
    for(auto &c : s)
        c = toupper(c);
    
    cout << s << endl;
    
    return 0;
}