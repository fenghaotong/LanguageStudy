/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-20
 * Time: 11:20
 *
 * The code is the answer  to exercise 19 of the fifth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <vector>
#include <string>

using namespace::std;

int main(){
	do{
		string str1, str2;
		cout << "please input two string:";
		cin >> str1 >> str2;
		cout << (str1.size() < str2.size() ? str1 : str2) << endl;
	}while(cin);
	return 0;
}