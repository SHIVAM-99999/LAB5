#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter size: ";
cin>>n;

int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int mx=arr[0],mn=arr[0];

for(int i=1;i<n;i++){
if(arr[i]>mx)
mx=arr[i];

if(arr[i]<mn)
mn=arr[i];
}

cout<<"Maximum = "<<mx<<endl;
cout<<"Minimum = "<<mn;

return 0;
}