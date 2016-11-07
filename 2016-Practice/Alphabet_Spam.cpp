/*
 * Alphabet_Spam.cpp
 *
 * 	ACCEPTED
 *
 *  Created on: Sep 20, 2016
 *      Author: Shaun
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int alphabet_spam() {

	string phrase = "";
	float whitespace_count = 0;
	float upper_count = 0;
	float lower_count = 0;
	float other_count = 0;

	cin >> phrase;

	float length = phrase.length();

	for (int i = 0; i < length; i++) {
		if (phrase[i] == '_') {
			whitespace_count++;
		} else if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
			upper_count++;
		} else if (phrase[i] >= 'a' && phrase[i] <= 'z') {
			lower_count++;
		} else {
			other_count++;
		}
	}

	cout << setprecision(14) << fixed;
	cout << whitespace_count / length << endl;
	cout << lower_count / length << endl;
	cout << upper_count / length << endl;
	cout << other_count / length << endl;

}


