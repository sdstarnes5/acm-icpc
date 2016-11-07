/*
 * Simon_Says.cpp
 *
 *	ACCEPTED
 *
 *  Created on: Oct 13, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>
#include <string>

using namespace std;

int simon_says() {

	int n = 0;

	cin >> n;

	for (int i = 0; i <= n; i++) {

		string line;
		getline(cin, line);

		if (line.substr(0, 10) == "Simon says") {
			cout << line.substr(10, line.length() - 1);
		}
	}

	return 0;
}

