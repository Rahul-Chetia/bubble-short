#include <iostream>

using namespace std;
void bubble_sort(int arr[],int n)
{
    int temp;
        for(int j=0;j<n;j++)
        {
            for(int i=0;i<n;i++)
            {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            }
        }
}
int main()
{
    int arr[10],n=10;
    cout<<"Enter 10 elements:";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"The sorted array in ascending order is:";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
