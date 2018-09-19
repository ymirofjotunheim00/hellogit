#include "Data.h"
#include <iostream>
#include <vector>

using namespace std;

// Here we record the success rate of the Avengers. After the ratification of the sokovia accords it is our duty to keep tabs on these heroes.

int main()
{
	vector <Data> result1;
	
	Data result2 = { 10, 96.7 };
	

	result1.push_back(result2);

	for( int i = 0; i < result1.size(); i++)
	{
		cout << result1[i].getHeroCount() << ", " << result1[i].getSuccessRate() << endl;
	}

	return 0;
	
}
