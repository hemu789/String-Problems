#include <iostream>
using namespace std;

// Youtube : Ayushi Sharma
// https : // youtu.be/UyX22tCpzhI

int Count(string s, int n){

    int cnt0 = 0, cnt1 = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == '0')
        {
            cnt0++;
        }

        else
        {
            cnt1++;
        }

        if (cnt0 == cnt1)
        {
            ans++;
            cnt0 = 0;
            cnt1 = 0;
        }
    }

    if (ans == 0)
    {
        return -1;
    }

    return ans;
}

int main()
{

    string s = "0100110101";
    int n = s.size();
    int ans = Count(s, n);
    cout << ans;

    return 0;
}