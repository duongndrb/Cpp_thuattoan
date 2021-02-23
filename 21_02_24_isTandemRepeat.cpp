//cho 1 xau ky tu S
// kiem tra xau S co the tao ra bang cach ghep 1 xau vao chinh no hay khong?

// Với inputString = "tandemtandem", kết quả isTandemRepeat(inputString) = true
// Có thể tạo ra xâu "tandemtandem" bằng cách ghép xâu "tandem" vào phía sau của chính nó
// Với inputString = "qqq", kết quả isTandemRepeat(inputString) = false
// Với inputString = "2w2ww", kết quả isTandemRepeat(inputString) = false

#include <iostream>
#include <string>
using namespace std;

bool isTandemRepeat(string inputString)
{
    string s = inputString;
    if(s.length() % 2 != 0)
    {
        return false;
    }
    if(s.substr(s.length() / 2, s.length() / 2) == s.substr(0, s.length() /2) )
    {
        return true;
    }
    return false;
}

int main()
{
    string my_string;
    getline(cin, my_string);
    //cout << isTandemRepeat(my_string);
    if(isTandemRepeat(my_string) == 1)
    {
        cout << "True";
    }
    else
        cout << "False";
}
