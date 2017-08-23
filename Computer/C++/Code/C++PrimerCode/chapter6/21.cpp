/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 *  The code is the answer to exercise 21 of the sixth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include "chapter6.h"

int main(){
	string str1,str2;
	cout << "please input two string:";
	cin >> str1 >> str2;
	string *str3 = &str2;
	cout << compare(str1, str3) << endl;

	int num1,num2;
	cout << "please input two number:";
	cin >> num1 >> num2;
	int *num3 = &num1;
	int *num4 = &num2;

	cout << "before:" << endl;
	cout << *num3 << *num4 << endl;
	swit(num3,num4);
	cout << "after:" << endl;
	cout << *num3 << *num4 << endl;

	return 0;
}

string compare(string a, string *b){
	if (a > *b)
		return a;
	else
		return *b;

}

int swit(int* &a,int* &b){
	int *c = NULL;

	c = a;
	a = b;
	b = c;

	return 0;
}