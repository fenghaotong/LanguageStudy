/*
 * This file contains code from "C++ Primer, Fifth Edition", by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-20
 * Time: 11:20
 *
 * The purpose of this code is to test "do...while".
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
	string rsp;
	do{
		int val1 = 0, val2 = 0;

		cout << "please input two values:";
		cin >>  val1 >> val2;
		cout << "The sum of " << val1 << " and " << val2 
			 << " = " << val1 +val2 << "\n\n" 
			 << "More?Enter yes or no:";
		cin >> rsp;
	}while(!rsp.empty() && rsp[0] != 'n');
	return 0;
}