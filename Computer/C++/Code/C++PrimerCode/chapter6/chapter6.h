/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to head file of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11" 
#include <iostream>  
#include <string>  
#include <vector>  

using namespace std;  

int fact(int mumber);  
int fun(); 
int swit(int &i, int &j);
bool myReset(const string &s); //have or not capital letter
string myReset1(string &s); //capital to small letter
string compare(string a,string *b);
int swit(int* &a,int* &b);
int factorial(vector<int> v,int x);