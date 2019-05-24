#include <fstream>
#include <iostream>
using namespace std;

int checkArraySort (string* arr, int arr_size)
{
	int inc = 0, dec = 0;
	for (int i = 0; i < arr_size - 1; i++)
	{
		if (arr[i] < arr[i + 1])//check if the numbers are increasing
		{
			inc++;//increment inc
		}

		if (arr[i] > arr[i + 1])//check if the numbers are decreasing
		{
			dec++;//increment dec
		}
	}

	if (inc == arr_size-1)
	{
		return 1;//return 1 since it is increasing
	}

	else if (dec == arr_size-1)
	{
		return -1;//return -1 since it is decreasing
	}
	else
	{
		return 0;//return 0 since it is neither increasing or decreasing
	}
}

int main ()
{
	ifstream file_in;
	file_in.open("words_in.txt");//open the file
	string line;
	int count = 0;//declare and initialize count

	if (file_in.is_open() )
	{
		while (!file_in.eof() )//get the entire line while the file is not closed
		{
			getline (file_in, line);
			count++;//increment
		}
	}

	count--;
	file_in.close();
	string *arr = new string [count];//creates a new array of strings
	file_in.open("words_in.txt");

	if (file_in.is_open() )
	{
		for (int i = 0; i < count; i++)
		{
			getline (file_in, line);
			arr[i] = line;//save into array
		}
	}

	ofstream file_out;
	file_out.open("words_out.txt");

	for (int i = 0; i < count; i++)
	{
		file_out << arr[i] << endl;
	}

	cout << count << endl;//print out count
	file_out.close();//close file

	int result = checkArraySort (arr, count);//declare new variable that will either be -1,0 or 1 depending on what function checkArraySort returns

	if (result == -1)//print out according to appropriate scenario
	{
		cout << "The array is in descending order!" << endl;
	}

	else if (result == 0)
	{
		cout << "The array is not sorted!" << endl;
	}

	else if (result == 1)
	{
		cout << "The srray is in ascending order!" << endl;
	}
}
