#include <iostream>
using namespace std;

int wahyu[22];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter The Number of element in the Array: ";
		cin >> n;
		if ((n > 0) && (n <= 30))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 22 elements. \n\n";


	}
	cout << "\n---------------\n";
	cout << "Enter aray Element\n";
	cout << "------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << ">";
		cin >> wahyu[i];
	}

}

void LinearSearch()
{
	char ch;
	int ctr;
	do
	{
		cout << "\n Enter the element you want to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)
		{
			ctr++;
			if (wahyu[i] == item)
			{
				cout << "\n" << item << "found at position" << (i + i) << endl;
				break;
			}
		}
		if (i == n)
			cout << "\n" << item << "not found \n";
		cout << "\nNumber of comparison: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'y'));

}

int main()
{
	input();
	LinearSearch();
	return 0;
}
