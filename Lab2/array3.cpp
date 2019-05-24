#include <iostream>
using namespace std;
int main()
{
	int size;//declare a variable that will save the size value
	cout << "Enter the Size of a 2D array: ";//ask the user for the size of the 2D array
	cin >> size;//save the input into the size variable

	if (size < 10 && size > 0)//set a condition so that the size value is a positive number no greater than 10
	{

		int arr[10][10];//declare an array with the highest possible size
		int neg;//declare a variable that will keep track of the negative numbers
		for (int i = 0; i < size; i++)//do a for loop with the letter i for the rows of the 2D array
		{
			cout << "Enter the values in the array for row" << (i + 1) << ", seperated by a space, and press enter: ";//ask the user for the numbers
			for (int j = 0; j < size; j++)//incorporate another for loop with j for the columns in the 2D array
			{

			cin >> arr[i][j];//begin to save the values into the 2D array
			if (arr [i][j] < 0)//if there is a negative value
				neg++;//then add neg + 1

			}
		}

		if (neg > 0)//if there were more than 0 negative values then
			cout << "There are " << neg << " negative values!";//print out this statement
		else//otherwise there were no negative values tehn
			cout << "All values are non-negative!";//print out this statement
	}
	else if (size < 0)//if the user inputs a negative value then
		cout << "ERROR: You've entered an incorrect value for the array!" << endl;//print out this statement

	else if (size > 10)//if the value is greater than 10 then
		cout << "ERROR: Your array is too large! Enter 1 to 10" << endl;//print out this statement

	return 0;
}
