// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place.

 

// Example 1:


// Input: matrix = [[1,1,1],
//                  [1,0,1],
//                  [1,1,1]]
// Output: [[1,0,1],
//          [0,0,0],
//          [1,0,1]]


// Example 2:


// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

// Constraints:

// m == matrix.length
// n == matrix[0].length
// 1 <= m, n <= 200
// -231 <= matrix[i][j] <= 231 - 1
 

// Follow up:

// A straightforward solution using O(mn) space is probably a bad idea.
// A simple improvement uses O(m + n) space, but still not the best solution.

// Method-1 (TC- O(mn))
class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            unordered_set<int>row,col;
            int n = matrix.size();
            int m = matrix[0].size();
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(matrix[i][j] == 0) {
                        row.insert(i);
                        col.insert(j);
                    }
                }
            }
              for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(row.find(i) != row.end() || col.find(j) != col.end() ){
                        matrix[i][j]=0;
                    }
                }
              }
        }
    };