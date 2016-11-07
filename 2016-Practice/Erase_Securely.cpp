/*
 * Erase_Securely.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 8, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <string>
using namespace std;

int erase_securely() {

	int n = 0;
	string before = "";
	string after = "";

	cin >> n;
	cin >> before;
	cin >> after;

	if(n % 2 == 1) {
		string new_after = "";
		for (unsigned int i = 0; i < after.length(); i++) {
			if (after.at(i) == '0') {
				new_after.append("1");
			} else {
				new_after.append("0");
			}
		}
		after = new_after;
	}
	if (before.compare(after) != 0) {
		cout << "Deletion failed";
	} else {
		cout << "Deletion succeeded";
	}

	return 0;
}




