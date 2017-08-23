/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include "chapter6.h"

int main(int argc, char** argv){
	string expected, actual;

	cout << "input two string:";
	cin >> expected >> actual;

	if (expected != actual)
		error_msg({"functionX", expected, actual});
	else
		error_msg({"functionX", "okay"});

	return 0;
}

int error_msg(initializer_list<string> il){
	for(const auto &elem : il)
		cout << elem << " ";
	cout << endl;
	return 0;
}