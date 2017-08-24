/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 37 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 

#include "chapter6.h"

int printVec(vector<int>& vec){  
#ifndef NDEBUG  
    cout << "vector size: " << vec.size() << endl;  
#endif  
    if (!vec.empty())   
    {  
        auto tmp = vec.back();  
        vec.pop_back();  
        printVec(vec);  
        cout << tmp << " ";  
    }  
    return 0;
}  
int main(int argc, char** argv){  
    vector<int> vec;
    int i = 0;
    int a;
    while(i < 10){
    	cin >> a;
    	vec.push_back(a);
    	++i;
    }
    printVec(vec);  
    cout << endl;  
    return 0;  
} 