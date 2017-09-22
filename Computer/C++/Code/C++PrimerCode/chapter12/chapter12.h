#include <iostream>
#include<string>    
#include<fstream>  
#include<list>  
#include<vector>   
#include<algorithm>  
#include<memory>
#include<stdexcept>
#include<initializer_list>
#include<iterator>

using namespace std;

class StrBlobPtr;


class StrBlob{
	friend class StrBlobPtr;
public:
	StrBlobPtr begin();
	StrBlobPtr end();
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}
	//add and delete
	void push_back(const string &t) {data->push_back(t);}
	void pop_back();
	//visit
	string &front();
	string &back();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

inline void StrBlob::check(size_type i, const string &msg) const{
	if(i >= data->size())
		throw out_of_range(msg);
}
inline string& StrBlob::back(){
	check(0, "back on empty StrBlob");
	return data->back();
}

inline string& StrBlob::front(){
	check(0, "front on empty StrBlob");
	return data->front();
}

inline void StrBlob::pop_back(){
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}

class StrBlobPtr{
public:
	StrBlobPtr(): curr(0){}
	StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz){}
	string& deref() const;
	StrBlobPtr& incr();

private:
	shared_ptr<vector<string>> check(size_t, const string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

inline shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string& msg) const{
	auto ret = wptr.lock();
	if(!ret)
		throw runtime_error("unbound StrBlobPtr");
	if(i >= ret->size())
		throw out_of_range(msg);
	return ret;
}

inline string& StrBlobPtr::deref() const {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

inline StrBlobPtr& StrBlobPtr::incr() {
	check(curr, "increment past and of StrBlobPtr");
	++curr;
	return *this;
}


inline StrBlobPtr StrBlob::begin()  
{  
    return StrBlobPtr(*this);  
}  
inline StrBlobPtr StrBlob::end()  
{  
    return StrBlobPtr(*this, data->size());  
}  

