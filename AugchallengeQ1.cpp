#include <iostream>
using namespace std;

int main() {
	 int T;
   cin>>T;
   while(T--)
   {
   int P,H;
   
   cin>>H;
   cin>>P;
   while(P>0&&H>0)
   {
       H=H-P;
       P=P/2;
   }
 
   
   if(H>P)
   cout<<0<<endl;
   else
   cout<<1<<endl;
       
   }

    return 0;
}
