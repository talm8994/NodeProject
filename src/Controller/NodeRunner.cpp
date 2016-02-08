/*
 * NodeRunner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: talm8994
 */
#include "NodeController.h"
/*
 * this makes is it can run
 */
int main()
{
	NodeController * baseController = new NodeController();
	baseController->start();
	return 0;
}



