// My Solution in C++

// Time Complexity O(N) and Space Complexity O(1)


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<bool> arr(nums.size()+1, false);
        for (auto n : nums){
            arr[n] = true;
        }
        for (int i = 0; i < arr.size(); i++){
            cout << arr[i];
            if (!arr[i])
                return i;
        }
        return -1;
    }
};