//Một xâu được gọi là palindrome nếu viết xuôi hay viết ngược xâu đó đều cho ra kết quả giống nhau

#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(string S)
{
    int n = S.size();
    for(int i = 0; i < n/2; ++i)
        if(S[i] != S[n - i - 1]) return false;
    return true;
}

int main()
{
    string my_string;
    getline(cin, my_string);
    isPalindrome(my_string);
    cout << isPalindrome(my_string);
    return 0;
}
