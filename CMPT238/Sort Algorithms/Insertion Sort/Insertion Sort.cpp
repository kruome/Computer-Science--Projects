#include <iostream>
#include <vector>
using namespace std;

void print(vector<double>&);

void insertionSort(vector<double>& v);
int main()
{

	vector<double> vec{ 10.0,-4,5,20,0.0,19 };

	insertionSort(vec);
	print(vec);


}

void printvec(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";

}


void insertionSort(vector<int>& v)
{
	int key;
	int i;
	for (int j = 1; j < v.size(); j++)
	{
		key = v[j];
		i = j - 1;

		while (i >= 0 && v[i] > key)
		{
			v[i + 1] = v[i];
			i = i - 1;
		}

		v[i + 1] = key;
	}


}
