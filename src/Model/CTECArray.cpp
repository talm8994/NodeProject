/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: talm8994
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;

}

template <class Type>
CTECArray<Type>::~CTECArray()
{

}

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

template<class Type>
void CTECArray<Type>::set(int position, Type value)
{
	if(position >= size || position < 0)
			{
		// im outtie fix me daddy
				cerr << "position value is outtie :(" << endl;
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
