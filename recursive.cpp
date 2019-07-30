
#include <iostream>
using namespace std;
int recursiveMax(int[], int);
int max(int, int);

int main()
{
  int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2,};
  cout<<"array is:"<<arr[0];
  for(int i=1;i<10;i++)
    cout<<","<<arr[i];
  int max = recursiveMax(arr, 10);
  cout<<"\nMaximum element:"<<max;
  return 0;
}

int recursiveMax(int* arr, int length)
{
  if (length == 1)
    return arr[0];
  return max(recursiveMax(arr, length - 1), arr[length - 1]);
}

int max(int n1, int n2)
{
  return n1 > n2 ? n1 : n2;
}
