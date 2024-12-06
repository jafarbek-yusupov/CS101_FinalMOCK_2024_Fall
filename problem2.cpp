#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumEvenNumbers(const vector<int>& nums) {
    int s=0;    
    for (int n : nums){
        if (n%2 == 0){    sum += n;}
    }
    return s;
}

int longestConsecutiveSubsequence(const vector<int>& nums) {
    if (nums.empty()){ return 0;}
    int ml = 1, cl = 1;
    for (int i = 1; i<nums.size(); ++i) {
        if (nums[i] == nums[i - 1]){    cl++;} 
        else{    ml = max(ml, cl);    cl = 1;}
    }
    return max(ml, cl);
}

int main() {
    vector<int> nums;    int n;
    while (true){    cin >> n;    if (n == -1){ break;}    nums.push_back(n);}
    cout << "Sum of even numbers: " << sumEvenNumbers(nums) << endl;
    cout << "Length of longest consecutive subsequence: " << longestConsecutiveSubsequence(nums) << endl;
    return 0;
}
