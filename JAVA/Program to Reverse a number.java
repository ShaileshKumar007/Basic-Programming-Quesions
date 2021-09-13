class Rev {
  public static void main(String[] args) {

    int num = 1234, reversedNo = 0;

    while(num != 0) {

      int digit = num % 10;
      reversedNo = reversedNo * 10 + digit;
      num /= 10;
    }

    System.out.println("Reversed Number: " + reversedNo);
  }
}