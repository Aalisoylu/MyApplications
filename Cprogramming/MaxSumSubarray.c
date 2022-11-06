// Online C compiler to run C program online
#include <stdio.h>
#include <limits.h> 


//maximum iki değeri döndüren fonksiyon 
int max(int a, int b) { return (a > b) ? a : b; } 
  
int Max_BruteForce(int arr[], int n) 
{ 
  int max_sum = INT_MIN; 
  int sum = 0; 
  int templeft; 
  int tempright; 
  
  if(n<2){
      max_sum=arr[0];
      return max_sum;
  }
	//  i ile başlayan her alt dizi için yap 
	for (int i = 0; i < n ; i++) 
	{ 
		// A[i..j] alt dizisinin toplamını hesapla 
  
		sum = 0;	// Geçiçi dizi alt toplamını hesapla 
  
		// j ile biten her alt dizi için yap 
		for (int j = i; j < n ; j++) 
		{ 
			sum += arr[j]; 
  
			// geçerli alt dizi toplamı maksimumdan büyükse 
			// şimdiye kadar hesaplanan toplamı, maksimum toplama ata 
			if (sum > max_sum){ 
				max_sum = sum; 
                templeft=i; 
                tempright=j; 
        } 
		} 
	} 
    printf("BRUTE FORCE YÖNTEMİ\n");
	printf("Dizimizin %d. indisinden başlanarak %d. indisine kadar seçilmiştir.\n", templeft,tempright); 
  
	return max_sum; 
} 
  
//bitisik kismin bulunması icin gereken fonksiyon
int max_cross_subarray(int a[], int *low, int *mid, int *high, int *lmax, int *rmax){
	int i, lsum, rsum, sum;
	
	lsum = INT_MIN;
	sum = 0;	
	
	//sol kısmın maksimum degerinin bulunması icin gereken kısım
	for(i = *mid;i >= *low;i--){
		sum += a[i];
		if(sum > lsum){
			lsum = sum;
			*lmax = i;
		}
	}
	rsum = INT_MIN;
	sum = 0;
	
	//sag kısmın maksimum degerinin bulunması icin gereken kısım
	for(i = *mid + 1;i <= *high;i++){
		sum += a[i];
		if(sum > rsum){
			rsum = sum;
			*rmax = i;
		}
	}
	return(lsum + rsum);
}

int max_subarray(int a[], int *low, int *high, int *start, int *end){
	int mid, llow, lhigh, rlow, rhigh, clow, chigh;
	int lsum, rsum, csum;
	if(*high == *low){
		*start = *low;
		*end = *high;
		return(a[*low]);
	}
	else {
		mid = (*low + *high) / 2;
		lsum = max_subarray(a, low, &mid, &llow, &lhigh);
		csum = max_cross_subarray(a, low, &mid, high, &clow, &chigh);
		mid += 1;
		rsum = max_subarray(a, &mid, high, &rlow, &rhigh);
		if((lsum >= rsum) && (lsum >= csum)){
			*start = llow;
			*end = lhigh;
			return(lsum);
		}
		else if((rsum >= lsum) && (rsum >= csum)){
			*start = rlow;
			*end = rhigh;
			return(rsum);
		}
		else{
			*start = clow;
			*end = chigh;
			return(csum);
		}
	}
}
  
// Brute force tekniği ile dizinin maksimum değere sahip alt dizisinin bulunması 
int main(void) 
{ 
	
    int n, i, low, high, start, end;
	int sum;
    	
	printf("Dizinin uzunlugunu giriniz:");
	scanf("%d", &n);
	
	if(n<1){
	    printf("Hatalı dizi boyutu girdiniz");
	    return 0;
	}
	
	int arr[n];
	//n = 11
	//8 -30 36 2 -6 52 8 -1 -11 10 4

	for(i = 0;i < n;i++){
	    printf("%d. elemanı giriniz: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	start = end = 0;
	low = 0;
	high = n-1;
	sum = max_subarray(arr, &low, &high, &start, &end);

    printf("\n");
	printf("MAX(BRUTE_FORCE): %d\n", Max_BruteForce(arr, n));
	printf("\nDIVIDE AND CONQUER\n");
	printf("Dizimizin %d. indisinden başlanarak %d. indisine kadar seçilmiştir.\n", start,end); 
	printf("MAX(DIVIDE_AND_CONQUER): %d\n", sum);

     
   
	return 0; 
} 
