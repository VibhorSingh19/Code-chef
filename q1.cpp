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
        
             int max2;
             for(int i=0;i<n;i++)
             {
                 int max=*max_element(arr, arr + n);
                 max2=-1;
                for(int j=0;j<n;j++)
                 {
                    if(arr[j]<max && max2<arr[j])
                    {
                     max2=arr[j];
                     }
                     
                 }
                 cout<<endl<<"max:"<<max;
                 cout<<endl<<"second:"<<max2;
             
                 if(max2==-1)
                 {
                     cout<<endl<<"max:"<<max;
                 cout<<endl<<"second:"<<max2;
                 c1+=1;
                 break;
                 }
                 if(arr[i]>max2)
                 {
                     arr[i]=max2;
                 }
                 c1++;
                 for(int j=0;j<n;j++)
                 {
                  cout<<endl<<arr[j];   
                 }
                 cout<<endl<<"........";
             }
             
            
            
        
        cout<<endl<<c1;
    }
    

    return 0;
}
