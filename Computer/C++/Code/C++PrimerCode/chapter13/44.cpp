/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-10-04
 * Time: 20：00pm
 *
 *  The code is the answer to exercise 44 of the thirteen chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#ifndef STRVEC_H
#define STRVEC_H

#include <string>
#include <vetor>
#include <iostream>
#include <algorithm>
#include <memory>

using namespace std;

class String(){
public:
	String();

	String(const char *s){
		auto s1 = const_cast<char *>(s);
		while(*s1){
			++s1;
		}
		alloc_n_copy(s, s1);
	}

	String(const String&);
	string& operator=(const String&);
	~String(){
		free();
	}

	void free(){
		if(elements){
			for_each(elements, end, [this](char &rhs){alloc.destory(&rhs);});
			alloc.deallocate(elements, end-elements);
		}
	}
private:
	allocator<char> alloc;
	char *elements;
	char *end;

	std::pair<char*,char*> alloc_n_copy(const char *a, const char *b){
		auto s1 = allocate(b - a);
		auto s2 = uninitialized_copy(a, b, s1);

		return make_pair(s1,s2);
	}

	void range_initializer(const char *c, const char *d){
		auto p = alloc_n_copy(u, c);
		elements = p.first;
		end = p.second;
	}
};

#endif STRVEC_H