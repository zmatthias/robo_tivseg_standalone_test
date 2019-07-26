///////////////////////////////////////////////////////////
//  ObstacleModule.cpp
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#include <thread>

#include "AbstractModule.h"
#include "ProtocolModule.h"

AbstractModule::AbstractModule() {
	m_keepRunning = true;
	std::thread(&AbstractModule::runActionInLoop, this, m_updateFreq).detach();
}

AbstractModule::~AbstractModule() {
	m_keepRunning = false;

}


void AbstractModule::action() {
	DIAG_VERBOSE("Abstract Action");
}


/**@brief runs the action function in a loop and waits for a certain time after execution
*	The execution frequency has to be specified, the default is .. Hz
*	If the execution takes longer than 1/freq, a warning will be produced
*  @param frequency of execution
*  @return void
*/
void AbstractModule::runActionInLoop(double freq) {

	while (m_keepRunning) {

		//std::chrono::time_point m_timeBegin = std::chrono::high_resolution_clock::now();
		//DIAG_VERBOSE(m_DiagName + ": Start Action at..");

		action();
		std::this_thread::sleep_for(std::chrono::milliseconds(50));

		//std::chrono::time_point m_timeEnd = std::chrono::high_resolution_clock::now();
		//std::chrono::duration<double> m_timeDifference = m_timeEnd - m_timeBegin;
		//DIAG_VERBOSE(m_DiagName + ": Finished Action at.." + "time elapsed: to_come");
		// check if time is exceeded
		//sleep 1/freq
		//assert freq = 0!
	}
}