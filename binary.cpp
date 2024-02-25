#include<iostream>
using namespace std;
int main()
{
    int i,array[10],n,element,lb=0,ub,mid;
cout<<"Enter the no of elements you want in array"<<endl;
cin>>n;
cout<<"Enter elements in the array "<<endl;
for(i=0;i<n;i++)
{
    cin>>array[i];
}
cout<<"The array is "<<endl;
for(i=0;i<n;i++)
{
    cout<<array[i]<<" ";
}
cout<<"Enter the element you want to search in array "<<endl;
cin>>element;
ub=n-1;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(element==a[mid])
    {
        cout<<"Term Found"<<endl;
    }
    else if(element<a[mid])
    {
        ub=mid-1;
    }
    else
    {
        lb=mid+1;
    }
    
}
    return 0;
}
