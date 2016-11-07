/*
 * Popular_Vote.cpp
 *
 *  Created on: Nov 1, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>
#include <vector>

using namespace std;

int popular_vote() {

	int t = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {

		int max = 0;
		int max_index = 0;
		bool flag = false;
		int sum = 0;
		int n = 0;

		cin >> n;

		for (int m = 0; m < n; m++) {
			int x = 0;
			cin >> x;
			sum += x;
			if (x > max) {
				max = x;
				max_index = m;
				flag = false;
			} else if (x == max) {
				flag = true;
			}
		}

		if (flag) {
			cout << "no winner" << endl;
		} else if (max > sum / 2) {
			cout << "majority winner " << max_index + 1<< endl;
		} else {
			cout << "minority winner " << max_index + 1 << endl;
		}
	}
	return 0;
}

