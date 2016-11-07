/*
 * Pizza_Crust.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 9, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

 int pizza_crust() {

	 double r = 0;
	 double c = 0;

	 cin >> r;
	 cin >> c;

	 double total_area = M_PI * pow(r, 2);
	 double cheese_area = M_PI * pow(r - c, 2);
	 double cheese_precent = (cheese_area / total_area);

	 cout << setprecision(24) << cheese_precent * 100;

	 return 0;
 }
