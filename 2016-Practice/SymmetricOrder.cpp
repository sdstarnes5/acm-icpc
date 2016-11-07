/*
 * SymmetricOrder.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>
#include <string>

using namespace std;

int symmetric_order() {

	int m = 0;
	int n = 0;

	for (;;) {

		m++;
		cin >> n;

		if (n == 0) {
			break;
		}

		string names[n]= { "" };

		for (int i = 0; i < (n + 1) / 2; i++) {
			string name = "", name2 = "";
			cin >> name;
			names[i] = name;
			if (n - ((2 * i) + 1) > 0) {
				cin >> name2;
				names[n - i - 1] = name2;
			}
		}

		cout << "SET " << m << endl;
		for (int i = 0; i < n; i++) {
			cout << names[i] << endl;
		}
	}

	return 0;
}

