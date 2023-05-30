// Sinh các dãy nhị phân có độ dài n 
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("Program1.inp","r",stdin);
    freopen("Program1.out","w",stdout);
    int n;
    cin >> n;
    char a[n+1];
    a[n] = '\0';
    for (int i = 0; i < n; i++)
    {
        a[i] = '0';
    }
    cout << a << endl;
    bool check = true;
    while (check)
    {
        bool Max = true;
        for (int i = n-1; i >= 0; i--)
        {
            if(a[i] == '0'){
                a[i] = '1';
                Max = false;
                // Đổi tất cả các phần tử sau đó thành 0
                for (int j = i+1; j < n; j++)
                {
                    a[j] = '0';
                }
                // In ra chuỗi tìm được 
                cout << a << endl;
                break;
            }
        }
        if (Max) break;
    }
}