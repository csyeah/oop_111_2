#include <iostream>
#include "CustomerList.h"
using namespace std;

int main(void) {
	int i = 0;
	CustomerList* list = new CustomerList();
	list->to(i, new OrdinaryCustomer("Vivian", "Wang", "Taichung", "Holsten"));
	++i;
	list->to(i, new PremiumCustomer("Sam", "Lee", "Kaohsiung", "Bordeaux"));
	++i;
	list->to(i, new OrdinaryCustomer("John", "Chen", "Taipei", "Ginger Ale"));
	
	// Produce outputs (Write messages for the secretary) - fill in the code here
	//========================================================//
	std::cout << std::endl;
	for (int j = 0; j < 3; j++)
	{
		(list->at(j))->christmasPresent();
		std::cout << std::endl;
	}
	

	//========================================================//

	// Release previously allocated memory - fill in the code here
	//========================================================//
	for (int j = 0; j < 3; j++)
	{
		delete (list->at(j));
		list->remove(j);
	}
	
	//========================================================//
	
	delete list;
	return 0;
}