int pivotIndex(vector<int>& nums) {
    int leftSum = 0;
    int sum = 0;
    for (int num : nums) {
      sum += num;
    }
    for (int i = 0; i < nums.size(); i++) {
      int rightSum = (sum - leftSum) - nums[i];
      if (leftSum == rightSum) {
        return i;
      }
      leftSum += nums[i];
    }

    return -1;
  }