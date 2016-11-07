#include<iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	int count = 0;
	string current = "";
	string next = "";
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> current;
		if (next != "") {
			if (current < next) {
				count++;
			} else if (current > next) {
				count--;
			}
		}
		next = current;
	}
	
	if (abs(count) != n - 1) {
		cout << "NEITHER" << endl;
	} else if (count > 0) {
		cout << "DECREASING" << endl;
	} else if (count < 0) {
		cout << "INCREASING" << endl;
	}
		
	return 0;
}