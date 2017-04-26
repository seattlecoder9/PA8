#include "BST.h"

BST::BST()
{
	mpRoot = nullptr;
}

BST::~BST()
{
	//destroyTree(mpRoot);
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
	insert(pNewNode, this->getmpRoot());
}

void BST::inOrder()
{
	inOrder(this->mpRoot);
}

void BST::inOrder(Node *pTree) //Does this need to be a reference to a pointer?
{
	// 1. go left
	// 2. process the node
	// 3. go right
	if (pTree != nullptr)
	{
		inOrder(pTree->getmpLeft());
		cout << "Item: " << pTree->getmData() << "      Units: " << static_cast<TransactionNode*>(pTree)->getmUnits() << endl;
		inOrder(pTree->getmpRight());

	}
}

TransactionNode & BST::findSmallest()
{
	if (this->getmpRoot() == nullptr)
	{
		return;
	}
	TransactionNode * pTemp;

	while (pTemp->getmpLeft())
	{
		pTemp = static_cast<TransactionNode*>(pTemp->getmpLeft());
	}
	return *pTemp;
}

TransactionNode & BST::findLargest()
{
	if (this->getmpRoot() == nullptr)
	{
		return;
	}
	TransactionNode * pTemp;

	while (pTemp->getmpRight())
	{
		pTemp = static_cast<TransactionNode*>(pTemp->getmpRight());
	}
	return *pTemp;
}

void BST::insert(Node *& pNewNode, Node *& pCurNode)
{
	if (static_cast<TransactionNode*>(pNewNode)->getmUnits() < static_cast<TransactionNode*>(pCurNode)->getmUnits())
	{
		insert(pNewNode, pCurNode->getmpLeft());
	}
	else if (static_cast<TransactionNode*>(pNewNode)->getmUnits() > static_cast<TransactionNode*>(pCurNode)->getmUnits())
	{
		insert(pNewNode, pCurNode->getmpRight());
	}
	else
	{
		cout << "Duplicate" << endl;
	}
}
