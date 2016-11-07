/*
 * Time_Travelling_Temperatures.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 15, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <iomanip>

using namespace std;

int time_traveling_temperatures() {

	double x = 0;
	double y = 0;

	cin >> x >> y;

	if (y == 1) {
		if (x == 0) {
			cout << "ALL GOOD" << endl;
		} else {
			cout << "IMPOSSIBLE" << endl;
		}
	} else {
		cout << setprecision(14) << fixed << -x / (y - 1) << endl;
	}

	return 0;
}
