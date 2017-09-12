/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 10:35pm
 *
 *  The code is the answer to exercise 44 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include<iostream>    
#include<fstream>    
#include<sstream>    
#include<string>    
#include<vector>    
#include<forward_list>    
using namespace std;    
  
void func(string &s, string &oldVal, string &newVal)    
{    
    int _size = oldVal.size();    
    string::iterator it1 = s.begin();    
    string::iterator it2 = newVal.begin();    
    string::iterator it3 = newVal.end();    
  
    for (it1; it1 <= (s.end()-oldVal.size()+1); ++it1)    
    {    
        //pos可以由两个迭代器相减得到,返回截取到的string    
        if((s.substr(it1-s.begin(),_size) == oldVal))//substr()的作用就是截取string中的一段    
        {    
            s.replace(it1 - s.begin(), _size, newVal) 
        }    
    }    
}    
  
int main(int argc, char**argv)    
{    
    string s = "abcdefg";    
    string oldval = "bc";    
    string newval = "asas";    
    func(s,oldval,newval);    
    cout<<s<<endl;    
    system("pause");  
    return 0;    
}  