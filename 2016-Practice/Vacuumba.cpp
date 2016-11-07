/*
 * Vacuumba.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 15, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int vacuumba() {

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int m = 0;
		double x = 0, y = 0, angle = 0;
		cin >> m;

		for (int r = 0; r < m; ++r) {
			double rotation = 0, distance = 0;
			cin >> rotation >> distance;

			angle += rotation;
			x += distance * sin(-angle * M_PI / 180.0);
			y += distance * cos(-angle * M_PI / 180.0);
		}

		cout << setprecision(7) << fixed << x << " " << y << endl;
	}

	return 0;

}

