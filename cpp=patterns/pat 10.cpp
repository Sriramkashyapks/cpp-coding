#include <iostream>
using namespace std;
int main() {
      int i,j,n;
    cout<<"enter n"<<endl;
    cin>>n;
    int count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
            
        }
        cout<<endl;
    }
    return 0;
}
