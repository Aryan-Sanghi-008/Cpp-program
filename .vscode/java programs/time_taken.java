import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class time_taken {

  public static void selectionSort(int[] arr) 
  {
      int n = arr.length;
      for (int i = 0; i < n - 1; i++) 
      {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
          if (arr[j] < arr[idx]) {
            idx = j;
          }
        }
        int lesser = arr[idx];
        arr[idx] = arr[i];
        arr[i] = lesser;
      }
  }

  public static void main(String args[]) {
    Scanner input = new Scanner(System.in);
    Random rand = new Random();
    long sum = 0;
    for (int k = 0; k < 30; k++) {
      int[] arr = new int[30000];

      for (int i = 0; i < 30000; i++) {
        arr[i] = rand.nextInt();
      }

      long startTime = System.nanoTime();
      selectionSort(arr);
      long endTime = System.nanoTime();
      long timeElapsed = endTime - startTime;
      System.out.println(
        "Elapsed time in milliseconds :" + timeElapsed / 1000000
      );
      sum += timeElapsed;
    }
    System.out.println("Average time taken to sort :" + sum / 30000000);
  }
}
