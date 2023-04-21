#include <iostream>
using namespace std;

int isPalindrome(string s, int start, int end){
  if (start>=end){
    return 1;
  }

  if (s[start] != s[end]){
    return 0;
  }

  return isPalindrome(s, start+1, end-1);
}

int main(){
  string s;
  cin >> s;
  cout << isPalindrome(s, 0, s.size() - 1);
}

