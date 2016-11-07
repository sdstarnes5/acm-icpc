/*
 * Smart_Phone.cpp
 *
 * ACCEPTED
 *
 *  Created on: Oct 13, 2016
 *      Author: Shaun Starnes
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int optionOne(string alreadyTyped, string wordToType) {

	for (unsigned int i = 0;
			i < min(alreadyTyped.length(), wordToType.length()); i++) {
		if (alreadyTyped[i] != wordToType[i]) {
			return (alreadyTyped.length() - i) + (wordToType.length() - i);
		}
	}

	if (alreadyTyped.length() != wordToType.length()) {
		return max(alreadyTyped.length(), wordToType.length())
				- min(alreadyTyped.length(), wordToType.length());
	}

	return 0;
}

int optionTwo(string suggestionOne, string wordToType) {

	for (unsigned int i = 0;
			i < min(suggestionOne.length(), wordToType.length()); i++) {
		if (suggestionOne[i] != wordToType[i]) {
			return (suggestionOne.length() - i) + (wordToType.length() - i) + 1;
		}
	}

	if (suggestionOne.length() != wordToType.length()) {
		return (max(suggestionOne.length(), wordToType.length())
				- min(suggestionOne.length(), wordToType.length())) + 1;
	}

	return 1;
}

int smart_phone() {

	int n = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		string wordToType;
		string alreadyTyped;
		string suggestionOne;
		string suggestionTwo;
		string suggestionThree;

		cin >> wordToType >> alreadyTyped >> suggestionOne >> suggestionTwo
				>> suggestionThree;

		cout
				<< min(
						min(
								min(optionOne(alreadyTyped, wordToType),
										optionTwo(suggestionOne, wordToType)),
								optionTwo(suggestionTwo, wordToType)),
						optionTwo(suggestionThree, wordToType)) << endl;

	}

	return 0;
}

