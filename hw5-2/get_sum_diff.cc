#include <iostream>
#include <stdio.h>
using namespace std;

void getSumDiff(int a, int b, int& sum, int& diff){
  sum = a+b;
  diff = a-b;
}

int main() {
  int a,b;
  int sum,diff;
  cin>>a>>b;
  getSumDiff(a,b,sum,diff);
  cout<<"Sum:"<<sum<<endl;
  cout<<"diff:"<<diff<<endl;

  return 0;
}
