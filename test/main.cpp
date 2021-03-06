/*
 * main.cpp
 *
 *  Created on: 9 juil. 2018
 *      Author: mlegarrec
 */

#include <QtTest>

#include "Model/HistoryDatabaseListTestCase.h"

int main(int argc, char**argv)
{
	QCoreApplication app(argc, argv);

	int iRes = 0;

	if(iRes == 0){
		HistoryDatabaseListTestCase testCase;
		iRes = QTest::qExec(&testCase, argc, argv);
	}

	return (iRes == 0) ? 0 : 1;
}
