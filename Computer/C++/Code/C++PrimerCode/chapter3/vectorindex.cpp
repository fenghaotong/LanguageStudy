
#include <iostream>
#include <string>
#include <vector>
using namespace::std;
using std::vector;

int main(){
	vector<unsigned> scores(11, 0);
	unsigned grade;

	while (cin >> grade){
		if (grade <= 100)
			++scores[grade/10];
	}

	for (auto it : scores)
		cout << it << endl;
}