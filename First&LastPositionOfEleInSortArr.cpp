// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]




// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int start = 0, end = nums.size() - 1;
//         int mid = start + (end - start)/2 ;
//         int index = -1;
//         vector<int> vec;
        
        // 1st while loop to get first position

//         while(start <= end){
//             if(nums[mid] == target){
//                 index = mid;
//                 end = mid - 1;
//             }
//             else if(target > nums[mid]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//             mid = start + (end - start)/2 ;
//         }
//         vec.push_back(index);
        
//         start = 0, end = nums.size() - 1;
//         mid = start + (end - start)/2;
//         index = -1;
        
        // 2nd while loop to get last position

//         while(start <= end){
//             if(nums[mid] == target){
//                 index = mid;
//                 start = mid + 1;
//             }
//             else if(target > nums[mid]){
//                 start = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//             mid = start + (end - start)/2;
//         }
//         vec.push_back(index);
        
//         return vec;
//     }
// };