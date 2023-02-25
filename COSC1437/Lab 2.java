/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.Scanner;
public class Main {
  /**
   * A simple Java program to find student grades
   * Assuming a student has 5 subjects
   **/
  public static void main(String[] args) {
    int totalStudents = 5; // assuming 5 students
    int totalSubjects = 5; // assuming 5 subjects
    int maxMarksEachSub = 100; // Each subject can have max 100 marks
    double[] students = new double[totalStudents];
    double[] marks = new double[totalSubjects];
    double totalMarks = 0;
    double marksInPercentage = 0;
    String grade = "";
    Scanner userInputObj = new Scanner(System.in);
    System.out.println("This program calculates the grades for the students");
    System.out.println("It accepts the marks for the five subjects and then based on the marks entered by the user, it calculates the" + "  percentage and the grade for that student.");
    System.out.println("It will run for at least one time and then based on input from the user whether user wants to continue or not, the program either terminates or continues");
    for (int i = 0; i <= students.length - 1; i++) {
      totalMarks = 0;
      marksInPercentage = 0;
      System.out.println(" ");
      System.out.print("Grades for student: ");
      students[i] = userInputObj.nextInt();
      for (int x = 0; x < marks.length; x++) {
        System.out.println(" ");
        System.out.print("Please enter the marks for " + (x + 1) + " subject (it should be between 0 and 100):");
        marks[x] = userInputObj.nextInt();
        /* Handling Invalid Input   */
        while (marks[x] < 0 || marks[x] > maxMarksEachSub) {
          System.out.println("Please reenter marks for that subject. ");
          marks[x] = userInputObj.nextInt();
        }
        totalMarks += marks[x];

      }
      marksInPercentage = totalMarks / totalSubjects;
      grade = getGrade(marksInPercentage);
      System.out.println("Total Marks:" + totalMarks);
      System.out.println("Percentage is:" + marksInPercentage);
      System.out.println("Grade is: " + grade);
      if (i == students.length - 1) {
        break;
      }
      System.out.print("Need to enter marks for more student? enter Y or N:");
      char answer = userInputObj.next().charAt(0);
      if (answer == 'N') {
        break;
      }
    }
    Terminate();

  }
  public static void Terminate() {
    System.out.println("Terminating the program");
    System.exit(0);
  }

  public static String getGrade(double marksInPercentage) {
    if (marksInPercentage >= 90 && marksInPercentage <= 100) {
      return "A";
    } else if (marksInPercentage >= 80 && marksInPercentage < 90) {
      return "B";
    } else if (marksInPercentage >= 70 && marksInPercentage < 80) {
      return "C";
    } else if (marksInPercentage >= 60 && marksInPercentage < 70) {
      return "D";
    } else {
      return "F";
    }
  }
}