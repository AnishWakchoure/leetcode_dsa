// Assuming the array is never empty and does not contain -ve integers.

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr [10] = {234, 345, 453, 556, 355, 298, 56578, 198, 5, 65};
    
    unordered_map<int, int> mp;
    for (int i = 0; i<10; i++){
        int num = arr[i];
        while(num){
            mp[num%10]++;
            num /= 10;
        }
    }
    int maxi = 0;
    int ans;
    for (auto& pair : mp){
        if (maxi < pair.second){
            maxi = pair.second;
            ans = pair.first;
        }
    }
    cout<<ans;
}
