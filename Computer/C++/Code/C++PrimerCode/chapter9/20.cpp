/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-09
 * Time: 16:50pm
 *
 *  The code is the answer to exercise 20 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <deque>
#include <string>
#include <list>

using namespace std;

int main(int argc,char **argv){
	list<int> ilist = {1,2,3,4,5,6,7,8,9};
	deque<int> ideque1;
	deque<int> ideque2;

	for(auto iter = ilist.begin(); iter != ilist.end(); ++iter){
		if(*iter % 2 == 0)
			ideque1.push_back(*iter);
		else
			ideque2.push_back(*iter);
	}
    
    cout << "oushu:";

    for(auto deq1 = ideque1.begin(); deq1 != ideque1.end(); ++deq1){
    	cout << *deq1 << " ";
    }
    cout << endl;
    cout << "jishu:";
    for(auto deq2 = ideque2.begin(); deq2 != ideque2.end(); ++deq2){
    	cout << *deq2 << " ";
    }
    cout << endl;
	return 0;
}