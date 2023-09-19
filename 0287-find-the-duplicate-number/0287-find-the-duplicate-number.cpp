class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int low = 1;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;

        // Count the number of elements less than or equal to mid
        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }

        // Adjust the search range based on the count
        if (count > mid) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

};