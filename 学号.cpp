#include <iostream>
using namespace std;
int main() {
    cout<<"请输入一个数字： "<< endl;
    while (1)
    {
        unsigned char a=0;
        int ia = (int)a;
        cin >> ia;
        if(ia < 128)
        {
            cout<<"男生"<<ia<<"号"<<endl;
        }
        else
        {
            ia -= 128;
            cout<<"女生"<<ia<<"号"<<endl;
        }
    }
}
