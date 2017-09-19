/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-9-7
 * Time: 17:00am
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

struct PersonInfo{
	string name;
	vector<string> phones;
};

int main(int argc,char **argv){
	string line, word;
	vector<PersonInfo> people;

	while(getline(cin, line)){
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while(record >> word){
			info.phones.push_back(word);
		}
		people.push_back(info);
	}

	for(const auto &entry : people){
		ostringstream formatted, badNums;
		for(const auto &nums : entry.phones){
			if(!valid(nums)){
				badNums << " " << nums;
			}else{
				formatted << " " << format(nums);
			}
		}
		if(badNums.str().empty())
			cout << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name << " invalid number(s)" << badNums.str() << endl;
	}

	
	return 0;
}
