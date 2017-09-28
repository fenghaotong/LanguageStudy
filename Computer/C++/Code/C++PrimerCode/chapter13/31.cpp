/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-26
 * Time: 23：00pm
 *
 *  The code is the answer to exercise 31 of the thirteen chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include<iostream>    
#include<string>  
#include<vector>  
#include<algorithm>  
using namespace std;  
  
class Hasptr1  
{  
    friend void swap(Hasptr1&,Hasptr1&);  
    friend bool operator<(const Hasptr1& s1,const Hasptr1& s2);  
    friend void show(vector<Hasptr1>& vec);  
public:  
    //构造函数，初始化相关成员  
    Hasptr1(const string& s = string()):ps(new string(s)),i(0),use(new size_t(1)){}  
  
    //拷贝构造函数，将引用计数也拷贝过来，并且递增引用计数  
    Hasptr1(const Hasptr1& p):ps(p.ps),i(p.i),use(p.use){++*use;}  
  
    //拷贝赋值运算符  
    Hasptr1& operator= (const Hasptr1& p1)  
    {  
        ++*p1.use;//首先递增右侧运算符对象的引用计数  
        if (--*use == 0)//递减本对象的引用计数，若没有其他用户，则释放本对象的成员  
        {  
            delete ps;  
            delete use;  
        }  
        ps = p1.ps;//进行拷贝  
        use = p1.use;  
        i = p1.i;  
        return *this;  
    }  
  
    //析构函数  
    ~Hasptr1()  
    {  
        if (*use == 0)//引用计数变为0，说明已经没有对象再需要这块内存，进行释放内存操作  
        {  
            delete ps;  
            delete use;  
        }  
    }  
private:  
    //定义为指针，是我们想将该string对象保存在动态内存中  
    string *ps;  
    size_t *use;//将计数器的引用保存  
    int i;  
};  
  
inline void swap(Hasptr1& a,Hasptr1& b)  
{  
    using std::swap;  
    swap(a.ps,b.ps);  
    std::swap(a.i,b.i);  
    cout<<"123";  
}  
  
bool operator< (const Hasptr1& s1,const Hasptr1& s2)  
{  
    cout<<"定义的 Operator< 被调用"<<endl;  
    return *s1.ps < *s2.ps;  
}  
  
void show(vector<Hasptr1>& vec)  
{  
    vector<Hasptr1>::iterator it1 = vec.begin();  
    for (it1; it1 != vec.end(); ++it1)  
    {  
        cout<<*(it1->ps)<<endl;  
    }  
}  
int main(int argc, char**argv)    
{  
    vector<Hasptr1> vec1;  
    Hasptr1 a("l");  
    Hasptr1 b("llll");  
    Hasptr1 c("lll");  
    vec1.push_back(a);  
    vec1.push_back(b);  
    vec1.push_back(c);  
    vector<Hasptr1>::iterator it1 = vec1.begin();  
    sort(vec1.begin(),vec1.end());  
    show(vec1);  
    return 0;  
}    