//kiem tra Palindrome mot so luong lon xau con cua S

#include <iostream>
#include <string>
using namespace std;

int CheckPalin[1003][1003];

void buildCheck(string S)
{
    int n = S.size();
    for(int i = n-1; i >= 0; --i)
    {
        //day la TH1
        CheckPalin[i][i] = 1;
        for(int j = i+1; j < n; ++j)
        {
            CheckPalin[i][j] = (S[i] == S[j]) && (i == j-1 || CheckPalin[i+1][j+1]);

        }
    }
}

bool checkSubS(int L, int R)
{
    return CheckPalin[L][R];
}

int main()
{
    string my_string;
    getline(cin, my_string);
    buildCheck(my_string);
    checkSubS(5,5);
    cout << checkSubS(5,5);
}
