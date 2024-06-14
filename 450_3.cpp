#include<iostream>
using namespace std;
int main()
{
    int a[5]={3,5,7,45,34};
    int m;
    for (int i=0;i<4;i++)
    {
        if (a[i]>a[(i+1)])
        {
            m=a[i];
            a[i]=a[(i+1)];
            a[(i+1)]=m;
        }
    }
     cout<<"The elements of array are in accending order ";
    for (int i=0;i<5;i++)
    {
     cout<<"\t"<<a[i];  
    }
    int k;
    cout<<"\nEnter the value of k ";
    cin>>k;
    cout<<"\n The kth min element is "<<a[k-1];
}