#include <iostream>
#include <string>
using namespace std;

int count(string n){
  int cnt = 1;
  for(int i = 0; i<n.length(); i++){
    if(n[i]==32){
      cnt++;
    }
    continue;
  }
  return cnt;
}

int main() {
  int n = 0;
  int cnt, temp;
  string arr;
  cin>>n;
  for(int i = 0; i<n+1; i++){
    getline(cin, arr);
    cnt = count(arr);
    temp = max(cnt, temp);
  }
  cout<<temp;
}