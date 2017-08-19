#pragma GCC diagnostic error "-std=c++11"  
#include<iostream>
#include<string>
#include <vector>

using namespace::std;
        
int main(){
    vector<int> v;
    int i;
    
    while(cin >> i){
        v.push_back(i);
    }
    
    auto beg = v.begin();
    while(beg != v.end() && *beg >= 0)
        ++beg;
    
    if(beg != v.end())
        cout << *beg << endl;
    else
        cout << "no" << endl;
    
    return 0;
}