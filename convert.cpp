#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void binary(int n)
{
    int i;
    for (i = 7; i >= 0; i--)
    {
        if (n & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}

void printHexa(int n)
{
    cout << hex << uppercase << n;
}

void printOctal(int n)
{
    cout << oct << uppercase << n;
}

void BCD(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - '0';
        binary(x);
        cout << " ";
    }

}

int decimalToGray(int n)
{
    return n ^ (n >> 1);
}

int main()
{
    int n;
    for (n = 0; n < 256; n++)
    {
        // pilih salah satu
        binary(n);
        printHexa(n);
        printOctal(n);
        BCD(n);
        binary(decimalToGray(n));
        cout << endl;
    }
}
