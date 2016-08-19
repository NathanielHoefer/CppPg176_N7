/*
 * yearToRomanNum.h
 *
 *  Created on: Aug 10, 2016
 *      Author: Nathaniel
 */

#ifndef SRC_YEARTOROMANNUM_H_
#define SRC_YEARTOROMANNUM_H_

const int ROMAN_I = 1;
const int ROMAN_V = 5;
const int ROMAN_X = 10;
const int ROMAN_L = 50;
const int ROMAN_C = 100;
const int ROMAN_D = 500;
const int ROMAN_M = 1000;

class yearToRomanNum {

public:
	yearToRomanNum();

	void convertToRoman();
	void setArabicYear(int enteredYear) { m_arabicYear = enteredYear; };
	int getArabicYear() { return m_arabicYear; };

private:
	int m_arabicYear;

	bool validAnswer(int enteredYear);

};


#endif /* SRC_YEARTOROMANNUM_H_ */
