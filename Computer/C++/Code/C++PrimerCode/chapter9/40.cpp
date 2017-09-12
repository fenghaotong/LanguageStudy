/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 09:50pm
 *
 *  The code is the answer to exercise 40 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>  
#include <fstream>  
#include <sstream>  
#include <string>  
#include <vector>  
#include <forward_list>  
using namespace std;  
  
void func(int val)  
{  
    vector<string> svec;  
    svec.reserve(1000);  
    string mystring = "string";  
    for (int i = 0; i < val; ++i)  
    {  
        svec.push_back(mystring);  
    }  
    svec.resize(svec.size()+svec.size()/2);  
    cout<<"输入"<<val<<"个词之后size"<<svec.size()<<endl;  
    cout<<"输入"<<val<<"个词之后capacity"<<svec.capacity()<<endl;  
}  
int main(int argc, char**argv)  
{  
    func(256);  
    func(512);  
    func(1000);  
    func(1024);  
  
    return 0;  
}  