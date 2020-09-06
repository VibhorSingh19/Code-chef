
#include <iostream>
using namespace std;

int main() {
	 int T;
   cin>>T;
   while(T--)
   {
   int N,K;
   
   cin>>N;
   cin>>K;
   int arr[N];
   for(int i=0;i<N;i++)
   {
       cin>>arr[i];
   }
   long  min=99999999999,num=-1,c=0;
   for(int i=0;i<N;i++)
   {
       if((arr[i]<K) && (K%arr[i]==0))
       {
       c=K/arr[i];
       if(c<min)
       {
       min=c;
       num=arr[i];
       }
       }
   }
   cout<<num<<endl;
       
   }

    return 0;
}
