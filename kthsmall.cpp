#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
int pivot=arr[high];
int i=low;

for(int j=low;j<high;j++){
if(arr[j]<pivot){
swap(arr[i],arr[j]);
i++;
}
}

swap(arr[i],arr[high]);
return i;
}

int kthSmallest(int arr[],int low,int high,int k){
if(low<=high){
int pi=partition(arr,low,high);

if(pi==k-1) return arr[pi];
if(pi>k-1) return kthSmallest(arr,low,pi-1,k);
return kthSmallest(arr,pi+1,high,k);
}
return -1;
}

int main(){
int n,k;
cout<<"Enter size: ";
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

cout<<"Enter k: ";
cin>>k;

cout<<"Kth Smallest = "<<kthSmallest(arr,0,n-1,k);

return 0;
}