#include<iostream>
using namespace std;

void printSum(int arr[3][3], int row, int col)
{
    cout<<"Printing sum: "<<endl;
     for(int row=0; row<3; row++)
    {
        int sum = 0;

        for(int col=0; col<3; col++)
        {
            sum += arr[row][col];
        }
        cout<< sum<< " ";
    }
}

int main()
{
    int arr[3][3];

    //Taking input row wise

    cout<<"Enter the elements: ";

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cin>>arr[row][col];
        }
    }

    //print
    cout<<"Printing the array: ";
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    printSum(arr, 3,3);


    return 0;

}