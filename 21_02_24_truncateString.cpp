//
//Cho một xâu kí tự chứa các chữ số từ 0 tới 9
//
//Người ta áp dụng phép biển đổi xâu dựa trên các nguyên tắc sau:
//
//nếu chữ số ngoài cùng bên trái chia hết cho 3, xóa nó khỏi xâu kí tự
//nếu không thỏa mãn điều kiện trên, và nếu chữ số ngoài cùng bên tay phải chia hết cho 3, xóa nó khỏi xâu kí tự
//nếu không thỏa mãn 2 điều kiện trên, và nếu tổng chữ số ngoài cùng bên trái và ngoài cùng bên phải chia hết cho 3, xóa cả hai chữ số trên khỏi xâu
//Các phép toán trên được áp dụng vào xâu ban đầu cho tới khi xâu trở thành rỗng, hoặc ko đáp ứng cả 3 điều kiện trên.

#include <iostream>
#include <string>
using namespace std;

string truncateString(string s)
{
    bool kt = true;
    while(kt && s.length() > 0)
    {
        kt = false;
        if( (s[0] - '0') % 3 == 0)
        {
            s.erase(0,1);
            kt = true;
        }
        else
        {
            if((s[s.length() - 1] - '0') % 3 == 0)
            {
                s.erase(s.length()-1,1);
                kt = true;
            }
            else
            {
                if((s[0] + s[s.length() - 1] - 96)% 3 == 0)
                {
                    kt = true;
                    s.erase(s.length() - 1, 1);
                    s.erase(0,1);
                }
            }
        }
    }
    return s;
}

int main()
{
    string my_string;
    getline(cin, my_string);
    cout << truncateString(my_string);
    return 0;
}
