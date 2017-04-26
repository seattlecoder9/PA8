#include "BST.h"

BST::BST()
{
	mpRoot = nullptr;
}

BST::~BST()
{
	destroyTree(mpRoot);
}

void BST::setmpRoot(Node * newRoot)
{
	mpRoot = newRoot;
}

Node *& BST::getmpRoot()
{
	return mpRoot;
}

void BST::insert(string newData, int newUnits)
{
	Node *pNewNode = new TransactionNode(newUnits, newData);
	insert(newData,newUnits, this->getmpRoot());
}

Node *& BST::insert(string newData, int newUnits, Node *& pCurNode)
{
	if (pCurNode == nullptr)
	{
		pCurNode = new TransactionNode(newUnits, newData);
	}
	else if (newData < pCurNode->getmData())
	{
		insert(newData, newUnits, pCurNode->getmpLeft());
	}
	else if (newData > pCurNode->getmData())
	{
		insert(newData, newUnits, pCurNode->getmpRight());
	}
	else
	{
		cout << "Duplicate" << endl;
	}
	// TODO: insert return statement here
}
