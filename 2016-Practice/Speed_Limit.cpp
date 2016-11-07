/*
 * Speed_Limit.cpp
 *
 *	ACCEPTED
 *
 *  Created on: Oct 13, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>

using namespace std;

int speed_limit() {

	int n = 0;

	for(;;) {
		cin >> n;

		if (n == -1) {
			break;
		} else {
			int totalTime = 0;
			int distance = 0;
			for (int i = n; i > 0; i--) {
				int speed = 0, time = 0;

				cin >> speed >> time;

				distance += speed * (time - totalTime);
				totalTime = time;
			}
			cout << distance << " miles" << endl;
		}
	}

	return 0;
}

