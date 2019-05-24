#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	ifstream file_in;
	file_in.open("words_in.txt");//opens the file
	string line;
	int count = 0;//declare and initialize variable

	if (file_in.is_open() )
	{
		while(!file_in.eof() )
		{
			getline (file_in, line);//get the entire line while the file is not closed
			count++;
		}
	}

	file_in.close();
	string *arr = new string [count];//create a new array of strings
	file_in.open("words_in.txt");

	if (file_in.is_open() )
	{
		for (int i = 0; i < count; i++)
		{
			getline (file_in, line);//save int array
			arr[i] = line;
		}
	}

	ofstream file_out;
	file_out.open("words_out.txt");

	for (int i = 0; i < count; i++)
	{
		file_out << arr[i] << endl;
	}

	file_out.close();// close the file
}
