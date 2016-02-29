/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: talm8994
 */

#include "CTECList.h"

CTECList::CTECList()
{

}
template <class Type>
 Type CTECList<Type> :: removeFromFront()
{
	Type thingToremove;
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = this->head->getNext();
	thingToRemove = this->head->getValue();
	delete this->head;
	this->head = newHead;

	return thingToRemove;
}

template<class Type>
void CTECList<Type> :: calculateSize()
{
	asset(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current ->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}
}

