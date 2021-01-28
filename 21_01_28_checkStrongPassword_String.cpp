#include <iostream>
#include <string.h>
using namespace std;

bool checkStrongPassword(std::string password)
{
  if(password.length() < 6)
  {
    return false;
  }
  string p = "!@#$%^&*()_+";
  string s = password;
  bool kt1 = false;
  bool kt2 = false;
  bool kt3 = false;
  bool kt4 = false;
  for(int i = 0; i < password.length(); i++)
  {
      if(s[i] >= 65 && s[i] <= 90)
        kt1 = true;
      if(s[i] >= 97 && s[i] <= 122)
        kt2 = true;
      if(s[i] >= 48 && s[i] <= 57)
        kt4 = true;
      if(p.find(s[i])!= -1)
        kt3 = true;
  }
  return kt1 && kt2 && kt3 && kt4;

}
int main()
{
    string my_password;
    getline(cin, my_password);
    checkStrongPassword(my_password);
}
