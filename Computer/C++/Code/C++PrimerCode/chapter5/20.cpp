/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-20
 * Time: 14:40
 *
 * The code is the answer to exercise 20 of the fifth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <string>
#include <vector>

using namespace::std;

int main(){
	vector<string> my_str;
	string a;
	while(cin >> a && a != "exit")
		my_str.push_back(a);


	auto str_before = my_str.begin();
	auto str = my_str.begin() + 1;
	int i = 1;


	while(str != my_str.end()){
		if(*str != *str_before){
			str_before = str;
			++str;
		}else{
			++i;
			if(i == 2)
				cout << *str << endl;
				break;
		}
	}
	if(str == my_str.end()){
		cout << "no word repeat" << endl;
	}
	
	return 0;
}