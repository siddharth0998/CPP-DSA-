// Sample Input 1 :

// 1 2 2 2 3 4 arr1[]
// 2 2 3 3     arr2[]

// 1 2 3       arr1[]
// 3 4         arr2[]

// Sample Output 1 :

// 2 2 3       output 1
// 3           output 2
// code work on code studio coding ninja
// two pointer approach

// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int> vec;
//     int i = 0, j = 0;
//     while(i < n && j < m){
//         if(arr1[i] == arr2[j]){
//             vec.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     return vec;
// }