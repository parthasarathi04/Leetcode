class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int i = 0;
        int n = matrix.length;
        while(i<n){
            if(matrix[i][0]>target) break;
            i++;
        }
        i--;
        if(i<0) return false;
        return Arrays.binarySearch(matrix[i],target)>=0;
    }
}
