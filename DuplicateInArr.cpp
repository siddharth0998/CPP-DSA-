// Sample Input 1:
// 2
// 5
// 4 2 1 3 1
// 7
// 6 3 1 5 4 3 2
// Sample Output 1:
// 1
// 3

// this solution will not  work if get array like this: [2,2,2,2] for this use hashmap


// int findDuplicate(vector<int> &arr) 
// {
//     int ans = 0;
//         for( int i = 0; i < arr.size(); i++){
//             ans = ans ^ arr[i];
//         }
        
//         for( int i = 1; i<arr.size();i++){
//             ans = ans ^ i;
//         }
//         return ans;
	
// }

