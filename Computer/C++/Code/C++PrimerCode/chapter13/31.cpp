/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-26
 * Time: 23：00pm
 *
 *  The code is the answer to exercise 31 of the thirteen chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class HasPtr1{
	friend void swap(HasPtr1&, HasPtr1&);
	friend bool operator<(const HasPtr1& s1,const HasPtr1& s2);
	friend void show(vector<HasPtr1>& vec);

public:
	HasPtr1(const string& s = string()):ps(new string(s)),i(0),use(new size_t(1)){}

	HasPtr1(const HasPtr1& p):ps(p.ps), i(p.i), use(p.use){++*use;}

	HasPtr1& operator= (const HasPtr1& p1){
		++*p1.use;
		if(--*use == 0){
			delete ps;
			delete use;
		}
		ps = p1.ps;
		i = p1.i;
		use = p1.use;

		return *this;
	}

	~HasPtr1(){
		if(*use == 0){
			delete ps;
			delete use;
		}
	}
private:
	string *ps;
	size_t *use;
	int i;
};

inline void swap(HasPtr1& a,HasPtr1& b){
	using std::swap;
	swap(a.ps, b.ps);
	std:swap(a.i, b.i);
	cout << "123";
}

bool operator<(const HasPtr1& s1, const HasPtr1& s2){
	cout << "< is called" << endl;
	return *s1.ps < *s2.ps;
}

void show(vector<HasPtr1>& vec){
	vector<HasPtr1>::iterator it1 = vec.begin();
	for(it1; it1 != vec.end(); ++it1){
		cout << *(it1->ps) << endl;
	}
}

int main(int argc, char **argv){
	vector<HasPtr1> vec1;
	HasPtr1 a("1");
	HasPtr1 b("1111");
	HasPtr1 c("111");
	vec1.push_back(a);
	vec1.push_back(b);
	vec1.push_back(c);

	vector<HasPtr1>::iterator it1 = vec1.begin();
	sort(vec1.begin(), vec1.end());
	show(vec1);

	return 0;
}