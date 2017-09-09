/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-09
 * Time: 20:30pm
 *
 *  The code is the answer to exercise 26 of the ninth chapter about the book "C++ Primer, Fifth Edition".
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
#include <list>  
using namespace std;  
  
int main(int argc, char**argv)  
{  
    int ia[] ={0,1,1,2,3,5,8,13,21,55,89};  
      
    vector<int> vec1(ia,ia+9);//拷贝操作  
    list<int> list1(ia,ia+9);  
  
    vector<int>::iterator it1 = vec1.begin();//使用迭代器  
    list<int>::iterator it2 = list1.begin();  
  
    while (it1 != vec1.end())//删除操作  
    {  
        if ((*it1)%2 == 0)  
        {  
            it1 = vec1.erase(it1);//将删除位置更新  
        }  
        else//若判断非偶数，则移到下一位置  
        {  
            ++it1;  
        }  
    }  
  
    while (it2 != list1.end())  
    {  
        if (*it2%2 != 0)  
        {  
            it2 = list1.erase(it2);//将删除位置更新  
        }  
        else//若判断非偶数，则移到下一位置  
        {  
            ++it2;  
        }  
    }  
      
    //验证结果  
    vector<int>::iterator it3 = vec1.begin();//需要重新定义临时迭代器  
    list<int>::iterator it4 = list1.begin();  
    for (it3;it3 != vec1.end(); ++it3)  
    {  
        cout<<*it3<<" ";  
    }  
    cout<<endl;  
    for (it4;it4 != list1.end(); ++it4)  
    {  
        cout<<*it4<<" ";  
    }  
      
    return 0;  
}  