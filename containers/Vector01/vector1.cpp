#include <vector>
#include <iostream>

using namespace std;

int main() 
{
	vector<int> vector;

	for (int i=1; i<=6; ++i)
	{
		vector.push_back(i);
	}

	for (int i=0; i<vector.size(); ++i)
	{
		cout << vector[i] << ' ';
	}

	cout << endl;

	return 0;
}
