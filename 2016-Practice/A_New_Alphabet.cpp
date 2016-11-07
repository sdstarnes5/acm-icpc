/*
 * A_New_Alphabet.cpp
 *
 *  Created on: Oct 20, 2016
 *      Author: Shaun Starnes
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string convert(char x) {
	switch(x) {
	case 'a':
		return "@";
	case 'b':
		return "8";
	case 'c':
		return "(";
	case 'd':
		return "|)";
	case 'e':
		return "3";
	case 'f':
		return "#";
	case 'g':
		return "6";
	case 'h':
		return "[-]";
	case 'i':
		return "|";
	case 'j':
		return "_|";
	case 'k':
		return "|<";
	case 'l':
		return "1";
	case 'm':
		return "[]\\/[]";
	case 'n':
		return "[]\\[]";
	case 'o':
		return "0";
	case 'p':
		return "|D";
	case 'q':
		return "(,)";
	case 'r':
		return "|Z";
	case 's':
		return "$";
	case 't':
		return "\'][\'";
	case 'u':
		return "|_|";
	case 'v':
		return "\\/";
	case 'w':
		return "\\/\\/";
	case 'x':
		return "}{";
	case 'y':
		return "`/";
	case 'z':
		return "2";
	default:
		string result(1, x);
		return result;
	}
}

int a_new_alphabet() {

	string text = "";
	string result = "";

	getline(cin, text);

	for(unsigned int i = 0; i < text.size(); i++) {
		result = result + convert(tolower(text[i]));
	}

	cout << result << endl;

	return 0;
}

