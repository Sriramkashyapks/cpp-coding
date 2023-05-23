#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n"<<endl;
  cin >> n;
  int count=1;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
    cout<<count;
    count=count+1;
    }
    cout << endl;
  }
  return 0;
}
