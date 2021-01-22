int NumOf0s(vector a, int n)
{
  int sum2 = 0, sum5 = 0;
  for (int i = 0; i < n; ++i)
  {
    int num2 = 0, num5 = 0;
    while ( a[i] % 2 == 0)
    {
      num2++;
      a[i] /= 2;
    }
    while(a[i] % 5 == 0)
    {
      num5++;
      a[i] /=5;
    }
    sum2 += num2;
    sum5 += num5;
  }
  return min(sum2, sum5);
}
