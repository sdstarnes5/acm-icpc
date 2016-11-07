/*
 * ICPC_Tutorial.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 27, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n) {
	int fact[13] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800,
			39916800, 479001600 };
	return fact[n];
}

int icpc_tutorial() {

	int m = 0;
	int n = 0;
	int t = 0;
	bool result = false;

	cin >> m >> n >> t;

	switch (t) {
	case 1:
		if (n >= 13) {
			result = false;
		} else if (factorial(n) <= m) {
			result = true;
		}
		break;

	case 2:
		if (n >= 30) {
			result = false;
		} else if (pow(2, n) <= m) {
			result = true;
		}
		break;

	case 3:
		if (pow(n, 4) <= m) {
			result = true;
		}
		break;

	case 4:
		if (pow(n, 3) <= m) {
			result = true;
		}
		break;

	case 5:
		if (pow(n, 2) <= m) {
			result = true;
		}
		break;

	case 6:
		if ((n * log2(n)) <= m) {
			result = true;
		}
		break;

	case 7:
		if (n <= m) {
			result = true;
		}
		break;
	}

	if (result) {
		cout << "AC";
	} else {
		cout << "TLE";
	}

	return 0;

}

