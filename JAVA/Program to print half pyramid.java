public class Main {

  public static void main(String[] args) {
    int rows = 5; // you can also take input from user

    for (int i = 1; i <= rows; ++i) {
      for (int j = 1; j <= i; ++j) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }
}

// try printing the same pyramid using numbers and alphabets
/* 1                        A
   1 2                      B B
   1 2 3            AND     C C C
   1 2 3 4                  D D D D
   1 2 3 4 5                E E E E E
*/