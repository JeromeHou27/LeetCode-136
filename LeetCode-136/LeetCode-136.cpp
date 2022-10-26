// LeetCode-136.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int num = 0;
    for (int i = 0; i < nums.size(); ++i) {
        num ^= nums[i];
    }

    return num;
}

int main()
{
    vector<int> nums = { 4, 1, 2, 1, 2 };

    printf("%d\n", singleNumber(nums));
}

