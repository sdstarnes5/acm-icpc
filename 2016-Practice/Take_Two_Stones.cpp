#include<iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	
	cin >> n;
	
	if (n%2 == 1) {
		cout << "Alice" << endl;
	} else {
		cout << "Bob" << endl;
	}
		
	return 0;
}