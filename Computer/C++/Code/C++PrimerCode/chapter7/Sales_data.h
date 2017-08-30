/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-30
 * Time: 10:30am
 *
 * Sales_data.h
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>
#include <string>
#include <ostream>
#include <istream>

using namespace::std;

class Sales_data{
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend ostream &print(ostream&, const Sales_data&);
    friend istream &read(istream&, Sales_data&);
public:
    Sales_data():units_sold(0),revenue(0.0){}
    Sales_data(const string& s):bookNo(s){}
    Sales_data(const string &s, unsigned n, double p):bookNo(s),units_sold(n),revenue(p*n){}
    Sales_data(istream &);

    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
    string bookNo;
    unsigned units_sold;
    double revenue;
};
Sales_data add(const Sales_data&, const Sales_data&);
ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rha){
    units_sold += rha.units_sold;
    revenue += rha.revenue;
    return *this;
}

istream &read(istream& is, Sales_data &item){
    double price = 0;
    cout << "please input a bookNo:";
    is >> item.bookNo;
    cout << "please input units_sold:";
    is >> item.units_sold;
    cout << "please input book's price:";
    is >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream& os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}


Sales_data add(const Sales_data& lhs, const Sales_data& rha){
    Sales_data sum = lhs;
    sum.combine(rha);
    return sum;
}

