#include "SOD.h"

int main()  
{  
    int n=123,sum=0,m;    
    cout<<"********************* Sum of digit program is Running **************************"<<endl;
    while(n>0)    
    {    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }    
    cout<<"Sum is= "<<sum<<endl;    
    system("pause");
    return 0; 
}  