import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    String s = in.next();
    StringBuilder tmp = new StringBuilder();
    tmp.append(s);
    tmp.reverse();
    System.out.println(s + tmp);
  }
}
