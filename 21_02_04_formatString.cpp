//xoa cac khoang trang thua(ky tu cach)
//trong xau ky tu, sao cho giua cac tu cach nhau 1 khoang trong
//khong co khoang trong dau va cuoi

#include <iostream>
#include <string>

using namespace std;

std::string formatString(std::string input)
{
    string s = input;
    // xoa nhung ky tu trang dau tien
    while(s[0] == ' ')
        s.erase(0,1);
    // xoa nhung ky tu trang cuoi cung
    while(s[s.length() - 1] == ' ')
        s.erase(s.length()-1, 1);
    // xoa nhung ky tu trang canh nhau
    while (s.find("  ") != -1)
        s.erase(s.find("  "), 1);
    return s;
}

int main()
{
//    int n;
//    cout << "Nhap so luong so chuoi: ";
//    cin >> n;
//    string my_string;
//
//    getline(cin, my_string);
//    formatString(my_string);
    string input;
    getline(cin, input);
    cout << formatString(input);

}
