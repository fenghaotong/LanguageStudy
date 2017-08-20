#include <iostream>    
#include <string>    
#include <vector>    
using namespace::std;    
int main()  
{       
    string My_string, before_string, max_repeatstring;    
    vector<string> vec1;//存放每个连续输入的单词  
    vector<int> vec2;//存放每个连续输入的次数  
    int repeat_number = 0, flag = 0,m = 0;    
    while (cin >> My_string && My_string != "exit"){    
        if (My_string == before_string){    
            ++repeat_number;    
            m++;//此变量是因为最后输入的单词不会在调用else,所以需要记录下本单词的出现次数  
        }else{         
            vec2.push_back(repeat_number);//记录下上一个单词的重复次数  
            repeat_number = 1;    
            before_string = My_string;    
            vec1.push_back(My_string);//此次输入了与上次不同的单词，记录下来  
            m = 0;  
        }    
    }  
  
    vec2.push_back(m+1);  
    int a = 0;  
    vector<int>::iterator it1 = vec2.begin();  
    for (it1; it1 != vec2.end(); ++it1){  
        if (*it1 >a){  
            a = *it1;//找到最大元素  
        }      
    }  
  
    for (int i = 0; i< vec2.size(); i++){  
        if (vec2[i] == a){  
            cout<<"word:"<<vec1[i-1]<< endl ;
            cout<<"count:"<<vec2[i]<< endl;  
        }  
    }  
    return 0;
}  