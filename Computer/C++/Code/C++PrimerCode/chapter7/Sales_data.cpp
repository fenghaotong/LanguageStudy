/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-08-30
 * Time: 10:30am
 *
 * Sales_data.cpp
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include "Sales_data.h"

int main(int argc, char ** argv){
    Sales_data total;
    if(read(cin, total)){
        Sales_data trans;
        while(read(cin, trans)){
            if(total.isbn() == trans.isbn()){
                total.combine(trans);
                print(cout, total) << endl;
            }else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }else{
        cerr << "NO data?!" << endl;
    }
    return 0;
}
