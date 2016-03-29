/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: talm8994
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

template<class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
public:
	getSize(): int

	CTECList();

	virtual ~CTECList();
};

#endif /* MODEL_CTECLIST_H_ */
