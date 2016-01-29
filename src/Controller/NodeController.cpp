/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */

#include "NodeController.h"


NodeController::NodeController()
{
	stringNode.setValue("adsdasd");
	intNode.setValue(999);

	stringArrayNode.setValue("words ");
	otherArrayNode.setValue("linked Node");
	stringArrayNode.setNext(&otherArrayNode);
}

NodeController::~NodeController()
{

}
void NodeController :: start()
{
	cout << "the contents of the stringNode are" << stringNode.getValue() << endl;
	cout << "the contents of the string array node are: " << stringArrayNode.getValue()<< endl;
	cout << "this connected to strings ArrayNode" << (*stringArrayNode.getNext()).getValue() << endl;
}

