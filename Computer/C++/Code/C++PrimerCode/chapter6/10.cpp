/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 10 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>
#include "chapter6.h"

using namespace::std;

int main(){
	int a ,b;

	cout << "please input two int data:";
	cin >> a >> b;
	cout << "before" << endl;
	cout << "a = " << a << "b = " << b << endl;

	swit(a,b);

	cout << "a = " << a << "b = " << b << endl;
	return 0;
}

int swit(int &i, int &j){
	int a;
	a = i;
	i = j;
	j = a;
	return 0;
}