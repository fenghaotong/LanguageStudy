/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 33 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include "chapter6.h"

int main(int argc, char** argv){
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> v(a, a+10);
	factorial(v, v.size() - 1);
	return 0;
}

int factorial(vector<int> v,int x){
	if(x != -1){
		cout << v[x] << endl;
		x--;
		factorial(v, x);
	}
	return 0;
}