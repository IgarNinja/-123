#include <iostream>

using namespace std;

int main()
{
    int x; 
    int count = 0;
    cin >> x;
    int x1 = x;
    while (x != 0) {
        count++;
        x = x / 10;
    }
    x = x1;
    int count1 = count;
    int* s = new int[count];
    int* s2 = new int[count];
    for (int i = 0; i < count1; i++) {
        s[i] = x % 10;
        x = x / 10;
        count--;
    }
    x = x1;
    count = count1;
    count = count1;
    while (count--)
    {
        bool swapped = false;

        for (int i = 0; i < count; i++)
        {
            if (s[i] > s[i + 1])
            {
                swap(s[i], s[i + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
    count = count1;
    for (int i = 0; i < count1; i++) {
        s2[i] = s[i];
    }
    for (int i = 0; i < count1; i++) {
        s2[i] = s[(count1 - 1) - i];
    }
    int res = 0, i, pow;
    for (i = count1 - 1, pow = 1; i >= 0; --i, pow *= 10) {
        res += s[i] * pow;
    }
    int res2 = 0, i2, pow2;
    for (i2 = count1 - 1, pow2 = 1; i2 >= 0; --i2, pow2 *= 10) {
        res2 += s2[i2] * pow2;
    }
    cout << res2 - res;
}
   


