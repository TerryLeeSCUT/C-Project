#include<iostream>
#include<iomanip>
using namespace std;

int GetYear()
{
	int temp;
	cout << "Enter the year" << endl;
	cin >> temp;
	return temp;
}

int GetMonth()
{
	int temp;
	cout << "Enter the month" << endl;
	cin >> temp;
	return temp;
}

bool IsLeapYear(int year)
{
	if (year % 4 == 0)
	{
		return true;
	}
	else return false;
}

void PrintDate(int year, int month)
{
	bool isLeapYear = IsLeapYear(year);

	cout << year << " 年 " << month << " 月的日历如下：" << endl;
	cout << "   *   *   *   *   *   *   *" << endl;
	switch (month)
	{


	case 1:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		};
		break;
	case 2:
		if (isLeapYear == true)
		{
			for (int i = 1; i <= 29; i++)
			{
				cout << setw(4) << i;
				if (i % 7 == 0)
				{
					cout << endl;
				}
			}
		}
		else
		{
			for (int i = 1; i <= 28; i++)
			{
				cout << setw(4) << i;
				if (i % 7 == 0)
				{
					cout << endl;
				}
			}
		}
		break;
	case 3:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 4:
		for (int i = 1; i <= 30; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 5:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 6:

		for (int i = 1; i <= 30; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;

	case 7:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 8:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 9:
		for (int i = 1; i <= 30; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 10:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;

			}
		}
		break;
	case 11:
		for (int i = 1; i <= 30; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;
	case 12:

		for (int i = 1; i <= 31; i++)
		{
			cout << setw(4) << i;
			if (i % 7 == 0)
			{
				cout << endl;
			}
		}
		break;

	default:
		cout << "Wrong month!(month can only be between 1 and 12)" << endl;
		break;


	}
}


int main()
{
	int year;
	int month;
	year=GetYear();
	month = GetMonth();
	PrintDate(year, month);
	cout << endl;
	system("pause");
	return 0;
}
