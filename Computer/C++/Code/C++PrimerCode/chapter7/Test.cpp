/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-22
 * Time: 15:57
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#include <iostream>
#include <string>

using namespace::std;

class Test{
public:
	Test(string s, int a, int b):book(s),price(a),sale(b){cout<<"Test(string s, int a, int b)"<<endl;} //三参数构造函数的参数列表和函数体首先被执行
	Test():Test(" ",0,0){}//默认构造函数又委托给了三参数构造函数
	Test (istream& is):Test(){cout<<"Test (istream& is)"<<endl;}//Test (istream& is)是一个委托构造函数，它委托给了默认构造函数Test()

	string book;
	int price;
	int sale;
};

int main(){
	Test s(cin);
	return 0;
}