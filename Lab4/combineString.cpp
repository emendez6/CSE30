#include <iostream>
#include <string>
using namespace std;
string combineStr (string input, int n)// combineStr function
{
	string output;//declare output
	if (n > 0)//set condition
	{
		cout << "The resulting string is: ";//print resulting string
		for(int i = 0; i < n; i++)//for loop to print string n times which is what the user asked for
		{
			cout << input;
		}
		cout << endl;
	}

	return output;
}
int main()
{
	string strng;//declare string 
	int times;//declare times
	cout << "Enter a string: ";//prompt user for word
	getline (cin, strng);//save the word into variable strng
	cout << "Enter the number of times: ";//prompt user for number of times to print it out
	cin >> times;//save input into variable times
	combineStr(strng, times);//call the combineStr function

	return 0;
}
