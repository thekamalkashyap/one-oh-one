/* hello!, programmer
this a multiline comment */

// and this a single line comment

import java.util.Date;

// main class
public class Main {

  // main function without return statement
  public static void main(String[] args) {
    // main code

    byte age = 80; // -128 to 127
    int a = 150;
    char c = 'K'; // must be in single quotes
    float f = 5.6f; // decimal point is double by default so we add f or F in the end
    double d = 874.220; // optional to write D or d in the end
    short s = 25725;
    long l = 726826826L; // compulsory to write L in the end
    boolean b = true;
    Date now = new Date();

    // print statement
    System.out.print("hello ");
    // print statement with new line
    System.out.println("world");
  }
}
