
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,c=0;
        cin>>n;
        int freq[10]={0};
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0;i<n;i++)
        {
            freq[arr[i]]=1;
        }
        for(int i=1;i<=9;i++)
        {
            if(freq[i]==1)
            c++;
        }
       cout<<c<<endl; 
        
    } 
        
}
       

