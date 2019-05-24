#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;//declare an array in order to save the characters in the word the user will type in

	cout << "Please enter the string you want to reverse: " << endl;//ask the user for the word
	getline(cin, word);//save the word into the array word
	for (int i = word.length() - 1; i > -1; i--)//do a for loop in order to reverse the letters
	{
		cout << word[i];//print out the letters begining with the last one
	}

    return 0;
}

