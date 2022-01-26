#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{  int s=0,e=n;
    while(s<=e)
     {
         int mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
     
     else if(arr[mid]>key) 
     {
         e=mid-1;
     }
     else{
         s=mid+1;
         }
     }
     return -1;
}
int main()
{   int temp;
    int n;
    int key;
    cout<<"Enter the size of array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number your want to search";
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;

    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {   if(arr[i]<arr[j])
    //         {
    //             int temp=arr[j];
    //             arr[j]=arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // int counter =1;
    // while(counter<n)
    // {
    //     for(int i=0;i<n-counter;i++)
    //     {   if(arr[i]>arr[i+1])
    //         {temp = arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]= temp;
    //         }
    //     }
    //   counter++;
    // }
  
   
    for(int i=0; i<n; i++)
    {
     cout<<arr[i]<<" ";
     
    }cout<<endl;

   
  
    
}
