/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 10:35pm
 *
 *  The code is the answer to exercise 43 of the ninth chapter about the book "C++ Primer, Fifth Edition".
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
            it1 = s.erase(it1,it1+_size);//返回的是最后一个被删除的元素之后的位置    
            s.insert(it1, it2,it3);//原因在于insert()函数返回了指向第一个插入字符的迭代器，而我将其直接赋值给it1，从const转为非const，类型不同，产生错误    
            advance(it1,_size);//向前_size大小，目的是为了让it1仍然指向当前字符串的首位置，因为前面进行了++it1  
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