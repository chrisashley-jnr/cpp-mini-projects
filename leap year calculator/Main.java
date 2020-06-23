import java.util.Scanner;
public class CalculateLeapYear{
	public static void main(String args[]){
	    Scanner s = new Scanner(System.in);
	    System.out.print("Which year do you want to check for?: ")
	    int year = s.nextInt();
	    boolean check = false;
	    if (year % 400 ==0){
            check = true;
	    }
	    else if (year % 100 == 0){
            check = false;
	    }
	    else if (year % 4 == 0){
            check = true;
	    }
	    else{
            check = false;
	    }
        if (check){
            System.out.printIn("Year "+year+" is a Leap Year");
        }
        else {
            System.out.printIn("Year "+year+" is not a Leap Year");
        }
	}
}
