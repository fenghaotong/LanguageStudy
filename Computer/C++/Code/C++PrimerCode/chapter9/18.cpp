/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-09
 * Time: 16:40pm
 *
 *  The code is the answer to exercise 18 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <deque>
#include <string>

using namespace::std;

int main(int argc, char **argv){
	string buf;
	deque<string> sdeque;
	while(cin >> buf && buf != "0"){
		sdeque.push_back(buf);
	}

	deque<string>::iterator de = sdeque.begin();

	for(de; de != sdeque.end(); ++de){
		cout << *de << endl;
	}
	return 0;
}