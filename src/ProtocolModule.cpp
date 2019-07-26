///////////////////////////////////////////////////////////
//  ProtocolModule.cpp
//  Implementation of the Class ProtocolModule
//  Created on:      04-Jun-2019 18:01:14
//  Original author: student
///////////////////////////////////////////////////////////
//  ProtocolModule.cpp
//  Implementation of the Class ProtocolModule
//  Created on:      04-Jun-2019 18:01:14
//  Original author: student
///////////////////////////////////////////////////////////

#include "ProtocolModule.h"

string ProtocolModule::filePath;
DiagnosticLevel ProtocolModule::maxLevel;


ProtocolModule::ProtocolModule() {
	//	filePath = "logs/test.txt";
}


ProtocolModule::~ProtocolModule() {

}


void ProtocolModule::setMaxLevel(int level) {
	//maxLevel = level;
	maxLevel = (DiagnosticLevel)level;
}



void ProtocolModule::writeLog(DiagnosticLevel level, string logMessage) {

	if (level <= maxLevel) {


		time_t now = time(0);

		// convert now to string form
		char* timestamp = ctime(&now);

		cout << logMessage << endl;


		ofstream myfile;
		myfile.open("C://Users//student//log.txt", ios::app);
		myfile << timestamp << logMessage + "\n";
		myfile.close();
	}


}
