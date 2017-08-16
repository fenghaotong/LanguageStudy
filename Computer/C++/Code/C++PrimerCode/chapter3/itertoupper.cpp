#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>

using namespace::std;
        
int main(){
    string s("some string");
    for(auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    cout << s <<endl;
}