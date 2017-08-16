#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>

using namespace::std;

unsigned scores[11] = {};
unsigned grade;
int main(){
    while(cin >> grade){
        if(grade <= 100)
            ++scores[grade/10];
    }
    
    for(auto i : scores)
        cout << i << " ";
    cout << endl;
}