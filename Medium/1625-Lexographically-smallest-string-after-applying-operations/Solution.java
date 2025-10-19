import java.util.*;

class Solution {
    public String findLexSmallestString(String s, int a, int b) {
        Set<String> visited = new HashSet<>();
        Queue<String> queue = new LinkedList<>();
        String smallest = s;
        
        queue.offer(s);
        visited.add(s);
        
        while (!queue.isEmpty()) {
            String curr = queue.poll();
            if (curr.compareTo(smallest) < 0) {
                smallest = curr;
            }
            
            char[] chars = curr.toCharArray();
            for (int i = 1; i < chars.length; i += 2) {
                int newDigit = ((chars[i] - '0') + a) % 10;
                chars[i] = (char) (newDigit + '0');
            }
            String added = new String(chars);
            
            String rotated = curr.substring(curr.length() - b) + curr.substring(0, curr.length() - b);
            
            if (!visited.contains(added)) {
                visited.add(added);
                queue.offer(added);
            }
            if (!visited.contains(rotated)) {
                visited.add(rotated);
                queue.offer(rotated);
            }
        }
        
        return smallest;
    }
}
