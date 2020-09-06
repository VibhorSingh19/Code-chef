#include <iostream>
using namespace std;

int main() {
	 int T;
   cin>>T;
   while(T--)
   {
   int Pc,Pr;
   
   cin>>Pc;
   cin>>Pr;
   int x=Pc,y=Pr,c1=0,c2=0;
   while(x>0)
   {
       x=x/10;
       c1++;
   }
   while(y>0)
   {
       y=y/10;
       c2++;
   }
   
   if(c1==c2)
   cout<<"1 "<<c2<<endl;
   else if(c1>c2)
   cout<<"1 "<<c2<<endl;
   else
   cout<<"0 "<<c1<<endl;
   
       
   }

    return 0;
}
