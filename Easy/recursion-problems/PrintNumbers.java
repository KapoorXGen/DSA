public class PrintNumbers {

    public static void printingNto1(int n) {
        if (n == 1) {
            System.out.print(n + " ");
            return;
        }
        System.out.print(n + " ");
        printingNto1(n - 1);
    }

    public static void printing1toN(int n) {
        if(n == 1){
            System.out.print(n + " ");
            return;
        }
        printing1toN(n - 1);
        System.out.print(n + " ");
    }

    public static void main(String[] args) {
        printingNto1(5);
        System.out.print("\n");
        printing1toN(5);
    }
}
