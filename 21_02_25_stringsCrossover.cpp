//Định nghĩa phép toán crossover của hai xâu có độ dài bằng nhau A và B như sau:
//
//Kết quả của phép toán này là một xâu result có độ dài bằng với hai xâu đầu vào
//result[i] bằng A[i] hoặc B[i].
//Cho một danh sách các xâu có độ dài bằng nhau inputArray và một xâu result, hãy đếm xem có bao nhiêu cặp xâu trong mảng đã cho mà kết quả của phép toán crossover cho ra kết quả là result.
//
//Ví dụ:
//
//Với inputArray = ["abc", "aaa", "aba", "bab"] và result = "bbb", kết quả stringsCrossover(inputArray, result) = 2.
//Có 2 cặp xâu kí tự thỏa mãn yêu cầu đề bài là:
//abc vs bab
//Ta thấy rằng với A = "abc" và B = "bab".
//result[0] = 'b' = B[0]
//result[1] = 'b' = A[1]
//result[2] = 'b' = B[2].
//aba vs bab
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(string a, string b, string c)
{
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != c[i] && b[i] != c[i])
        {
            return false;
        }
    }
    return true;
}

int stringsCrossover(vector<string> inputArray, std::string result)
{
    int d = 0;
    for(int i = 0; i < inputArray.size() - 1; i++)
    {
        for(int j = i + 1; j < inputArray.size(); j++)
        {
            if(check(inputArray[i], inputArray[j], result))
            {
                d++;
            }
        }
    }
    return d;
}

int main()
{
    //khoi tao vector
    vector <string> inputArray;
    //nhap vao vector
    //inputArray = {"abc", "aaa", "aba", "bab"};
    int n;
    cout << "nhap so luong chuoi can so sanh: " << endl;
    cin >> n;
    cout << "Nhap chuoi:" << endl;
    for(int i = 0; i <= n; i++)
    {
        string nhapVao;
        getline(cin, nhapVao);
        inputArray.push_back(nhapVao);
    }


    // nhap chuoi can so sanh
    string result;
    cout << "Nhap chuoi can so sanh:";
    getline(cin, result);
    //tra ve ket qua can so sanh
    cout << stringsCrossover(inputArray, result);
}
