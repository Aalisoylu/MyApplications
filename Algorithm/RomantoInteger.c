#include<stdio.h>

int romanToInt(char * s){

    
    //metinde gördüğüm okuduğum değerleri number değişkenime toplarım.
    int num=0,i;
    int n= strlen(s);
    
    for(i=0;i<n;i++){
     if(s[i]=='I' && s[i+1]!='V' && s[i+1]!='X'){
         num=num+1;
     }
     else if(s[i]=='I' && s[i+1]=='V'){
         num=num+4;
         i++;
     }
     else if(s[i]=='I' && s[i+1]=='X'){
         num=num+9;
         i++;
     }
     else if(s[i]=='V'){
         num=num+5;
     }
     else if(s[i]=='X' && s[i+1]!='L' && s[i+1]!='C'){
         num=num+10;
     }
     else if(s[i]=='X' && s[i+1]=='L'){
         num=num+40;
         i++;
     }
     else if(s[i]=='X' && s[i+1]=='C'){
         num=num+90;
         i++;
     }   
     else if(s[i]=='L'){
         num=num+50;
     }
     else if(s[i]=='C' && s[i+1]!='D' && s[i+1]!='M'){
         num=num+100;
     }
     else if(s[i]=='C' && s[i+1]=='D'){
         num=num+400;
         i++;
     }
     else if(s[i]=='C' && s[i+1]=='M'){
         num=num+900;
         i++;
     }      
     else if(s[i]=='D'){
         num=num+500;
     }
     else if(s[i]=='M'){
         num=num+1000;
     }
     else{
     }

    }    
    
    return num;
}

void main() {
  
   printf("Number:%d\n",romanToInt("IV"));
  
}
