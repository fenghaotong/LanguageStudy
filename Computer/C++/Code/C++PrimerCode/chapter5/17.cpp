

#pragma GCC diagnostic error "-std=c++11"  
#include <iostream>
#include <vector>

using namespace::std;

int main(){
	vector<int> data1,data2;
	int a;
	int b;

	cout << "input data1:" << endl;
	while(cin >> a && a != 00)
		data1.push_back(a);

	cout << "input data2:" << endl;
	while(cin >> b && b != 00)
		data2.push_back(b);

	int small_size = data1.size() < data2.size() ? data1.size() : data2.size();
	int i;

	for(i = 0; i < small_size; i++){
		if(data1[i] != data2[i]){
			cout << "flase" << endl;
		}
	}
	if(i == small_size)
		cout << "True" << endl;
	return 0;
}