/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-30
 * Time: 10:00am
 *
 *  The code is the answer to exercise 4 of the seventh chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>
#include <string>

using namespace::std;

class Person {
public:
    Person(string client_name, string client_address);
    Person();
    void showInfo(){
        cout<<name<<"'s"<<" address is "<<address<<endl;
    }//类内定义函数

    const string& getName(){
        return name;
    }

    const string& getAddress(){
        return address;
    }
private:
    string name;
    string address;
};

Person::Person(string client_name, string client_address):name(client_name),address(client_address){};

int main(int argc,char **argv){
    Person Client1("fenghaotong","shanghai");
    Client1.showInfo();
    Client1.getName();
    return 0;
}
