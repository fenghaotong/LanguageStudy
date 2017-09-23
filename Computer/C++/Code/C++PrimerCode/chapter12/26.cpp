/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-23
 * Time: 18:46pm
 *
 *  The code is the answer to exercise 26 of the twelfth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <algorithm> 

using namespace std;

int main(int argc, char **argv){
	size_t i = 0, n = 10;
	allocator<string> alloc;
	auto p = alloc.allocate(n);
	string s;
	auto q = p;
	
	cout << "input a string:";
	while(cin >> s && s != "end" && i <= n){
		alloc.construct(q++, s);
		i++;
		cout << "input a string:";
	}
	
	while(q != p)
		alloc.destroy(--q);

	alloc.deallocate(p, n);

	return 0;
} 