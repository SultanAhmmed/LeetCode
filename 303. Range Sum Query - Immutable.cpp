class NumArray {
public:
    vector<int>ara;
    NumArray(vector<int>& nums) {
        ara.push_back(0);
        for(int i = 1; i <= nums.size(); i++){
            int sum = 0;
            sum = ara[i-1] + nums[i-1];
            ara.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        return ara[right+1] - ara[left];
    }
};
