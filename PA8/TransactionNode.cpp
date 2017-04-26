#include "TransactionNode.h"

TransactionNode::TransactionNode(int newUnits, string newData) : Node(newData)
{
	//Fill this in!
	this->mData = newData;
	this->mUnits = newUnits;
	
}

void TransactionNode::setmUnits(int newUnits)
{
	this->mUnits = newUnits;
}

int TransactionNode::getmUnits()
{
	return mUnits;
}

void TransactionNode::printData()
{
	cout << "Item: " << this->getmData() << "      Units: " << this->getmUnits() <<endl;
}
