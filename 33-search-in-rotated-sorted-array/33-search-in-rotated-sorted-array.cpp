class Solution {
public:
  int binarySearch(vector<int> arr, int low, int high, int key)
{
    if (high < low)
        return -1;
 
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
 
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
 
    return binarySearch(arr, low, (mid - 1), key);
}
int findPivot(vector<int> arr, int low, int high)
{
    // Base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;
    int mid = (low + high) / 2;
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);
 
    return findPivot(arr, mid + 1, high);
}
 
    int search(vector<int>& nums, int target) {
      int n=nums.size();
         int pivot = findPivot(nums, 0, n - 1);
    if (pivot == -1)
        return binarySearch(nums, 0, n - 1, target);
 

    if (nums[pivot] == target)
        return pivot;
 
    if (nums[0] <= target)
        return binarySearch(nums, 0, pivot - 1, target);
 
    return binarySearch(nums, pivot + 1, n - 1, target);
    }
};