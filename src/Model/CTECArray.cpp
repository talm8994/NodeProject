/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: talm8994
 */

#include "CTECArray.h"
using namespace std;
#include <iostream>
/*
 * it makes it so when you put a negitive number or 0 it wont let you and make you put it in again
 */
template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;


	//defence
	if(size <= 0)
	{
		cerr << "you ding bat" << endl;
		return;
	}
	for(int index= 0; index < size; index++)
	{
	if(head != nullptr)
		{
			ArrayNode<Type> nextNode;
			nextNode.setNext(head);
			this->head = &nextNode;
		}
	else
		{
			//The firstArrayNode needs to be made
			ArrayNode<Type> firstNode;
			this->head = &firstNode;
		}
	}
}
/*
 * this makes it so that it delets the next thing on the list an moves on
 */
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index <size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
			{
				delete deleteMe;
			    deleteMe = head;
			}

			delete head;

		}
	}
}
/*
 * this makes sure that you have the right size of array so that it wont go on forever
 */
template<class Type>
int CTECArray<Type>::getSize()
{
	return this->size;
}

template<class Type>
Type* CTECArray<Type>::get(int position)
{
	if(position >= size || position < 0)
		{
	// im outtie fix me daddy
			cerr << "position value is outtie :(" << endl;
			return nullptr;
		}
		else
		{
			// im in
			ArrayNode<Type> * current = head;
			for(int spot = 0; spot <= position; spot++)
			{
				if(spot != position)
				{
					current = current->getNext();
				}
				else
				{
					return current->getValue();
				}
			}
		}
	}
/*
 * this fixes it so that it goes back to where it belongs
 */
template<class Type>
void CTECArray<Type>::set(int position, Type value)
{
	if(position >= size || position < 0)
			{
		// im outtie fix me daddy
				cerr << "Im in, snake!!" << endl;
			}
			else
			{
				ArrayNode<Type> * current = head;
				for(int spot = 0; spot < position; spot++)
				{
					if(spot != position)
					{
					    current = current->getNext();
					}
					else
					{
						current->setValue(value);
					}
				}

			}
}
