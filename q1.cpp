
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for (int i = 0; i < n; ++i) 
        cout << arr[i] << " "; 
        int x=1,c=0,c1=0;
        while(x==1)
        {
            for(int i=0;i<n;i++)
             {
                 if(arr[i]!=0)
                 c++;
             }
             if(c==0)
             break;
            int max=*max_element(arr, arr + n);
            int max2=-1;
            for(int i=0;i<n;i++)
            {
                if(max2<max && max2<arr[i])
                {
                max2=arr[i];
                }
            }
             cout<<endl<<"max:"<<max;
             cout<<endl<<"second:"<<max2;
             break;
             /*for(int i=0;i<n;i++)
             {
                 if(arr[i]>max2)
                 {
                     arr[i]=arr[i]-(max-max2);
                 }
                 c1++;
             }*/
        
        
            
        c=0;
            
        }
        
    }
    

    return 0;
}
