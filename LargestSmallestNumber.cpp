#include <iostream>
using namespace std;

int main()
{
	int i,n,large,small;
	cout << “Enter number of elements of array: “;
	cin >> n;
	int ar[n];
	cout << “Enter the array elements : “;
	for(i=0;i<n;++i)
	cin >> ar[i];

	large=small=ar[0];

	for(i=1;i<n;++i)
	{
		if(ar[i]>large)
		large=ar[i];

		if(ar[i]<small)
		small=ar[i];
	}

	cout << “\nSmallest element is: ” << small << endl;
	cout << “\nThe largest element is ” << large << endl;

	return 0;
}