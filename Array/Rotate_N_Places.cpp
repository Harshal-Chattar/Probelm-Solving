#include<iostream>
using namespace std;

void Reverse(int arr[],int start, int end)
{
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int rotate(int arr[],int n, int k)
{
    Reverse(arr, 0 ,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    int k = 2;
    rotate(arr,n,k);
    cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}