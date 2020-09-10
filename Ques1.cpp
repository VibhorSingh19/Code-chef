
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
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (int i = 0; i < n; i++) 
        {
            if(arr[i]!=0) 
            {
                int x=arr[i];
            c++;    
            
          for (int j = i; j < n; j++) 
        {
            
            //cout<<x;
            arr[j]=arr[j]-x;
            
        } 
        
            }
        }
        cout<<c<<endl;
        
        
    }
             
            
            
        
        //cout<<endl<<c1;
    }
    


