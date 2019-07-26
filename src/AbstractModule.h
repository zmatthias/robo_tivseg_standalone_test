///////////////////////////////////////////////////////////
//  ObstacleModule.h
//  Implementation of the Class ObstacleModule
//  Created on:      04-Jun-2019 18:01:13
//  Original author: student
///////////////////////////////////////////////////////////

#pragma once
#include <string>

class AbstractModule
{

public:
	//but abstract classes still require a destructor
	//virtual ~AbstractModule();
	AbstractModule();
	~AbstractModule();

	//Methods to be overwritten by sub-strategies:

	virtual void action();
	// virtual void action() = 0;

protected:
	//standard update Frequency for 20fps
	double m_updateFreq = 20;

	bool m_keepRunning;
	void runActionInLoop(double freq);

private:
	std::string m_DiagName = "ABSTRACT";

};
