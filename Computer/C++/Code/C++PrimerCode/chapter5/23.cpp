/*
 * This code is writed by htfeng.
 * 
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-20
 * Time: 15:40
 *
 *  The code is the answer to exercise 23 of the fifth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 * 
 * Email:1054708869@qq.com
*/ 
#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <stdexcept>
#include <string>

using namespace::std;

int main(){

	int a,b,c;

	while(1){

		cin >> a;
		cin >> b;

		try{
			if(b == 0)
				throw runtime_error("Data b input error");
			c = a/b;

		}catch(runtime_error err){
			cout << "\nerror!Try again? Enter y or n:" <<endl;
			char i;
			cin >> i;
			if (!cin || i == 'n')
				break;
		}
	}

	cout << c << endl;
	
    return 0;
}