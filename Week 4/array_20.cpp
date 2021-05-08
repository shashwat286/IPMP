#include <bits/stdc++.h>
using namespace std;

int main()
{

	int arr[100],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	   cin>>arr[i];
	}
	// HashMap here is applicable only the value of element in array is less than array size
  for (int i = 0; i < n; i++) {
		arr[arr[i] % n]
			= arr[arr[i] % n] +n;
	}
	cout << "The repeating elements are : " << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= n* 2) {
			cout << i << " " << endl;
		}
	}
	return 0;
}