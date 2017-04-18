
#include <iostream>
#include <string>
#include <vector>
using namespace::std;
        
int main(){
    vector<int> v2;   //空vector对象
    for(int i = 0; i != 1000; ++i)
        v2.push_back(i);

    for (auto it : v2)
		cout << it << " ";
	cout << endl;
	cout << v2.size() << endl;

    string word;
    vector<string> text;
    while (getline(cin, word)){
		if (word.size() >= 1)
			text.push_back(word);
		else
			break;
	}
    
    for (auto sr : text)
		cout << sr << " ";
	cout << endl;
    cout << text.size() << endl;
}