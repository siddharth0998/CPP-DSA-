// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [3,5,3,0]
// Output: 1

// Example 3:
// Input: arr = [3,5,3,7,0]
// Output: 3




// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int start = 0, end = arr.size() - 1;
//         int mid = start + (end - start)/2 ;
//         int index = -1;
//         while(start <= end){
//             if( arr[mid - 1] < arr[mid] && arr[mid] < arr[mid + 1]){
//                 start = mid + 1;
//             }
//             else if(arr[mid - 1] > arr[mid] && arr[mid] > arr[mid + 1]){
//                 end = mid;
//             }
//             else {
//                 index = mid;
//                 break;
//             }
//             mid = start + (end - start)/2 ;
//         } 
//         return index;
//     }
// };