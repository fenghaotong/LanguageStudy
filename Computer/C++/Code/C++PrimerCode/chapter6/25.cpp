/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 25 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include "chapter6.h"

int main(int argc,char**argv){
	string str;
	for (int i = 1;i != argc; ++i){
		str += argv[i];
		str += " ";
	}
	cout << str << endl;
	return 0;
}