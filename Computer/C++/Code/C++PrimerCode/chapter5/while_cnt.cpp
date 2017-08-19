#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>
#include <vector>

using namespace::std;
        
int main(){
    vector<string> v;
    string ch;
    
    while(cin >> ch && ch != "exit")
        v.push_back(ch);
    
    auto beg_before = v.begin();
    auto beg = ++beg_before;
    int cnt = 0;
    while(beg != v.end()){
        if(*beg == *beg_before){
            ++cnt;
            beg_before = beg;
            cout << cnt << endl;
            cout << *beg << endl;
        }else{
            cnt = 1;
            beg_before = beg;
            cout << cnt << endl;
            cout << *beg << endl;
        }
        ++beg;
    }
    return 0;
}