#include <iostream>
#include<vector>

using namespace std;
void printvec(vector<int>&);
void selectionSort(vector<int>& v);
int main()
{

	vector<int> vec{ 10,-4,5,20,0,19 };
	printvec(vec);
	selectionSort(vec);
	printvec(vec);


}

void printvec(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << "\n";

}

void selectionSort(vector<int>& v)
{
	int min;
	int minind;

	for (int i = 0; i < v.size() - 1; i++)
	{
		min = v[i];
		minind = i;
		for (int j = i + 1; j < v.size(); j++)
		{
			if (v[j] > min)
			{
				min = v[j];
				minind = j;
			}
		}
		swap(v[i], v[minind]);
	}
}
