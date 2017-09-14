/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-14
 * Time: 15:13pm
 *
 *  The code is the answer to exercise 1 of the tenth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

int main(int argc, char **argv){
	vector<int> vec = {1,2,3,4,5,7,8,1,2,4,1,2};
	list<string> slist = {"hello","feng", "hao", "tong", "hello"};
	int val = 1;
	string val2 = "hello";


	auto result = count(vec.begin(), vec.end(), val);
	auto result2 = count(slist.begin(), slist.end(), val2);

	cout << val << " numbers: " << result << endl;
	cout << val2 << " numbers: " << result2 << endl;
	return 0;
}