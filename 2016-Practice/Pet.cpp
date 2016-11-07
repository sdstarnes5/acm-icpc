#include<iostream>

using namespace std;

int main()
{
	int tmp;
	int best;
	int best_id = 1;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> tmp;
		sum += tmp;
	}
	best = sum;
	for (int id = 2; id < 6; id++)
	{
		sum = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> tmp;
			sum += tmp;
		}
		if (sum > best)
		{
			best_id = id;
			best = sum;
		}
	}
	
	cout << best_id << ' ' << best << '\n';
		
	return 0;
}