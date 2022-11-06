// Online Java Compiler
// Use this editor to write, compile and run your Java code online

//Input= "xox"
//Out= "Yes"

class HelloWorld {
   
    public static String isPalindrome(String str) {

        String reverseStr= "";
        for(int i=str.length()-1;i>=0; i--){
            reverseStr += str.charAt(i);
        }

        boolean palindrome= str.equalsIgnoreCase(reverseStr);
        
        if(palindrome){
            return "Yes. " + str + " is palindrome.";
        }
        return "No";
    }
    
    
    
    public static void main(String args[]){
        
        String str="xox";
        System.out.println(isPalindrome(str));
        
    }
    
    
}



