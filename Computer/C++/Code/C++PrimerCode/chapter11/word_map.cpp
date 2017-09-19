/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-19
 * Time: 20:04pm
 *
 *  The code is the answer to exercise 32 of the elevnth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>    
#include <string>    
#include <fstream>  
#include <list>  
#include <vector>   
#include <map>    
#include <set>  
#include <sstream>
 
using namespace std;  

map<string, string> buildMap(ifstream &map_file){
	map<string, string> trans_map;
	string key;
	string value;

	while(map_file >>key && getline(map_file, value)){
		if(value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no file for" + key);
	}

	return trans_map;
}

const string &transform(const string &s, const map<string, string> &m){
	auto map_it = m.find(s);
	if(map_it != m.end())
		return map_it->second;
	else
		return s;
}

void word_transform(ifstream &map_file, ifstream &input){
	auto trans_map = buildMap(map_file);

	string text;
	while(getline(input, text)){
		istringstream stream(text);
		string word;
		bool firstword = true;
		while(stream >> word){
			if(firstword)
				firstword = false;
			else
				cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}

int main(int argc, char **argv){
	ifstream map_file("word.txt");
	ifstream input("input.txt");
	word_transform(map_file, input);
	return 0;
} 