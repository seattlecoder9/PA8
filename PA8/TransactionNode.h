#include "Node.h"

class TransactionNode : public Node
{
public:
	~TransactionNode();
	TransactionNode(int newUnits, string newData);
	// + constructor which accepts a string to set the
	//data and an integer to set the number of units in the node; 
	//should invoke class Node’s constructor

	void setmUnits(int newUnits);
	int getmUnits();
	void printData();



private:
	int mUnits;

};