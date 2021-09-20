#include <iostream>
#include <vector>
using namespace std;

void printvector(vector<int>);

int main() {

	
	vector<int> vec1;
	cout << vec1.size() << "\n";
	for (int i = 0; i <= 10; i++) {
		vec1.push_back(i);	
	}
	printvector(vec1);
	cout << vec1.size();

}

void printvector(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	} cout << "\n";
}
