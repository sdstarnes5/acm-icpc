/*
 * Compound_Words.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: Shaun Starnes
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> add(string text, vector<string> list) {
	bool flag = true;
	for (int i = 0; i < list.size(); i++) {
		if (list[i] == text) {
			flag = false;
			break;
		}
	}
	if (flag) {
		list.push_back(text);
	}
	return list;
}

int compund_words() {

	vector<string> inputs;
	vector<string> results;

	string temp = "";
	while (cin >> temp) {
		inputs.push_back(temp);
	}

	for (int i = 0; i < inputs.size(); i++) {
		for (int m = 0; m < inputs.size(); m++) {
			if (i != m) {
				results = add(inputs[i] + inputs[m], results);
			}
		}
	}

	sort(results.begin(), results.end());
	for (int i = 0; i < results.size(); i++) {
		cout << results[i] << endl;
	}
	return 0;
}
