/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-22
 * Time: 16:40pm
 *
 *  The code is the answer to exercise 20 of the twelfth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/
#include "chapter12.h"
int main(int argc, char**argv)    
{   
    ifstream in("1.txt");  
    string s;  
    StrBlob blob;  
    while (getline(in,s))  
    {  
        blob.push_back(s);  
    }  
    StrBlobPtr pbeg(blob.begin()); 
    cout << pbeg.deref() << endl;  
    return 0;  
}   