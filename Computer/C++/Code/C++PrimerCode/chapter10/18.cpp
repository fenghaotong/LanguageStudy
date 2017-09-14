/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-14
 * Time: 19:08pm
 *
 *  The code is the answer to exercise 18 of the tenth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>  
#include <string>  
#include <vector>  
#include <algorithm>  
#include <numeric>  
using namespace std; 

void elimDups(vector<string> &words){
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string> words, vector<string>::size_type sz){
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a,const string &b){return a.size() < b.size();});
    auto it = stable_partition(words.begin(), words.end(), [sz](const string &a){return a.size() <= sz;});
    for(it; it != words.end(); ++it){
    	cout << *it << " ";
    }

    cout << endl;
}

int main(int argc, char **argv){
	vector<string> words = {"hello", "my", "name", "is", "feng", "hao", "tong", "hello"};
	int sz = 3;
	biggies(words, sz);
	return 0;
}