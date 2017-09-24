/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-24
 * Time: 16:22pm
 *
 *  The code is the answer to exercise  of the twelfth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include "Textquery.h"

using namespace std;

void runQueries(ifstream &infile){
	TextQuery tp(infile);
	while(true){
		cout << "enter word to look for, or q to quit:";

		string s;
		if(!(cin >> s) || s == "q") break;

		print(cout, tp.query(s)) << endl;
	}
}
int main(int argc, char **argv){

	ifstream file("2.txt");
	runQueries(file);
    return 0;
}