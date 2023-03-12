/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

/* This program demostrates writing standalone classes in Java.
 * We are designing a class for a circle, that contains data about its radius 
 * We also write a method to find the area,diameter and circumference of the circle and one to print the required data.
 */
import java.util.Scanner;

public class Main
{
  public static void main (String[]args)
  {
    // Create a Scanner object for user input
    Scanner input = new Scanner (System.in);

    // Initialising a fixed size double array for 5 objects
    double[] radiusValues = new double[5];
    // calling the print method

    for (int i = 0; i < radiusValues.length; i++)
      {
	System.out.print ("Enter the radius of a circle: ");
	radiusValues[i] = input.nextDouble ();
	System.out.println ("");
      }

    // close input
    input.close ();

    for (int i = 0; i < radiusValues.length; i++)
      {
	testCircleObject (radiusValues[i]);
      }

    //Test setRadius method of Circle object
    // testCircleRadiusSetter(); 
  }

  private static void testCircleObject (double radius)
  {
    System.out.println ("");
    System.out.println ("Testing circle object");

    //Create a Circle object passing in user input
    Circle circle = new Circle (radius);
    System.out.println (circle.toString ());
  }

  private static void testCircleRadiusSetter ()
  {

    System.out.println ("Testing circle radius setter ");

    //Create a default Circle object 
    Circle circle = new Circle ();
    System.out.println (circle.toString ());

    System.out.println ("Updating circle radius  ");

    //Update radius
    circle.setRadius (6);
    System.out.println (circle.toString ());

  }

}

class Circle
{
  // data attributes
  double radius;
  static final double PI = 3.14159;
  // This variabe counts the number of objects declared so far
  //static int count =0;

  /* constructors
   * constructors are methods that are used to initialize the data attributes of an object.
   * They are always public, have the same name as the class and have no return type.
   * They are automatically invoked when the object is declared.
   */
  // default constructor 
  public Circle ()
  {
    radius = 0.0;
    //count++;
  }

  // parameterized constructor
  public Circle (double r)
  {
    radius = r;
    //count++;
  }

  /*accessors and mutators
   * Accessors, or get methods retrun the value of an attribute.
   * Mutators, or set methods change the value of an attribute.
   * They are one line public methods that contain the name of the attribute in their name.
   * There should be one of each per atribute.
   */
  public double getRadius ()
  {
    return radius;
  }

  public void setRadius (double r)
  {
    radius = r;
  }

  // To calculate the area of the circle 
  double calculateArea ()
  {
    return PI * radius * radius;
  }
  // To calculate the diameter of the circle
  double calculateDiameter ()
  {
    return radius * 2;
  }
  // To calculate the circumference of the circle
  double calculateCircumference ()
  {
    return 2 * PI * radius;
  }

  // This method prints all the pertinent data
  public String toString ()
  {
    return "\nRadius is: " + getRadius () + "\nArea is: " + calculateArea () +
      "\nDiameter is: " + calculateDiameter () + "\nCircumference is: " +
      calculateCircumference ();
  }
}