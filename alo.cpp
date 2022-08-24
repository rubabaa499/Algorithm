#include<iostream>
using namespace std;


void printArr(int arr[],int n)
{
    for(int k=0 ; k < n ;k++)
       {
        cout<<" "<< arr[k]<<" ";
        }
cout<<endl;
}

void insertion(int arr[],int n)
{
    for(int i=1; i<n ;i++)
    {
       int temp=arr[i];
        int j=i-1;
        while(j >= 0 && arr[j]> temp)
        {
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = temp;

    }
}

int main()
{
    int arraylist[] = {6,2,12,21,4,10};
    int size = sizeof(arraylist)/sizeof(arraylist[0]);

    cout<<" Unsorted Array is = \n ";
    printArr(arraylist,size);

    insertion(arraylist,size);
    cout<<" array sorted in ascending order = \n ";

    printArr(arraylist,size);
}

