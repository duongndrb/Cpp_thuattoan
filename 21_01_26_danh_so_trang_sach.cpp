#include <iostream>
#include <math.h>
using namespace std;
int main()
{
}
int pagesNumbering(int n)
{
    int k = 1;
    int v1 = 0;
    int v2 = 0;
    int a[100];
    int m = strlen(a);
    if(n < 10 && n > 0)
    {
        v1 = n;
        v2 = 0;
    }
    else 
    {
        for(int i = 1; i <= m -1; i++)
        {
            v1 = (n - (int)pow(10,i) +1)* m;
            v2 = v2 + (9* i) * k;
            k =k *10;
        }
    }
    return (v1 + v2);
}
