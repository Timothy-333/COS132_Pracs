using namespace std;
#include <iostream>

int * recursiveSort(int numbers[], int itr1, int itr2);

int main() 
{
	int numbers[4];
	cout << "Enter 4 integer values: ";
	cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
	recursiveSort(numbers,0,0);
	return 0;
}
int * recursiveSort(int numbers[], int itr1, int itr2)
{
	if (itr1 < 4)
	{
		cout << "itr1:" << itr1 << " itr2:" << itr2 << " array:";
		cout << numbers[0] << "," << numbers[1] << "," << numbers[2] << "," << numbers[3] << endl;
		if(numbers[itr1] > numbers[itr2])
		{
			int temp = numbers[itr1];
			numbers[itr1] = numbers[itr2];
			numbers[itr2] = temp;
		}
		if (itr2 >= 3)
		{
			itr1++;
			recursiveSort(numbers,itr1,0);
		}
		else
		{
			itr2++;
			recursiveSort(numbers,itr1,itr2);
		}
	}
	return numbers;
}