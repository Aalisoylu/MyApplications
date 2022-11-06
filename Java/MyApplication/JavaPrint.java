public class JavaPrint {


    public static void main(String[] args) {

        System.out.println("Text to be printed");
        //int nums[]= {1,2,3,4,5};

    }



    public int returnSecondMax(int[] nums){
    
        int result = nums[0];

        for(int i=1; i<nums.length;i++){
            if(result < nums[i]){
                result = nums[i];
            }
        }

        int result2=0;
        for(int i=1; i<nums.length;i++){
            if(result2 < nums[i]){
                result = nums[i];
            }
        }


        return result;
    }




}