#include "DataAnalysis.h"

DataAnalysis::DataAnalysis()
{
	mTreeSold.setmpRoot(nullptr);
	mTreePurchased.setmpRoot(nullptr);
	mCSVStream.open("data.csv");
}

DataAnalysis::~DataAnalysis()
{
	mCSVStream.close();
}

void DataAnalysis::FileParser()
{

	string tempStr1, tempStr2, tempStr3;	
	getline(mCSVStream, tempStr1);
	//Loop to create trees
	while (!mCSVStream.eof())
	{
		getline(mCSVStream, tempStr1, ',');
		getline(mCSVStream, tempStr2, ',');
		getline(mCSVStream, tempStr3);

		if (tempStr3 == "Purchased")
		{
			mTreePurchased.insert(tempStr2, stoi(tempStr1));
		}
		else if (tempStr3 == "Sold")
		{
			mTreePurchased.insert(tempStr2, stoi(tempStr1));
		}
	}


	//Trees are complete, file is read entirely.
	//Print out each tree in order

	cout << "Purchase Orders : ";
	mTreePurchased.inOrder();
	cout << endl << endl;
	cout << "Devices Sold : ";
	mTreeSold.inOrder();
	cout << endl << endl;

	//Prints out each tree's most and least popular sales
	(mTreePurchased.findSmallest()).printData();
	(mTreePurchased.findLargest()).printData();

	(mTreeSold.findSmallest()).printData();
	(mTreeSold.findLargest()).printData();

}
