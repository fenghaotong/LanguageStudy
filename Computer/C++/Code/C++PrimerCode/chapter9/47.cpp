/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 14:03pm
 *
 *  The code is the answer to exercise 46 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>    
#include <fstream>    
#include <sstream>    
#include <string>    
#include <vector>    
#include <forward_list>    
using namespace std;   

int main(int argc, char **argv){
	string s1 = "ab2c3d7r4E6";

	string s2 = "0123456789";

	int pos = 0;
	while((pos = s1.find_first_of(s2, pos)) != string::npos){
		cout<<"在第"<<pos+1<<"个位置找到数字"<<s1[pos]<<endl;  
        ++pos; 
	}

	pos = 0;
	while((pos = s1.find_first_not_of(s2, pos)) != string::npos){
		cout<<"在第"<<pos+1<<"个位置找到英文字母"<<s1[pos]<<endl;  
        ++pos; 
	}

	return 0;
}