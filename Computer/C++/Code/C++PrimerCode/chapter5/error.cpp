/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-20
 * Time: 15:40
 *
 * The purpose of this code is to test "try...catch".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "Sales_item.h"

using namespace::std;

int main(){
	Sales_item item1,item2;

	while(cin >> item1 >> item2){
		try{
			if (item1.isbn() != item2.isbn())
				throw runtime_error("Data must refer to same ISBN");
			cout << item1 + item2 << endl;
		}catch(runtime_error err){
			cout << err.what()
				 << "\nTry again?Enter y or n:" << endl;
			char c;
			cin >> c;
			if(!cin || c == 'n')
				break;
		}
	}
}