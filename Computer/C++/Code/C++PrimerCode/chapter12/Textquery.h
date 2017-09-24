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
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <memory>
#include <sstream>
#include <algorithm>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending){
	return (ctr == 1) ? word:word + ending;
}

class QueryResult;
class TextQuery{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string&) const;
private:
	shared_ptr<vector<string>> file;
	map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is):file(new vector<string>){
	string text;
	while(getline(is, text)){
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);

		string word;
		while(line >>word){
			auto &lines = wm[word];
			if(!lines)
				lines.reset(new set<line_no>);

			lines->insert(n);
		}
	}
}

class QueryResult{
	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<TextQuery::line_no>> p, shared_ptr<vector<string>> f):sought(s), lines(p), file(f){}
private:
	string sought;
	shared_ptr<set<TextQuery::line_no>> lines;
	shared_ptr<vector<string>> file;
};

QueryResult TextQuery::query(const string &sought) const{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if(loc == wm.end())
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

ostream &print(ostream& os, const QueryResult &qr){
	os << qr.sought << " occurs " << qr.lines->size() << " "
	   << make_plural(qr.lines->size(), "time", "s") << endl;
	for (auto num : *qr.lines)
	{
		/* code */
		os << "\t(line " << num + 1 << ")"
		   << *(qr.file->begin() + num) << endl;
		return os;
	}
}