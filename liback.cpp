#include<iostream>
using namespace std;

void back(int i, int n){
    if(i<1)
    return;
      cout<<i<<endl; // from n to 1
    back(i-1,n);
    //cout<<i<<endl; for 1 to n
}

int main(){
    int n;
    cin>>n;
    back(n,n);
    return 0;
}