/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: talm8994
 */

#include "ArrayNode.h"
#include <iostream>

//this stuff makes the arrayz
template <class Type>
ArrayNode <Type>::ArrayNode() : Node<Type>()
{
this->next = nullptr;
}
// pointers/ arrays
template <class Type>
ArrayNode<Type> :: ArrayNode(const Type& value) : Node<Type>(value)
{
	this->next = nullptr;
	this->value = nullptr;
}
// more pointers/ arrays
template <class Type>
ArrayNode<Type> :: ArrayNode(const Type& value, ArrayNode<Type> * next) : Node<Type>(value)
{
	this->value = nullptr;
	this->next = nullptr;
}
//
template <class Type>
ArrayNode<Type>::~ArrayNode()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this-> next;
}

template <class Type>
void ArrayNode<Type> :: setNext(ArrayNode<Type> * next)
{
	this->next = next;
}

