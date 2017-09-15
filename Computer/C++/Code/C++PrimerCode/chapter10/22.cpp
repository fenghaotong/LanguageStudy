/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-15
 * Time: 16:18pm
 *
 *  The code is the answer to exercise 22 of the tenth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <algorithm>  
#include <numeric> 

using namespace std;
using namespace std::placeholders;

bool isShorter(const string &s, string::size_type sz){
	return s.size() <= sz;
}

int main(int argc, char **argv){
	string a[] = {"hello", "feng", "hao", "tong", "fenghaotong"};
	vector<string> svec(a, a + 5);
	int sz = 6;

	cout << "<6:" << count_if(svec.begin(), svec.end(), bind(isShorter, _1, sz)) << endl;
	return 0;
}