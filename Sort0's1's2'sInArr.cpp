// Sample Input 1 :
// 0 1 2 2 1 0
// 0 1 2 1 2 1 2
// Sample Output 1 :
// 0 0 1 1 2 2
// 0 1 1 1 2 2 2




// void sort012(int *nums, int n)
// {
//    int i = 0, j = n - 1, k = 0;
        
//         while(i <= j){
//             while( nums[i] == 0){
//                 swap(nums[i],nums[k]);
//                 i++;
//                 k++;
//             }
//             while( nums[j] == 2){
//                 j--;
//             }
//             while( nums[i] == 2 && i <=j){
//                 swap(nums[i],nums[j]);
//                 j--;
//             }
//             while( nums[i] == 1){
//                 i++;
//             }
//         }
// }