/*
 * Avoidland.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 8, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <algorithm>

using namespace std;

int move(int pawns[], int size) {

	int count = 0;

	for (int i = 0; i < size; i++) {
		int n = i + 1;
		while (pawns[i] != n) {
			if (pawns[i] > n) {
				pawns[i]--;
				count++;
			} else {
				pawns[i]++;
				count++;
			}
		}
	}

	return count;
}

int avoidland() {

	int n = 0;

	cin >> n;

	int rows[n] = { 0 };
	int columns[n] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> rows[i] >> columns[i];
	}

	sort(rows, rows + n);
	sort(columns, columns + n);

	cout << move(rows, n) + move(columns, n) << endl;

	return 0;
}
