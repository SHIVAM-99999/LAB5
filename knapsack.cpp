#include<iostream>
#include<algorithm>
using namespace std;

struct Item{
int profit,weight;
};

bool cmp(Item a,Item b){
double r1=(double)a.profit/a.weight;
double r2=(double)b.profit/b.weight;
return r1>r2;
}

int main(){
int n,cap;
cout<<"Enter number of items: ";
cin>>n;

Item arr[n];

for(int i=0;i<n;i++){
cout<<"Enter profit and weight: ";
cin>>arr[i].profit>>arr[i].weight;
}

cout<<"Enter capacity: ";
cin>>cap;

sort(arr,arr+n,cmp);

double total=0;

for(int i=0;i<n;i++){
if(arr[i].weight<=cap){
total+=arr[i].profit;
cap-=arr[i].weight;
}
else{
total+=((double)arr[i].profit/arr[i].weight)*cap;
break;
}
}

cout<<"Maximum Profit = "<<total;
return 0;
}