class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxar = 0, l = 0, r = height.size() - 1;
    while (l < r) {
      maxar = max(maxar, min(height[l], height[r]) * (r - l));
      if (height[l] < height[r])
        l++;
      else
        r--;
    }
    return maxar;
    }
};