/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-20
 * Time: 20:00pm
 *
 *  The code is the answer to exercise 7 of the elevnth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>    
#include <string>    
#include <vector>  
#include <memory>  
#include <list>  
using namespace std;    
  
//返回一个动态分配的vector,看第六题的意思是不用只能指针，那么将类型改为vector<int> *就好了  
shared_ptr<vector<int>> vector_i()  
{  
      
    shared_ptr<vector<int>> _ptr(new vector<int>);  
    return _ptr;  
}  
  
//给vector赋值  
void vector_j(shared_ptr<vector<int>> _ptr)  
{  
    int int_val;  
    while (cin>>int_val && int_val != 0)  
    {  
        _ptr->push_back(int_val);  
    }  
}  
  
//打印vector的值  
void vector_k(shared_ptr<vector<int>> _ptr)  
{  
    for (size_t i = 0; i < (*_ptr).size(); ++i)  
    {  
        cout<<(*_ptr)[i]<<endl;  
    }  
}  
  
int main(int argc,char **argv)    
{  
    shared_ptr<vector<int>> my_ptr = vector_i();  
    vector_j(my_ptr);  
    vector_k(my_ptr);  
    return 0;  
}    