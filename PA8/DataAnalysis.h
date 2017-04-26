#include "BST.h"
#include "Shared.h"

class DataAnalysis
{

public:
	DataAnalysis();
	~DataAnalysis();
	void RunAnalysis();




private:
	
	BST mTreeSold;
	BST mTreePurchased;
	ifstream mCSVStream;

	void FileParser();


};

