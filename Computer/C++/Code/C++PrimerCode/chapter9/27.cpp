/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-09
 * Time: 21:00pm
 *
 *  The code is the answer to exercise 27 of the ninth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <deque>
#include <string>
#include <list>
#include <forward_list>

using namespace std;

int main(int argc,char **argv){
	forward_list<int> flst = {1,2,3,4,5,6,7,8,9,0};
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while(curr != flst.end()){
	    if(*curr % 2)
	        curr = flst.erase_after(prev);
	    else{
	    	prev = curr;
	        ++curr;
	    }       
	}
    
    cout << "oushu:";

    for(auto deq1 = flst.begin(); deq1 != flst.end(); ++deq1){
    	cout << *deq1 << " ";
    }

    cout << endl;
	return 0;
}