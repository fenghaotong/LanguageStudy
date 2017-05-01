
#include <iostream>
#include <string>
#include <vector>

using namespace::std;
using std::vector;

int main(){
	vector<string> text;
	string word;

	while (cin >> word){
		if (word.size() > 1)
			text.push_back(word);
		else
			break;
	}

	for (auto &ve : text)  //这里需要两次遍历
		for (auto &s : ve)
			s = toupper(s);

	for (auto it : text)
		cout << it << endl;

	return 0;
}