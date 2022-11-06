import java.util.*; 
import java.io.*;

class Main {

  public static int MathChallenge(int num1, int num2) {
    // code goes here  
    if(num2==0){
      return num1;
    }
    return MathChallenge(num2, num1 % num2);
  }

  public static void main (String[] args) {  
    // keep this function call here     
    int num1= 6;
    int num2= 3;
    System.out.print(MathChallenge(num1,num2));
     
    
  }

}