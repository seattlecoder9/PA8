#include "Node.h"

Node::Node(string newData)
{
	this->mData = newData;
	this->mpLeft = nullptr;
	this->mpRight = nullptr;
}

void Node::setmData(string newData)
{
	this->mData = newData;
}

void Node::setmpLeft(Node * newLeftPtr)
{
	mpLeft = newLeftPtr;
}

void Node::setmpRight(Node * newRightPtr)
{
	mpRight = newRightPtr;
}

string Node::getmData()
{
	return mData;
}

Node *& Node::getmpLeft()
{
	return mpLeft;
}

Node *& Node::getmpRight()
{
	return mpRight;
}
