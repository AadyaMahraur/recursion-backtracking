#include <iostream>
using namespace std;

long long int fac(int n);

int main(){
  int N;
  cin >> N;
  cout << fac(N);
}

// don't forget base case for 0!!!
long long int fac(int n){
  if (n == 1 || n == 0){
    return 1;
  }
  return n * fac(n-1);
}
