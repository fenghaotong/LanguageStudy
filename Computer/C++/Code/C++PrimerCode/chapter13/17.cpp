/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-26
 * Time: 21：40pm
 *
 *  The code is the answer to exercise 17 of the thirteen chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <string>

using namespace std;

class numbered {
public:
    numbered(){
    	static int val1 = 10;
    	val = val1 + 10;
    	cout << "moren" << endl;
    }

    // numbered(numbered& a){
    // 	val = a.val + 5;
    // 	cout << "kaobei" << endl;
    // }

    int val;
};

void show1(numbered s){
	cout << s.val << endl;
}

void show2(numbered& s){
	cout << s.val << endl;
}

int main(int argc, char **argv){
	numbered a, b = a,c = b;
	show1(a);
	show1(b);
	show1(c);

	show2(a);
	show2(b);
	show2(c);

	return 0;
}