#include <iostream>
using namespace std;

long long int func(int n);

//ways to reach nth stair
int main(){
  int N;
  cin >> N;
  cout << func(N);
}

long long int func(int n){
  if (n == 1){
    // there is one way to climb one stair
    return 1;
  }
  if (n == 2){
    // two ways to climb 2 stairs: one stair twice, 2 stairs at once 
    return 2;
  }

  //somehow adding ways to climb n-1 and n-2 stair works
  //i don't understand this intuitively
  return func(n-1) + func(n-2);
}
