public class Main {

  public static void main(String[] args) {
    int rows = 6, var = 1;

    for(int i = 0; i < rows; i++) {
      for(int space = 1; space < rows - i; ++space) {
        System.out.print("  ");
      }

      for(int j = 0; j <= i; j++) {
        if (j == 0 || i == 0)
         var = 1;
        else
         var = var * (i - j + 1) / j;

        System.out.printf("%4d", var);
      }

      System.out.println();
    }
  }
}