/******************************************************************************

                            Created by Ali SOYLU

*******************************************************************************/

// Sıralı iki diziyi, sıralı şekilde O(n+m) karmaşıklıkda birleştiren algoritma

#include <stdio.h>

int
main ()
{

  int arr1[] = { 1, 2, 3, 20};
  int arr2[] = { 4, 5 };

  int size1 = sizeof (arr1) / sizeof (arr1[0]);
  int size2 = sizeof (arr2) / sizeof (arr2[0]);

  int yenidizi[size1 + size2];
  int x, i = 0, j = 0;
  int count1 = size1;
  int count2 = size2;

  for (x = 0; x < size1 + size2; x++)
    {

    if(i == size1){
       yenidizi[x] = arr2[j];
       j++;
    }
    
    if(j == size2){
       yenidizi[x] = arr1[i];
       i++;
    }

	if (arr1[i] < arr2[j]){
	   yenidizi[x] = arr1[i];
	   i++;
	}
	else{
	   yenidizi[x] = arr2[j];
	   j++;
	}
		

    }




for (i = 0; i < size1 + size2; i++)
    {
      j = yenidizi[i];
      printf ("%d ", j);
    }



  return 0;
}
