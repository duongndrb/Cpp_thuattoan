bool mark[1002];
//ham kiem tra so nguyen to
bool isPrime(int n)
{
  if( n<= 1) return false;
  int a = 2;
  while (true) {
    if (a* a > n) break;
    int p = a * a;
    while (p <= n) {
      mark[p] = true;
      p += a;
    }
    ++a;
    while (a <- n && mark[a]) ++a;
    if(a > n) break;
  }
  return (mark[n]) ? false : true;
}
