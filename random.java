import java.io.*;
import java.lang.*;
import java.util.*;
import java.util.Scanner;

public class Main {

  public static void main(String[] args) throws java.lang.Exception {
    Scanner s = new Scanner(System.in);
    int m = s.nextInt();
    String moves = s.next();
    boolean ans = solve(moves, m);
    System.out.println(ans);
  }

  public static boolean solve(String moves, int m) {
    int x = 0;
    int y = 0;

    Set<String> visited = new HashSet<>();
    visited.add(x + "," + y);

    for (char move : moves.toCharArray()) {
      if (move == 'R') {
        x++;
      } else if (move == 'L') {
        x--;
      } else if (move == 'U') {
        y++;
      } else if (move == 'D') {
        y--;
      }

      String c = x + "," + y;
      if (visited.contains(c)) {
        return true;
      }

      visited.add(c);
    }

    return false;
  }
}
