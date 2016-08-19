/*
 * yearToRomanNum.cpp
 *
 *  Created on: Aug 10, 2016
 *      Author: Nathaniel
 */
#include "yearToRomanNum.h"
#include <iostream>

using namespace std;

yearToRomanNum::yearToRomanNum()
{
	bool isValid = false;
	int enteredYear;

	// Validates that an integer between 0 and 10000 is entered
	do {
		cout << "Enter year between 1 and 9999" << endl;
		cin >> enteredYear;
		if ((cin.fail()) || !(yearToRomanNum::validAnswer(enteredYear))) {
			cout << "Invalid year\n" << endl;
		} else {
			isValid = true;
		}
	} while (!isValid);

	m_arabicYear = enteredYear;
}


void yearToRomanNum::convertToRoman()
{
	int arabicYear = m_arabicYear;
	string romanNum = "\n";

	while (arabicYear > 0) {
		if (arabicYear >= ROMAN_M) {
			for (int i = arabicYear / ROMAN_M; i > 0; i--){
				romanNum += "M";
			}
			arabicYear = arabicYear % ROMAN_M;
		}
		if (arabicYear >= ROMAN_D) {
			for (int i = arabicYear / ROMAN_D; i > 0; i--){
				romanNum += "D";
			}
			arabicYear = arabicYear % ROMAN_D;
		}
		if (arabicYear >= ROMAN_C) {
			for (int i = arabicYear / ROMAN_C; i > 0; i--){
				romanNum += "C";
			}
			arabicYear = arabicYear % ROMAN_C;
		}
		if (arabicYear >= ROMAN_L) {
			for (int i = arabicYear / ROMAN_L; i > 0; i--){
				romanNum += "L";
			}
			arabicYear = arabicYear % ROMAN_L;
		}
		if (arabicYear >= ROMAN_X) {
			for (int i = arabicYear / ROMAN_X; i > 0; i--){
				romanNum += "X";
			}
			arabicYear = arabicYear % ROMAN_X;
		}
		if (arabicYear >= ROMAN_V) {
			for (int i = arabicYear / ROMAN_V; i > 0; i--){
				romanNum += "V";
			}
			arabicYear = arabicYear % ROMAN_V;
		}
		if (arabicYear >= ROMAN_I) {
			for (int i = arabicYear / ROMAN_I; i > 0; i--){
				romanNum += "I";
			}
			arabicYear = arabicYear % ROMAN_I;
		}

	}
	cout << romanNum << endl;

}

bool yearToRomanNum::validAnswer(int enteredYear)
{
	if ((enteredYear > 0) && (enteredYear < 10000)) {
		return true;
	} else {
		return false;
	}
}


