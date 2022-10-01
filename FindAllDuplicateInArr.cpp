//  Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:

// Input: nums = [1,1,2]
// Output: [1]
// Example 3:

// Input: nums = [1]
// Output: []
 
 //               i                                                          2    - 1 = 1
 // [4,-3,-2,-7,8,2,-3,-1]  when i comes at 2 again it will found that arr[arr[i] - 1] is already less than zero so we found 2 again.
 
//  vector<int> findDuplicates(vector<int>& nums) {
        
//         vector<int> vec;
        
//         for(int i=0; i<nums.size();i++){
//             int index = abs(nums[i]) - 1;
//             if(nums[index] < 0){
//                 vec.push_back( abs(index+1) );
//             }
//             nums[index] = -nums[index];
//         }
//         return vec;
    
//     }