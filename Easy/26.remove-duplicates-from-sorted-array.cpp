class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();

        vector<int> arr(size);
        if (nums.size() > 0){
            arr[0] = nums[0];
        }
        int count = 1;

        int cur = nums[0]; 

        for (int i = 0; i < size; i++){
            if (cur != nums[i]){
                cur = nums[i];
                arr[count ++] = nums[i];
            }
        }

        for (int i = 0; i < count; i++){
            nums[i] = arr[i];
        }
        return count;
    }
};