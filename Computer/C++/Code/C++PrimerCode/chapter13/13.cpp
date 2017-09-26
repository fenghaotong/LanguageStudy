/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-26
 * Time: 21：17pm
 *
 *  The code is the answer to exercise 13 of the thirteen chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include<iostream>    
#include<string>    
#include<fstream>  
#include<list>  
#include<vector>   
#include<map>    
#include<set>  
#include<cctype>//ctype无法打开，包含tolower()函数和ispunct函数  
#include<algorithm>  
#include<utility>//保存pair的头文件  
#include<memory>  
using namespace std;  
  
class A  
{  
public:  
    A(int m):val(m)//默认构造函数  
    {  
        cout<<"默认构造函数"<<endl;  
    }  
    A& operator= (const A& a) //拷贝赋值运算符  
    {  
        val = a.val;  
        cout<<"拷贝复制运算符"<<endl;  
        return *this;  
    }  
    ~A()//析构函数  
    {  
        cout<<"析构函数"<<endl;  
    }  
    int val;  
  
};  
  
void show1(A& a)  
{  
    cout<<a.val<<endl;  
}  
void show2(A a)  
{  
    cout<<a.val<<endl;  
}  
int main(int argc, char**argv)    
{  
    //将A的对象当作引用或者非引用传递  
    A a(10);  
    A b(5);  
    A c(2);  
    c = a;  
    show1(a);  
    show2(b);  
    show2(c);  
    //存放于容器中  
    vector<A> m;  
    m.push_back(a);  
    //动态分配  
    A *d = new A(5);  
    show2(*d);  
    delete d;  
    return 0;  
}  