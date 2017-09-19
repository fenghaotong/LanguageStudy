#include <iostream>    
#include <string>    
#include <fstream>  
#include <list>  
#include <vector>   
#include <map>    
#include <set>  


using namespace std;  

int main(int argc,char **argv){
	map<string, set<string>> family;
	string first_name, second_name;

	cout << "first_name:";
	while(cin >> first_name && first_name != "end"){
		cout << "second_name:";
		while(cin >> second_name && second_name != "end"){
			family[first_name].insert(second_name);
			cout << "second_name:";
		}
		cout << "first_name:";
	}

	map<string, set<string>>::iterator it1 = family.begin();

	for(it1; it1 != family.end(); ++it1){
		cout << "name:" << it1->first << " ";
		set<string>::iterator it2 = it1->second.begin();
		for (it2; it2 != it1->second.end(); ++it2)
		{
			/* code */
			cout << *it2 << " ";
		}
		cout << endl;
	}
	return 0;
}