#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"enter n"<<endl;
    cin>>n;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           char chh=ch-i+1;
           cout<<chh<<" ";
            }
            cout<<endl;
    }
    return 0;
}
