#pragma once
#include "Shared.h"

class Node
{

public:
	Node(string newData);
	void setmData(string newData);
	void setmpLeft(Node *newLeftPtr);
	void setmpRight(Node *newRightPtr);

	string getmData();
	Node *& getmpLeft();
	Node *& getmpRight();

	void virtual printData() = 0;

protected:
	string mData;
	Node *mpLeft;
	Node *mpRight;

};