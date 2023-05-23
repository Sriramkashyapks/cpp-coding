#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
            int count=i;
        for(j=1;j<=i;j++){
            cout<<count;
            count+=1;
        }
        cout<<endl;
    }
    return 0;
}
