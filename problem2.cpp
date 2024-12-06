#include <iostream>
#include <vector>
using namespace std;

int lcs(const vector<int>& a){
    if (a.empty()){ return 0;}
    int mx = 1, crnt = 1;
    for (int i = 1; i<a.size(); i++){
        if (a[i-1]==a[i]){    crnt++;} 
        else{    mx = max(mx, crnt);    crnt = 1;}
    }
    return max(mx, crnt);
}

int main() {
    vector<int> a;    int n;
    while(cin >> n && n!=-1){    a.push_back(n);}
    cout << "Length of longest consecutive subsequence: " << lcs(a) << endl;
    return 0;
}
