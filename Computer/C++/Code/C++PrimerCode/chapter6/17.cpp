/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 17 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include "chapter6.h"

int main(){
	string str;

	cout << "please input a string:";
	cin >> str;

	auto str1 = myReset(str);

	if (str1 == true){
		myReset1(str);
		cout << str <<endl;
	}else{
		cout << "no capotal letter!";
	}
	return 0;
}

bool myReset(const string &s){
	for(int i = 0; i < s.size(); ++i){
		if (s[i] >= 'A' &&s[i] <= 'Z')
			return true;
	}
	return false;
}
string myReset1(string &s){
	for(int i = 0; i < s.size(); ++i){
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i]= s[i] + 32;
	}
	return s;
}