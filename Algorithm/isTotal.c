#include <stdio.h>

int isTotal(int nums[], int n, int total){

        int i;
        int temp=total;
        for(i=0;i<n;i++){
            //Diziden aldığımız her değeri toplamdan çıkartalım.
            //Sonucun dizide olup olmadığına bakmalıyız.

            temp=total-nums[i];

            if()

        }

        return 0;

}

int main() {

    //printf("Hello, World!");
    int nums[]={10,3,15,7};
    int n= sizeof(nums)/sizeof(nums[0]);
    int total=17;
    
    int r= isTotal(nums,n,total);
    printf("%d",r);

    return 0;
}

