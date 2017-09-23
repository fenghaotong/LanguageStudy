/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-23
 * Time: 16:26pm
 *
 *  The code is the answer to exercise 24 of the twelfth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include<algorithm>  
#include <string.h>

using namespace std;

int main(int argc, char **argv){
	string str;
	size_t i = 0;
	unique_ptr<string[]> ustr(new string[2]);
	while(cin >> str && str != "end"){
		ustr[i] = str;
		++i;
	}
	
	for(size_t j = 0; j != i; ++j){
		cout << ustr[j] << endl;
	}
	ustr.release();
	return 0;
}