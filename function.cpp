#include <iostream>
using namespace std;
void homework3(int arr[10])
{
    int i, temp;
    int n = 10;
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    cout << "输出为：" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
void homework1(unsigned char a)
{
    int ia = (int)a;
    if (ia < 128) {
        cout << "男生" << ia << "号" << endl;
    }
    else {
        ia -= 128;
        cout << "女生" << ia << "号" << endl;
    }
}
void homework2(int n)
{
    for (int i = 15; i <= n; i += 10)
    {
        for (int j = 15; j <= i; j += 10)
        {
            cout << j << "*" << i << "=" << j * i << " ";
        }
        cout << endl;
    }
}
int main()
{
    int select = 0;
    int n = 95;
    while (1)
    {
        unsigned char b = 0;
        int n = 95;
        cin >> select;
        switch (select)
        {
            case 1:cout << "请输入一个数：" << endl;
                cin >> b;
                homework1(b);
                break;
            case 2:
                homework2(n);
                break;
            case 3:int arr1[10];
                cout << "输入为：" << endl;
                for (int i = 0; i < 10; i++)
                {
                    cin >> arr1[i];
                }
                homework3(arr1);
                break;
            case 0:
                system("pause");
                return 0;
                break;
        }
    }
}