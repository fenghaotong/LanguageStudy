/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-12
 * Time: 10:40pm
 *
 *  The code is the answer to exercise 45 of the ninth chapter about the book "C++ Primer, Fifth Edition".
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

void Append(string &s, string &front, string &back){
	string::iterator it1 = front.begin(), it2 = front.end();
	s.append(back);
	s.insert(s.begin(), it1, it2);
}

int main(int argc, char **argv){
	string s = "hello";
	string front = "Mr. ";
	string back = " III";

	Append(s, front, back);

	cout << s << endl;
	return 0;
} 