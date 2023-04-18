package lab4;

import java.util.Scanner;

public class Average {
	int[] data;
	double mean;

	Average() {
		data = new int[5];
		for (int i = 0; i < 5; i++) {
			System.out.println("Please enter a score number " + (i + 1));
			Scanner input = new Scanner(System.in);
			data[i] = input.nextInt();

		}
		selectionSort();
		calculateMean();
	}

	void calculateMean() {
		double total = 0;
		for (int i = 0; i < 5; i++) {
			total += data[i];
		}
		mean = total / 5;
	}

	public String toString() {
		String results = "";
		for (int i = 0; i < data.length ; i++) {
			results += data[i] + " ";
		}
		results += "\n";
		results += mean;
		return results;
	}

	void selectionSort() {
		for (int i = 0; i < data.length - 1; i++) {
			int minimum = i;
			for (int j = i + 1; j < data.length; j++) {
				if (data[j] > data[minimum]) {
					minimum = j;
				}
			}
			int minimumValue = data[minimum];
			data[minimum] = data[i];
			data[i] = minimumValue;
		}
	}

}