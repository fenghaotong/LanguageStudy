/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 56 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include "chapter6.h"
  
int add(int a, int b)  
{  
    return a+b;  
}  
int subtract(int a, int b) { return a - b; }  
int multiply(int a, int b) { return a * b; }  
int divide(int a, int b) { return b != 0 ? a / b : 0; }//声明定义函数  
  
int main(int argc, char** argv)  
{  
    typedef int(*p)(int a, int b);  
    vector<p> vec; 
    int i;
    
    while(cin >> i && i != 0){
    	switch(i){
    		case 1:
    			vec.push_back(add);
    			break;
    		case 2:
    			vec.push_back(subtract);
    			break;
    		case 3:
    			vec.push_back(multiply);
    			break;
    		case 4:
    			vec.push_back(divide);
    			break;
    		default:
    			break;
    	}
    }
    for (auto f : vec)  
        cout << f(2, 2) <<endl;  
    return 0;  
}  