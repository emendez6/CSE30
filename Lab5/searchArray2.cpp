#include <fstream>
#include <iostream>
using namespace std;
int checkArraySort (string* arr, int arr_size)
{
	int dec = 0, inc = 0;//declare and initialize variables
	for (int i = 0;i < arr_size; i++)
	{
		if (arr[i] < arr[i+1])
		{
			inc++;//increment for increasing
		}

		else if (arr[i] > arr[i+1])
		{
			dec++;//increment for nonincreasing
		}
	}

	if (inc == arr_size -1)
	{
		return 1;//means it is an increasing array
	}

	if (dec == arr_size -1)
	{
		return 0;//a non increasing array
	}
}

int binarySearchL (string *arr, int size, string value)
{
	int first = 0, mid = 0, last = size - 1;

	for (int i = 0; i < size; i++)
	{
		mid =(first + last)/2;
		if (arr[mid] == value)
		{
			return mid;
		}

		else if (arr[mid] > value)
		{
			last = mid - 1;
		}

		else
		{
			first = mid - 1;
		}
	}

	return -1;
}

int main
{
	if stream file_in;
	file_in.open("words_in.txt");//open file
	string line;
	int count = 0;//delcare and initialize count

	if  (file_in.is_open() )
	{
		while (!file_in.eof() )
		{
			getline (file_in, line);//get the entire line while the file is not closed
			count++
		}
	}

	count -= 1;
	file_in.close();
	string *arr = new string [count];//declare a new array of strings
	file_in.open("words_in.txt");

	if (file_in.is_open() )
	{
		for (int i = 0; i < count; i++)
		{
			getline (file_in, line);
			arr[i] = line;
		}
	}

	ofstream file_out;
	file_out.open("words_out.txt");

	for(int i = 0; i < count; i++)
	{
		file_out<< arr[i] << endl;
	}

	cout << count << endl;
	file_out.close();
}
