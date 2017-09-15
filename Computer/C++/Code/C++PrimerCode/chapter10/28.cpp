/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-15
 * Time: 17:09pm
 *
 *  The code is the answer to exercise 28 of the tenth chapter about the book "C++ Primer, Fifth Edition".
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
#include <functional>  
#include <iterator>  
#include <list>
using namespace std;  
using namespace placeholders;//占位符的命名空间  
  
int main(int argc, char**argv)    
{    
    int a[10] = {1,2,3,4,5,6,7,8,9};    
    vector<int> vec1(a,a+9);//利用数组初始化vector    
    vector<int> vec2;  
    list<int> vec3;  
    vector<int> vec4;  
  
    //实现包含头文件iterator  
    copy(vec1.cbegin(),vec1.cend(),back_inserter(vec2));  
    copy(vec1.cbegin(),vec1.cend(),front_inserter(vec3));//不支持push_front?,vector这个容器不支持  
    copy(vec1.cbegin(),vec1.cend(),inserter(vec4,vec4.begin()));  
  
    cout<<"vec2字符为：";  
    for (int i = 0; i<vec2.size(); ++i)  
    {  
        cout<<vec2[i]<<" ";  
    }  
    cout<<endl<<"vec3字符为：";  
    for (auto i = vec3.begin(); i != vec3.end(); ++i)  
    {  
        cout<<*i<<" ";  
    }  
    cout<<endl<<"vec4字符为：";  
    for (int i = 0; i<vec4.size(); ++i)  
    {  
        cout<<vec4[i]<<" ";  
    }  
    return 0;    
}    