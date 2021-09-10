public class Digits {

  public static void main(String[] args) {

    int count = 0, num = 4613452;   // you can also take input from user

    while (num != 0) {
      num /= 10;
      ++count;
    }

    System.out.println("Number of digits: " + count);
  }
}