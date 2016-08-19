/*
 * main.cpp
 *
 *  Created on: Aug 10, 2016
 *      Author: Nathaniel
 */

#ifndef SRC_MAIN_CPP_
#define SRC_MAIN_CPP_

#include "yearToRomanNum.h"
#include <iostream>

using namespace std;

int main()
{
	bool isFinished = false;
	char response;

	cout << "This application translates Arabic years to Roman numerals" << endl;

	while (!isFinished) {
		yearToRomanNum obj;
		obj.convertToRoman();

        cout << "\nEnter \"Y\" to try again" << endl;
        cin >> response;
        if ((response == 'y') || (response == 'Y')) {
            isFinished = false;
        } else {
        	isFinished = true;
        }
	}

	cout << "Program Ended" << endl;

}



#endif /* SRC_MAIN_CPP_ */
