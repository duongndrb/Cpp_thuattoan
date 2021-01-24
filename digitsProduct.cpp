int digitsProduct(int product)
{
    if(product == 1) return 1;
    if(product == 0) return 10;
    int ans = 0;
    for(int i = 9; i>= 2; i--)
    {
        while(product % i == 0)
        {
            ans = ans *10 + i;
            product /= i;
        }
    }
    //so ans la ket qua nhung dang bi nguoc
    int ans2 = 0;
    while (ans > 0)
    {
        ans2 = ans2 * 10 + ans %10;
        ans /= 10;
    }
    return (product == 1) ? ans2 : -1;
}
