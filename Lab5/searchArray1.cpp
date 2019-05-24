#include <fstream>
#include <iostream>
using namespace std;
int checkArraySort (string* arr, int arr_size)
{
	int dec = 0, inc = 0;//declare and initialize variables

	for (int i = 0; i < arr_size -1; i++)
	{
		if (arr[i] < arr[i + 1])//increment if array is increasing
			inc++;

		else if (arr [i] > arr[i + 1])//increment if array is not inc.
			dec++;
	}

		if (inc == arr_size - 1)
			return 1;//for an increasing array

		if (dec == arr_size - 1)
			return -1;//for a nonincreasing array
}

int binarySearchR (string *arr, int first, int last, string value)
{
	if (first > last)
		return -1;

	int mid = (first + last)/2;
	if (arr[mid] == value)
		return mid;

	else if (arr[mid] < value)
		return binarySearchR (arr, mid + 1, last, value);

	else
		return binarySearchR (arr, first, mid - 1, value);
}

int main
{
	ifstream file_in;
	file_in.open("words_in.txt");//open the file
	string line;
	int count = 0;//initialize and declare variable

	if (file_in.open() )
	{
		while (!file_in.eof() )
		{
			getline (file_in, line);//get the entire line while file is not closed
			count++;//increment count
		}
	}

	count-=1;
	file_in.close();
	string *arr = new string [count];//declare new array of strings
	file_in.open("words_in.txt");

	if (file_in.is_open() )
	{
		for (int i = 0; i < count; i++)
		{
			getline (file_in, line);
			arr[i] = line;
		}
	}

	cout << count << endl;//print count
	file_out.close ();//close file


}
