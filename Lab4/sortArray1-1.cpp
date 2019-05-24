#include <iostream>
#include <string>
using namespace std;
void sortArr (int arr[],int size,int sort)//declaration ofsortArr function
{
	if (sort == 0)//for increasing
	{
		for (int i = size - 1; i > 0; i--)
		{
			int max_index = 0;// declare max index to save max
			for (int j = 1; j <= i; j++)
			{
				if (arr[j] > arr[max_index])//check if the value is greater than max
					max_index = j;//save that new value into max
			}

			if(max_index != i)//if the two index are not equal
				swap (arr[max_index],arr[i]);//swap values in those index
		}
		cout << "This is the array in ascending order: ";
		for (int i = 0; i < size; i++)
			cout << " " << arr[i];//print values
			cout << endl;
	}
	if (sort == 1)//for descending
	{
		for (int i = size - 1; i > 0; i--)
		{
			int min_index = 0;//declare min
			for (int j = 1; j <= i; j++)
			{
				if (arr[j] < arr[min_index])//check in value is less than min
					min_index = j;//save new value into min
			}

			if(min_index != i)//if two index are not equal
				swap (arr[min_index],arr[i]);//swap numbers in those index
		}
		cout << "This is the array in descending order: ";
		for (int i = 0; i < size; i++)
			cout << " " << arr[i];//print values
			cout << endl;
	}
	return;
}
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
                {
                        cin >> arr[i];// saving the numbers into the array
            	}
		int sort;//declare sort
		cout << "Sort in ascending (0) or descending (1) order? ";//prompt user for inc. or dec. order
		cin >> sort;//save answer into sort
		sortArr(arr, size, sort);//call sortArr function
        }
        return 0;
}



