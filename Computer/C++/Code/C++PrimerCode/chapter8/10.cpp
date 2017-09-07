/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-30
 * Time: 10:00am
 *
 *  The code is the answer to exercise 10 of the eighth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace::std;

int main(int argc,char **argv){
	string infile = "1.txt";
	vector<string> vec;
	ifstream in(argv[1]);

	if(in){
		string buf;
		while(getline(in, buf)){
			vec.push_back(buf);
		}
	}else{
		cerr << "cannot open this file: " << infile << endl;
	}

	for(int i = 0; i < vec.size(); ++i){
		istringstream iss(vec[i]);
		string word;
		while(iss >> word){
			cout << word << endl;
		}
	}
	return 0;
}
