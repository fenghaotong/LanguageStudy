/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-9-7
 * Time: 16:00am
 *
 *  The code is the answer to exercise 7 of the eighth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include "Sales_data.h"

int main(int argc, char ** argv){
    ifstream input(argv[1]);
    ofstream output(argv[2],ofstream::app);
    Sales_data total;
    if(read(input, total)){
        Sales_data trans;
        while(read(input, trans)){
            if(total.isbn() == trans.isbn()){
                total.combine(trans);
                print(cout, total) << endl;
            }else{
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }else{
        cerr << "NO data?!" << endl;
    }
    return 0;
}
