class Solution {
    public boolean isPalindrome(String s) {
        if (s.length() == 1)
            return true;

        int i = 0, j = s.length() - 1;
        String n = s.toLowerCase();

        while (i <= j) {
            char l = n.charAt(i);
            char r = n.charAt(j);

            if (((l >= 48 && l <= 57) || (l >= 'a' && l <= 'z')) &&
                    ((r >= 48 && r <= 57) || (r >= 'a' && r <= 'z'))) {

                if (l == r) {
                    i++;
                    j--;
                } else {
                    return false;
                }
            } else if (!((l >= 48 && l <= 57) || (l >= 'a' && l <= 'z'))) {
                i++;
            } else {
                j--;
            }
        }
        return true;
    }
}
