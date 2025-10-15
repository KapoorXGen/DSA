class Solution {
    static String checkMagicSquare(int n, int[][] grid) {
        int targetSum = 0;
        for (int j = 0; j < n; j++) {
            targetSum += grid[0][j];
        }

        int diag1 = 0, diag2 = 0;

        for (int i = 0; i < n; i++) {
            int rowSum = 0, colSum = 0;
            for (int j = 0; j < n; j++) {
                rowSum += grid[i][j];
                colSum += grid[j][i];
            }
            if (rowSum != targetSum || colSum != targetSum) {
                return "No";
            }
            diag1 += grid[i][i];
            diag2 += grid[i][n - i - 1];
        }

        if (diag1 != targetSum || diag2 != targetSum) {
            return "No";
        }

        return "Yes";
    }

    public static void main(String[] args) {
        int[][] arr1 = { { 4, 9, 2 }, { 3, 5, 7 }, { 8, 1, 6 } };
        int[][] arr2 = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

        System.out.println(checkMagicSquare(arr1.length, arr1));
        System.out.println(checkMagicSquare(arr1.length, arr2));
    }
}
