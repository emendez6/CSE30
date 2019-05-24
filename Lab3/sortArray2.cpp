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
                {
                        cin >> arr[i];// saving the numbers into the array
                }

		int swp = 0;
                for (int i = size - 1; i > 0; i--)
                {
                        int min_index = 0;
                        for (int j = 1; j <= i; j++)
                        {
                                if (arr[j] < arr[min_index])
                                        min_index = j;
                        }

                        if(min_index != i)
			{
                                swap (arr[min_index],arr[i]);
				swp++;
			}
                }
                cout << "This is the sorted array in descending order: ";
                for (int i = 0; i < size; i++)
                        cout << arr[i] << " ";
                cout << endl;
                cout << "The algorithm selected the minimum for the traverse of the array.";
                cout << endl;
		cout << "It took " << swp << " swaps to sort the array..." << endl;
        }
        return 0;
}



