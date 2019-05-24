#include <iostream>
#include <string>
using namespace std;
void sortArr (int arr[], int size, int sort)//declare sortArr function
{
	int  save;
	if (sort == 0)//for increasing
	{
		for (int i = 1; i < size; i++)
		{
			int j = i;
			save = arr[j];
			while (j > 0 && arr[j-1] > save)//if j is positive and the value in the array is larger than the saved value
			{
				arr[j] = arr[j-1];
				j--;
			}
			arr[j] = save;//this index now has the saved value
		}
		cout << "This is the array in ascending order: ";
	}
	if (sort == 1)//for decreasing
	{
		for (int i = 1; i < size; i++)
		{
			save = arr[i];//initial value for saved is the value at the first index
			int j = i;
			while (j > 0 && arr[j-1] < save)// j a positive and less than the saved value
			{
				arr[j] = arr[j-1] 
				j--;
			}
			arr[j] = save;//new index for the saved value
		}
		cout << "This is the array in descending order: ";
	}

	for (int j = 0; j < size; j++)//print out the values
	{
		cout << " " << arr[j];
	}
	cout << endl;
	return;
}
int main()
{
	int size;// declare a variable to save the value the user inputs for the size of the array
	cout << "Enter the size of the array: ";// ask the user to input the variable
	cin >> size;// save that number into the size variable

	if (size < 0)// set conditions that way only positive numbers are accepted
	{
		cout << "ERROR: you entered an incorrect value for the array size!" << endl;
	}

	else// continue to run if it is a positive number
	{
		cout << "Enter the numbers in the array, seperated by a space, and press enter: ";//ask the user for the numbers
		int arr [size];// declare an array in order to be able to save the numbers

		for (int i = 0; i < size; i++ )// a for loop in order to save the numbers into the array starting with index 0
		{
			cin >> arr[i];// saving the numbers into the array
		}
		int sort;
		cout << "Sort in ascending (0) or descending (1) order? ";//prompt user for inc. or dec. order
		cin >> sort;//save answer into sort
		sortArr(arr, size, sort);//call sortArr function
		}
	return 0;
}

