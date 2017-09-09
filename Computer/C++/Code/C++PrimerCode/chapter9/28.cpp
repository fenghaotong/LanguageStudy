/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-09
 * Time: 21:00pm
 *
 *  The code is the answer to exercise 28 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <deque>
#include <string>
#include <list>
#include <forward_list>

using namespace std;

void finsert(forward_list<string> &flst, string s1, string s2){
	forward_list<string>::iterator it1 = flst.before_begin();  
    forward_list<string>::iterator it2 = flst.begin();  
  
    bool flag = false;   
    for (it2; it2 != flst.end(); it1 = it2++)  
    {  
        if (*it2 == s1)  
        {  
            flst.insert_after(it2,s2);  
            flag = true;  
        }  
    }  
    if (!flag)  
    {  
        flst.insert_after(it1,s2);  
    }  
}

int main(int argc, char**argv){  
    forward_list<string> list1(4,"sadi");  
    string a = "sad5";  
    string b = "sad";  
  
    finsert(list1,a,b);  
  
    forward_list<string>::iterator it1 = list1.begin();  
    for (it1; it1!=list1.end();++it1)  
    {  
        cout<<*it1<<" ";  
    }  
    return 0;  
}  