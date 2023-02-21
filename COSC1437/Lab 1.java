import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner Cookie = new Scanner(System.in);
    // Program Title 
    // System.out.println("How many Cookies?");
    // Declaring variables that user will input
    // Declaring variables that will be calculated
    int total_Calories, calorie_per_cookie;
    //Gather input
    System.out.println("How many cookies did you eat?");
    int cookies_Eat = Cookie.nextInt();
    if (cookies_Eat >= 2 & cookies_Eat <= 8) {
      calorie_per_cookie = 100;
      // Perform calculations 
      total_Calories = cookies_Eat * calorie_per_cookie;
      // Display outputs
      System.out.println("After eating " + cookies_Eat + " cookies, " + "The total calories that were consumed " + total_Calories + " calories.");
      if (total_Calories > 500) {
        System.out.println("You have consumed more than 500 calories.");
      } else {
        System.out.println("You have consumed less than 500 calories.");
      }

    } else {
      System.out.println("The number of cookies you entered was not valid.");
    }

  }
}
