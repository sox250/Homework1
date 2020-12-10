#include<iostream>
using namespace  std;
int main()
{
    for(int i = 15; i <= 95; i += 10)
    {
        for(int j = 15; j <= i; j += 10)
        {
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}