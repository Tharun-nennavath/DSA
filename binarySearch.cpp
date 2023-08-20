#include<iostream>
using namespace std;

int
binarySearch (int n, int arr[], int key)
{
  int low = 0;
  int high = n;
  while (low <= high)
    {
      int mid = (low + high)/2;
      if (arr[mid] == key)
	{
	  return mid;
	}
      else if (key < mid)
	{
	  high = mid - 1;

	}
      else
	{
	  high = mid + 1;
	}

    }
return 0;

}


int
main ()
{
  int n;
  cout << "Enter the size of n:";
  cin >> n;
  int arr[n];
  cout << "Enter the elements :";
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int key;
  cout << "Enter the value of key";
  cin >> key;
  cout << binarySearch (n, arr, key);
  return 0;
}

