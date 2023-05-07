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
	

	//========================================================//

	// Release previously allocated memory - fill in the code here
	//========================================================//
	
	
	//========================================================//
	
	delete list;
	return 0;
}