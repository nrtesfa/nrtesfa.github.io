package project2;
//import javax.swing.plaf.synth.SynthTextAreaUI;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
//import some necessary files
//defined class



/**
* Project Two Quiz Analyzer
*
* Nayab Tesfa 
*/
public class NTProjectTwo {
   // main method or driver method
   public static void main(String[] args) throws IOException {

       // instantiate a QuizData object by passing the file name
       File inputFile = new File("src/project2/QuizGrades.txt");
       BufferedReader reader = new BufferedReader(new FileReader(inputFile));

       String currentLine = reader.readLine().trim();
       String size[] = currentLine.split(",");
       int row = Integer.parseInt(size[0]);
       int col = Integer.parseInt(size[1]);
       int[][] scores = new int[row][col];
       String[] names = new String[row];


       int i=0;
       while((currentLine = reader.readLine()) != null) {
           // trim newline when comparing with lineToRemove
           String trimmedLine = currentLine.trim();

           //Bill Smith,80,78,68,73,90,88

           String[] quizScores = trimmedLine.split(",");

           // [Bill Smith,80,78,68,73,90,88]

           names[i] = quizScores[0];

           for(int j = 1;j<quizScores.length;j++) {
               scores[i][j-1] = Integer.parseInt(quizScores[j]);
           }
           i++;

       }
       // scores[][] = [ [80,78,68,73,90,88],
        //                  [76,65,81,0,70,72],
       //                   [71,75,76,0,0,73],
       //                   [77,80,76,73,80,86]]


       float [] studentAverage = new float[row];
       float [] quizAverage = new float[col];

       float maxAverage = 0;
       int maxAverageIndex = -1;

       for(int index = 0;index<row;index++){
           int sum = 0;
           for(int j=0;j<col;j++){
               sum += scores[index][j];
           }
           studentAverage[index] = (float)(Math.round(((float)sum/col)*10.0)/10.0);
           if(studentAverage[index]> maxAverage){
               maxAverage = studentAverage[index];
               maxAverageIndex = index;
           }
       }

       for(int j = 0;j<col;j++){
           int numOfStudents = 0;
           int sum = 0;
           for(int index = 0;index<row;index++){
               if(scores[index][j]!=0) {
                   sum += scores[index][j];
                   numOfStudents++;
               }
           }
           quizAverage[j] = (float)(Math.round(((float)sum/numOfStudents)*10.0)/10.0);
       }

       String format = "%-12s %6s %6s %6s %6s %6s %6s %6s";

//        System.out.printf("|%s|%s|%s|%n",
//                StringUtils.center("Name", 22),
//                StringUtils.center("Birth Date", 16),
//                StringUtils.center("Age", 6));

       System.out.println("     Student "+"Quiz 1 "+"Quiz 2 "+"Quiz 3 "+"Quiz 4 "+"Quiz 5 "+"Quiz 6 "+"Student Average");
       System.out.println("------------ "+"------ "+"------ "+"------ "+"------ "+"------ "+"------ "+"---------------");

       for(int index = 0;index<row;index++){

           System.out.format(format, names[index], scores[index][0], scores[index][1], scores[index][2],
                   scores[index][3],scores[index][4], scores[index][5], studentAverage[index]);
           System.out.println();
       }
       System.out.println("             "+"------ "+"------ "+"------ "+"------ "+"------ "+"------ "+"---------------");
       System.out.format(format, "Quiz Average", quizAverage[0], quizAverage[1], quizAverage[2], quizAverage[3],
               quizAverage[4],quizAverage[5],"\n\n");
       System.out.println(names[maxAverageIndex] +" had the highest overall average of "+maxAverage);
   }
}

