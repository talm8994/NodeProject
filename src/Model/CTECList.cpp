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
template<class Type>
Type CTECList<Type> :: removeFormIndex(int index)
		{
	Type returnValue;
		}
template<class Type>
Type CTECLIST<Type> : removefromEnd()
{
	assert(size>0);
	type returnValue;
	if(size == 1)
	{
		ArrayNode<Type> * toRemove = end;
		returnValue = removeFromFront;
		end = nullptr;
		head = nullptr;
		delete toRemove;
	}
	else
	{
		Array<Type> * current = head;
		for(int index = 0;  index < size - 1; index++)
		{
			current = current->getNext();
		}
	returnValue = end-> getValue();
	delete end;
	current = end;
	current->setNext(nulptr);
	}
}

