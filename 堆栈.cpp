#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, temp;
    cout << "输入为：" << endl;
    for (i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }
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
            cout << arr[i] << " "<< endl;
        }
    system("pause");
    return 0;
}
