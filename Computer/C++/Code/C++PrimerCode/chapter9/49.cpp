/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 14:25pm
 *
 *  The code is the answer to exercise 49 of the ninth chapter about the book "C++ Primer, Fifth Edition".
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

int main(int argc,char **argv){
	string s = "acemnorsuvwxz";

	ifstream infile("1.txt");
	string str;
	infile >> str;
	cout << "origin:" << str << endl;

	int pos1 = 0;
	int pos2 = 0;
	int pos3 = 0;
	int _length = 0;

	while((pos1 = str.find_first_of(s, pos1)) != string::npos){
		pos2 = pos1;
		if(str.find_first_not_of(s, pos2) != -1){
			if((pos2 = str.find_first_not_of(s, pos2)) != string::npos){
				if(pos2 - pos1 >= _length){
					_length = pos2 - pos1;
					pos3 = pos1;
				}
			}
		}else{
			pos2 = pos1;
			while((pos2 = str.find_first_of(s, pos2)) != string::npos){
				++pos2;
				if(pos2 - pos1 >= _length){
					_length = pos2 - pos1;
					pos3 = pos1;
				}
			}
		}
		++pos1;
		
	}

	string str2 = str.substr(pos3, _length);
	cout << "after:" << str2 << endl;
	return 0;
}