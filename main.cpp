#include "Data.h"
#include <iostream>
#include <vector>

using namespace std;

// Here we record the success rate of the Avengers. After the ratification of the sokovia accords it is our duty to keep tabs on these heroes.
void print(auto Data)
{
  for( int i = 0; i < Data.size(); i++)
	{
		cout << Data[i].getHeroCount() << ", " << Data[i].getSuccessRate() << endl;
	}


}

void bubbleSort (auto& Data)
{
	for (int i = 0; i < Data.size(); i++)
	{
		for (int j = 0; j < Data.size() -1; j++)
		{
			if (Data[j].getHeroCount() > Data[j+1].getHeroCount())
			{
				swap(Data[j], Data[j+1]);			
			}
		}
		print(Data);	
	}
}

int main()
{
	vector <Data> result1;
	
	Data result2 = { 10, 96.7 };
Data result3 = { 50, 96.3 };
Data result4 = { 76, 97.3 };
Data result5 = { 2, 52.3 };
Data result6 = { 7, 12.6 };
Data result7 = { 19, 67.7 };
	

	result1.push_back(result2);
result1.push_back(result3);
result1.push_back(result4);
result1.push_back(result5);
result1.push_back(result6);
result1.push_back(result7);

//std::cout << result1[1];

	

bubbleSort(result1);
	
}
