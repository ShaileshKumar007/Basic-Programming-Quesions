public class PrimeNo {

    public static void main(String[] args) {

        int low = 20, high = 50;  // You can also take input from user

        while (low < high) {
            if(checkPrimeNumber(low))
                System.out.print(low + " ");

            ++low;
        }
    }

    public static boolean checkPrimeNumber(int num) {
        boolean check = true;

        for(int i = 2; i <= num/2; ++i) {

            if(num % i == 0) {
                check = false;
                break;
            }
        }

        return check;
    }
}