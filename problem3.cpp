#include <iostream>
using namespace std;

int fmx(int* a, int ln){
    int mx = *a;
    for (int i=1; i<ln; i++){    if (*(a+i)>mx){    mx = *(a+i);}}
    return mx;
}

void rvrs(int* a, int ln){
    int* bg = a; int* nd = a+ln-1;
    while (bg<nd){
        int tmp = *bg;
        *bg = *nd;
        *nd = tmp;
        bg++;    nd--;
    }
}

double avg(int* a, int ln){
    int s = 0;    for (int i=0; i<ln; i++){    s+= *(a+i);}
    return static_cast<double>(s)/ln;
}

int main(){
    int a[100];    int ln = 0, n;
    while (cin >> n && n!=-1){    a[ln++] = n;}
    int mx = fmx(a, ln);
    cout << "Maximum value: " << mx << endl;
    rvrs(a, ln);
    cout << "Reversed array: ";
    for (int i = 0; i < ln; ++i){    cout << a[i] << " ";}    
    cout << fixed << setprecision(1) << "\nAverage: " << avg(a, ln) << endl;
    return 0;
}
