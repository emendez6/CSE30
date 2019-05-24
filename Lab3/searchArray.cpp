#include <iostream>
#include <string>
using namespace std;
int main()
{
	int size;// declare a variable to save the value the user inputs for the size of the array
	cout << "Enter the size of the array: ";// ask the user to input the variable
	cin >> size;// save that number into the size variable

	if (size < 0)// set conditions that way only positive numbers are accepted
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;

	else// continue to run if it is a positive number
	{
		cout << "Enter the numbers in the array, seperated by a space, and press enter: ";//ask the user for the numbers
		int arr [size];// declare an array in order to be able to save the numbers

		for (int i = 0; i < size; i++ )// a for loop in order to save the numbers into the array starting with index 0
			cin >> arr[i];// saving the numbers into the array

		int search = 0;
		int checks = 1;
		cout << "Enter a number to search for in the array: ";
		cin >> search;

		for(int j = 0; j < size; j++)
		{
			if (search != arr[j])
			{
				checks++;
			}

			if (search == arr[j])
			{
				cout << "Found value " << search << " at index " << j << ", which took " << checks << " checks." << endl;
				if (checks == 1)
					cout << "We ran into the best case scenario!" << endl;
				else if (checks == size)
					cout << "We ran into the worst case scenario!" << endl;
			}

			if (search != arr[j] && checks > size)
			{
				cout << "The value " << search << " was not found in the array!" << endl;
			}
		}
	}

	return 0;
}
