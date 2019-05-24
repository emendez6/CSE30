#include <iostream>
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

		int increasing = 0;//declare this variable in order to determine if the numbers are increasing

		for (int i = 0; i < size; i++ )// a for loop in order to save the numbers into the array starting with index 0
		{
			cin >> arr[i];// saving the numbers into the array
			if (arr[i] > arr[i + 1])//determining whether the numbers are increasing, if they are not the increasing will equal 1 instead of 0
				increasing = 1;
		}

		if (increasing = 0)// since increasing continues to be 0 instead of 1 then that means the numbers are increasing
			cout << "This IS an increasing array!" << endl;//print out it is an increasing array

		else//otherwise if increasing = 1
			cout << "This is NOT an increasing array!" << endl;// print out it is not an increasing array

		for(int j = 0; j < size; j++)// set a for loop in order to print out the values in the array
			cout <<  arr[j] <<  " ";//print out the values in a line
	}

	return 0;
}
