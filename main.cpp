#include <iostream>

using namespace std;

bool isPalindrom(string s)

{
  int i=0, j=s.size()-1;

  while(i<j)
    {
      if(s[i] != s[j]) return false;
      i++; j--;
    }

  return true;
}

int main()

{
  string s;
  cin >> s;

  cout << isPalindrom(s) << endl;

  return 0;
}
