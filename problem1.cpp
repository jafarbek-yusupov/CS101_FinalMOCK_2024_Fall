#include <iostream>
using namespace std;

int main(){
    int n;    cin >> n;    bool pr = true;
    for (int i=2; i*i<=n; i++){    if(n%i==0){    pr = false;    break;}}
    cout << (pr ? "Prime" : "Not Prime") << endl;
    return 0;
}
