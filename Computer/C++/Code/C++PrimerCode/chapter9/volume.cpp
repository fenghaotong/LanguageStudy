/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-012
 * Time: 09:00am
 *
 *  The code is page 318 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc,char **argv){
	vector<int> vec;
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	for(vector<int>::size_type ix = 0; ix != 24; ++ix){
		vec.push_back(ix);
	}
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	vec.reserve(50);
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	while(vec.size() != vec.capacity())
		vec.push_back(0);
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	vec.push_back(42);
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	vec.shrink_to_fit();
	cout << "vec.size:" << vec.size()
		 << "vec.capacity:" << vec.capacity() << endl;

	return 0;
}