/*
 * ACM_Contest_Scoring.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 8, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int acm_contest_scoring() {

	int minutes = 0;
	char problem;
	string result;

	int submissions[26] = {0};
	int correct = 0;
	int score = 0;

	for(;;) {

		cin >> minutes;

		if (minutes == -1) {
			break;
		}

		cin >> problem;
		cin >> result;

		submissions[problem - 'A']++;

		if (result.compare("right") == 0) {
			score += minutes + ((submissions[problem - 'A'] - 1) * 20);
			correct++;
		}
	}

	cout << correct << " " << score << endl;

	return 0;
}



