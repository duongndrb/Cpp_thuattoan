int numberDifferentValue(vector <int> A)
{
  int res = 0;
  for(int i = 0; i< (int) A.size(); i++)
  {
    // bien ok kiem soat xem gia tri A[i] da xuat hien truoc do hay chua?
    bool ok = true;
    for(int j = 0; j < i; ++j)
    {
      if(A[i] == A[j])
      {
        //neu gia tri A[i] da xuat hien truoc do roi thi gan lai ok la false
        ok = false;
        break;
      }
      // neu gia tri A[i] chua duoc xet truoc do thi tang ket qua len mot
      if(ok) res++;
    }
  }
  return res;
}
