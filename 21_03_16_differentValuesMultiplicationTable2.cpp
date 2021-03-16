//
//Cho một bảng có n hàng và m cột
//
//Mỗi một ô trong bảng ở hàng i và cột j chứa 1 số  có giá trị bằng i * j (chỉ số hàng và cột đều được đếm bắt đầu từ 1)
//
//Cho trước n và m, hãy tìm số lượng các số nguyên khác nhau nằm trong bảng
//
//Ví dụ:
//
//Với n = 3 và m = 2, thì kết quả differentValuesInMultiplicationTable2(n, m) = 5.
//Có 5 giá trị khác nhau nằm trong bảng là: 1, 2, 3, 4, 6

#include <iostream>
#include <vector>

using namespace std;

int DifferentValuesMultiplicationTable2(int n, int m)
{
    vector <bool> a(401, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            a[i*j] = 1;
        }
    }
    int d = 0;
    for(int i = 1; i <= m*n; i++)
    {
        d += a[i];
    }
    return d;
}

int main()
{
    int n1, n2; cin >> n1 >> n2;
    DifferentValuesMultiplicationTable2(n1,n2);
    cout << DifferentValuesMultiplicationTable2(n1,n2);
}
