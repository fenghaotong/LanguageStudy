/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-14
 * Time: 16:22pm
 *
 *  The code is the answer to exercise 9 of the tenth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>  
#include <string>  
#include <vector>  
#include <algorithm>  
#include <numeric>  
using namespace std;  
  
void elimDups(vector<string> &s)  
{  
    cout<<"排序前：";  
    for (int i = 0; i<s.size(); ++i)  
    {  
        cout<<s[i]<<" ";  
    }  
    cout<<endl<<"sort()排序后：";  
    sort(s.begin(),s.end());//sort排序  
    for (int i = 0; i<s.size(); ++i)  
    {  
        cout<<s[i]<<" ";  
    }  
    cout<<endl<<"unique()排序后：";  
    vector<string>::iterator str = unique(s.begin(),s.end());//unique排序  
    for (int i = 0; i<s.size(); ++i)  
    {  
        cout<<s[i]<<" ";  
    }  
    cout<<endl<<"erase()操作后：";  
    s.erase(str,s.end());//erase()操作  
    for (int i = 0; i<s.size(); ++i)  
    {  
        cout<<s[i]<<" ";  
    }  
  
}  
int main(int argc, char**argv)  
{  
    string a[10] = {"because","I","Like","Like","C++","very","very","much","that's","why"};  
    vector<string> s(a,a+10);  
    elimDups(s);  
  
    return 0;  
}  