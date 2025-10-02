public class FindQuadrant {
    public static float findQuadrant(float x, float y) {
        if (x > 0 && y > 0) return 1;
        if (x > 0 && y < 0) return 4;
        if (x < 0 && y > 0) return 2;
        if (x < 0 && y < 0) return 3;

        return 0;
    }

    public static void main(String[] args) {
        System.out.println(findQuadrant(5, 7));   // 1
        System.out.println(findQuadrant(-4, 9));  // 2
        System.out.println(findQuadrant(-2, -3)); // 3
        System.out.println(findQuadrant(6, -8));  // 4
        System.out.println(findQuadrant(0, 5));   // 0
    }
}
