//ho một xâu kí tự, viết hàm mã hóa xâu đó theo các luật sau:
//
//Đầu tiên, cắt xâu ban đầu thành các xâu con mà mỗi xâu con chỉ chứa các kí tự giống nhau và xâu con tạo ra có độ dài là lớn nhất
//Ví dụ, xâu "aabbbc" được tách thành ["aa", "bbb", "c"]
//Tiếp theo, với mỗi xâu con có chiều dài lớn hơn 1, hãy thay thế xâu đó bằng việc viết liền độ dài của xâu với kí tự lặp lại
//Ví dụ, xâu con "bbb" được thay thế bằng "3b"
//Cuối cùng, viết liên tiếp các xâu con vừa được mã hóa theo thứ tự ban đầu để tạo ra xâu kết quả
//Ví dụ:
//
//Với s = "aabbbc", thì kết quả lineEncoding(s) = "2a3bc".

#include <iostream>
#include <string>
using namespace std;

string toString(int n)
{
    string s = "";
    while(n > 0)
    {
        s = char(n%10 + '0') + s;
        n /= 10;
    }
    return s;
}

string lineEncoding(string s)
{
    string result = "";
    int k = 1;
    s = s + " ";
    for(int i = 0; i < s.length() -1; i++)
    {
        if(s[i] == s[i+1])
            k++;
        else
        {
            if(k>1)
                result = result +toString(k);
            result = result + s[i];
            k = 1;
        }
    }
    return result;
}

int main()
{
    string my_string;
    getline(cin, my_string);
    while(my_string.length() < 4 || my_string.length() > 100)
    {
        cout << "Nhap lai chuoi theo yeu cau: " ;
        getline(cin, my_string);
    }
    cout << lineEncoding(my_string);
}
