/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 4 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>

using namespace::std;

int fact(int member){
	if (member < 1){
		return 1;
	}else{
		return member * fact(member - 1);
	}	
}

int main(){
	int data;

	cout << "please input a data(int):";
	cin >> data;

	cout << fact(data) << endl;
	return 0;
}