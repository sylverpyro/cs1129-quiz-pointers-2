//-------------------------------------------------------------------
// File		:pointerQuiz.C
// Author	:Michael Benson
// Course	:CS1129
// Date		:March 14, 2006
//
//-------------------------------------------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int *a1, *a2, *a3, sizeA1, sizeA2, sizeA3;
	int *a1e, *a2e, *a3e, *a3Start;

	cout << "Enter size of list one: ";
	cin >> sizeA1;
	cout << endl;
	
	cout << "Enter size of list two: ";
	cin >> sizeA2;
	cout << endl;

	a1 = new int[sizeA1];
	a2 = new int[sizeA2];

	cout << "Enter " << sizeA1;
	cout << " integers in ascending order : ";

	for ( int i = 0; i < sizeA1; i++)
	{
		cin >> *(a1+i);
	}

	cout << endl;
	
	cout << "Enter " << sizeA2;
	cout << " integers in ascending order : ";
	
	for ( int i = 0; i < sizeA2; i++)
	{
		cin >> *(a2+i);
	}
	
	cout << endl;
	
	sizeA3 = sizeA1 + sizeA2;
	a3 = new int[sizeA3];
	
	a1e = a1+(sizeA1);
	a2e = a2+(sizeA2);
	a3e = a3+(sizeA3);
	a3Start = a3;
	
	for ( ; a3 < a3e; a3++ )
	{
		if ( a1 != a1e && a2 != a2e )
		{
			if ( *a1 < *a2 )
			{
				*a3 = *a1;
				a1++;
			}
			else
			{
				*a3 = *a2;
				a2++;
			}
		}

		else if ( a1 = a1e )
		{
			*a3 = *a2;
			a2++;
		}

		else if ( a2 = a2e )
		{
			*a3 = *a1;
			a1++;
		}
	}

	a3 = a3Start;
	cout << "Merged List : ";
	for ( int i = 0; i < sizeA3; i++ )
	{
		cout << *(a3+i) << " ";
	}

	cout << endl;
}
