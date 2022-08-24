#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;
    int arr[n];
    int temp;
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int x;
    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){
            x=i;
            if(arr[x]>arr[j]){
                x=j;
            }
                temp=arr[x];
                arr[x]=arr[i];
                arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

