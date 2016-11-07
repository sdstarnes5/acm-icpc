/*
 * Flow_Layout.cpp
 *
 *  Created on: Nov 1, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int flow_layout() {

	for (;;) {

		int maxWidth = 0;

		cin >> maxWidth;

		if (maxWidth == 0) {
			break;
		}

		int checkHeight = 0;
		int checkWidth = 0;
		int currentWidth = 0;
		int currentHeight = 0;

		for (;;) {

			int width = 0;
			int height = 0;

			cin >> width >> height;

			if (width < 0) {
				cout << currentWidth << " x " << currentHeight << endl;
				break;
			}

			if (checkWidth + width > maxWidth) {
				currentHeight += height;
				checkWidth = width;
				checkHeight = height;
			} else {
				checkWidth += width;
				if (height > checkHeight) {
					currentHeight += height - checkHeight;
					checkHeight = height;
				}
			}
			currentWidth = max(checkWidth, currentWidth);
		}

	}

	return 0;
}

