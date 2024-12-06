#include <iostream>
#include <iomanip>
using namespace std;

int findMax(int* a, int ln){
    int mx = *a;
    for (int i=1; i<ln; i++){    if (*(a+i)>mx){    mx = *(a+i);}}
    return mx;
}

void reverseArray(int* a, int ln){
    int* bg = a; int* nd = a+ln-1;
    while (bg<nd){
        int tmp = *bg;
        *bg = *nd;
        *nd = tmp;
        bg++;    nd--;
    }
}

double calculateAverage(int* a, int ln){
    int s = 0;    for (int i=0; i<ln; i++){    s+= *(a+i);}
    return double(s)/ln;
}

int main(){
    int a[100];    int ln = 0, n;
    while (cin >> n && n!=-1){    a[ln++] = n;}
    int mx = findMax(a, ln);
    cout << "Maximum value: " << mx << endl;
    reverseArray(a, ln);
    cout << "Reversed array: ";
    for (int i = 0; i < ln; ++i){    cout << a[i] << " ";}    
    cout << fixed << setprecision(1) << "\nAverage: " << calculateAverage(a, ln) << endl;
    return 0;
}
