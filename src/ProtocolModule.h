///////////////////////////////////////////////////////////
//  ProtocolModule.h
//  Implementation of the Class ProtocolModule
//  Created on:      04-Jun-2019 18:01:14
//  Original author: student
///////////////////////////////////////////////////////////

#if !defined(EA_5809C073_B5EF_426a_B1EA_4FBE7347D209__INCLUDED_)
#define EA_5809C073_B5EF_426a_B1EA_4FBE7347D209__INCLUDED_

#include <string>
#include <fstream>
#include <iostream>
#include <time.h>
#include <ctime>

#include <stdio.h>
#include "Enums.h"

#define DIAG_VERBOSE(msg) ProtocolModule::writeLog(DIAG_VERBOSE, msg)
#define DIAG_DEBUG(msg) ProtocolModule::writeLog(DIAG_DEBUG, msg)
#define DIAG_INFO(msg) ProtocolModule::writeLog(DIAG_INFO, msg)
#define DIAG_WARNING(msg) ProtocolModule::writeLog(DIAG_WARNING, msg)
#define DIAG_ERROR(msg) ProtocolModule::writeLog(DIAG_ERROR, msg)


using namespace std;
class ProtocolModule
{

public:
	ProtocolModule();
	~ProtocolModule();

	static void setMaxLevel(int level);

	static void writeLog(DiagnosticLevel level, string logMessage);

	static DiagnosticLevel maxLevel;
	//void log();

private:

	static string filePath;

};
#endif // !defined(EA_5809C073_B5EF_426a_B1EA_4FBE7347D209__INCLUDED_)

