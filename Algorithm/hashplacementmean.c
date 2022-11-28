#include <stdio.h>
// Linear probing ile hash tablosuna yerleştirilmiş elemanlar kaç adımda tabloya yerleştirildiğinin ortalamasını bulan algoritma
int M = 10;

int search(int key, int hash[])
{

    int i = 0, flag = 1, count = 1;
    int index = (key + i) % M;

    if (hash[index] == key)
    {
        printf("Key %d Tablodaki Yeri : %d", key, index);
    }

    while (hash[index] != key && flag == 1 && i < M)
    {
        i++;
        count++;
        index = (key + i) % M;
        if (hash[index] == key)
        {
            printf("Key %d Tablodaki Yeri : %d", key, index);
            flag = 0;
        }
       
    }

    printf("\nCount: %d\n", count);
    return count;
    if (i >= M)
    {
        printf("ELEMAN TABLODA YOK");
    }
}

int main()
{

    int hash[10] = {0, 1, 2, 3, 4, 5, 11, 16, 0, 0};

    int i, sayac = 0;
    float toplam=0.0;
    for (i = 0; i < M; i++)
    {
        if (hash[i] != 0)
        {
            sayac++;
            toplam = toplam + search(hash[i], hash);
        }
    }

    float ortalamasum = toplam / sayac;

    printf("\nORTALAMA: %f \n", ortalamasum);
}
