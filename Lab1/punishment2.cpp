#include <iostream>
using namespace std;
int main()
{
int num;
int typo;
        cout << "Enter the number of lines for the punishment:" << endl;
        cin >> num;
	cout << "Enter the line for which you want to make a typo: " << endl;
        cin >> typo;

	if (num < 0)
        cout << "You entered an incorrect value for the number of lines!" << endl;
	if (typo < 0)
	cout << "You entered an incorrect value for the  line typo!" << endl; 
        else
        	for (int i = 0; i < num;i++)
			if (i+1 == typo)
				cout << "I will always use object oriented programing." << endl;
			else
        			cout << "I will always use object oriented programming." << endl;
        return 0;
}
