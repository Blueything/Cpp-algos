#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int num=97;
    
    if(num%2==0 || num==2)
    {
        cout<<"not prime";
    }
    else{
        for(int i=3;num>i;i=(i+2))
        {
            if(num%i==0)
            {
                sum=sum+1;
                cout<<"Not prime";
                break;
            }
            if(i==(num-2) && sum==0)
            {
                cout<<"prime";
            }
        }
    }
    
    
}
