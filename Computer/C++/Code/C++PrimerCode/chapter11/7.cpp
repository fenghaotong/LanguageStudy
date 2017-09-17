/*
 * This code is writed by htfeng.
 *
 * "Copyright (c) 2017 by Objectwrite."
 * Date: 2017-09-17
 * Time: 16:39pm
 *
 *  The code is the answer to exercise 7 of the elevnth chapter about the book "C++ Primer, Fifth Edition".
 *
 * If you have any question,please contact me.
 *
 * Email:1054708869@qq.com
*/

#include <iostream>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>  

using namespace std;

int main(int argc, char **argv){
	map<string, vector<string>> family;
	string first_name, word,  _birthday;
	vector<pair<string, string>> child;
	vector<string> second_name;

	cout << "first_name:";
	while(cin >> first_name && first_name != "end"){
		cout << "second_name:" << endl;;
		while(cin >> word && word != "end"){
			second_name.push_back(word);
		}

		for(auto it = second_name.begin(); it != second_name.end(); ++it){
			family[first_name].push_back(*it);
            
            cout<<"请输入孩子的生日:";
			while (cin>>_birthday && _birthday != "end")  
            {  
                child.push_back(make_pair(*it,_birthday));  
            }  

		}
		cout << "first_name:";
	}

	map<string, vector<string>>::iterator mapi;
	for(mapi  = family.begin(); mapi != family.end(); ++mapi){
		cout << mapi->first << " ";

		vector<string>::iterator it1 = mapi->second.begin();
		for(it1; it1 != mapi->second.end(); ++it1){
			cout << *it1 << " ";
		}	
		cout << endl;
	}

	vector<pair<string,string>>::iterator it1 = child.begin();  
    cout<<"孩子们的信息："<<endl;  
    for (it1; it1 != child.end(); ++it1)  
    {  
        cout<<it1->first<<" "<<it1->second<<endl;  
  
    }  

	return 0;
}