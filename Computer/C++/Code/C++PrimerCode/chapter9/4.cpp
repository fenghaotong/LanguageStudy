/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-08
 * Time: 19:00pm
 *
 *  The code is the answer to exercise 4 of the ninth chapter about the book "C++ Primer, Fifth Edition".
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

using namespace::std;

int main(int argc,char **argv){
	vector<int> vec(20);
	int find_number = 1;

	for(int i = 2; i <= 10; ++i){
		vec.push_back(i);
	}

	for(auto a = vec.begin(); a != vec.end(); ++a){
		if(*a == find_number){
			cout << "we find it" << endl;
			return 0;
		}
	}
	cout << "sorry!no find!" << endl;

	return 0;
}