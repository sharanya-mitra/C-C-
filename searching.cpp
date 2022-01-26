#include <iostream>
using namespace std;
// int LinearSearch(int arr[],int n,int key)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i; 
           
//         }
//     }
//      return -1;
// }
int binarySearch(int arry[],int a, int key)
{
    int s=0;
    int e=a;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arry[mid]==key)
        {
            return mid;
        }
        else if(arry[mid]>key)
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
{
//linear search 
//   int n;
//   cin>>n;
//   int arr[n];
// for(int i=0;i<n;i++)
//   {
//       cin>>arr[i];
//   }
//   int key;
//   cin>>key; 
//   cout<<LinearSearch(arr,n,key)<<endl;
// return 0;

 //binary search
int N; 
cin>>N;
int arr[N];
for(int i=0;i<N;i++)
  {
      cin>>arr[i];
  }
  int key;
  cin>>key;
  cout<<binarySearch(arr,N,key)<<endl;
}      
