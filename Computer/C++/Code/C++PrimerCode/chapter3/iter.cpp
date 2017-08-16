#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>

using namespace::std;
        
int main(){
    string s("some string");
    if(s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s <<endl;
}