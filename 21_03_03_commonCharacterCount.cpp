//Cho hai xâu kí tự, tìm số lượng kí tự chung giữa chúng.
//
//Ví dụ:
//
//Với s1 = "aabcc" và s2 = "adcaa", thì kết quả commonCharacterCount(s1, s2) = 3.
//2 xâu s1 và s2 có 3 kí tự chung: 2 kí tự 'a' và 1 kí tự 'c'.

//Mảng tần suất - frequency array
//
//Định nghĩa: Mảng tần suất - frequency array là mảng dùng để kiếm soát số lần xuất hiện của một giá trị trong một mảng cho trước
//
//Cách xây dựng: Cho trước một dãy số A. Tìm mảng B là mảng tần suất ứng với dãy A
//
//Lần lượt xét các chỉ số i mà 0 <= i < A.size() rồi tăng giá trị của B[A[i]] lên một đơn vị.
//
//vector<int> frequencyArray(vector<int> A) {
//    for (int i = 0; i < (int) A.size(); ++i) B[A[i]]++;
//    return B;
//}


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int commonCharacterCount(string s1, string s2)
{
    vector <int> a(256);
    vector <int> b(256);
    for(int i = 0; i < s1.length(); i++)
    {
        a[s1[i]]++;
    }
    for(int i = 0; i < s2.length(); i++)
    {
        b[s2[i]]++;
    }
    int d = 0;
    for(int i = 97; i <= 122; i++)
    {
        d += min(a[i], b[i]);
    }
    return d;
}

int main()
{

    string my_string_1, my_string_2;
    getline(cin, my_string_1);
    getline(cin, my_string_2);
    cout << commonCharacterCount(my_string_1, my_string_2);
}
