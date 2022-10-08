// 2
// 4 2
// 12 34 67 90
// 4 4
// 5 17 100 11
// Sample Output 1:
// 113
// 100
//for question please refer leetcode or codestudio.


// bool isResult(vector<int> arr, int n,int m, int mid){
//     int sum = 0;
//     int count = 1;
//     for(int i=0; i<n; i++){
//         if(arr[i] + sum <= mid){
//             sum += arr[i];
//         }
//         else{
//             count++;
//             if( count > m || arr[i] > mid){
//                 return false;
//             }
//             sum = arr[i];
//         }
//     }
//       return true;
// }

// int allocateBooks(vector<int> arr, int n, int m) {
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//     }
//     int s = 0;
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
//     while(s <= e ){
//         if(isResult(arr,n,m,mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }