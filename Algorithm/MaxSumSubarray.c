#include <stdio.h>
#include <limits.h>

int max(int a, int b, int c)
{
    int max = c;

    if (a >= b && a >= c)
    {
        max = a;
    }
    if (b >= a && b >= c)
    {
        max = b;
    }
    return max;
}

int Max_Birlesim(int dizi[], int sol, int orta, int sag, int *MAX, int *bas,
                 int *son)
{

    int solToplam = INT_MIN;
    int toplam = 0;
    int i;
    int tmpSol, tmpSag;
    int birlesimToplam;

    for (i = orta; i >= sol; i--)
    {
        toplam = toplam + dizi[i];
        if (toplam > solToplam)
        {
            solToplam = toplam;
            tmpSol = i;

            if (*MAX < toplam)
            {
                *MAX = toplam;
                *bas = i;
                *son = orta;
            }
        }
    }

    int sagToplam = INT_MIN;
    toplam = 0;

    for (i = orta + 1; i <= sag; i++)
    {
        toplam = toplam + dizi[i];
        if (toplam > sagToplam)
        {

            sagToplam = toplam;
            tmpSag = i;

            if (*MAX < toplam)
            {
                *son = i;
                *MAX = toplam;
                *bas = orta + 1;
            }
        }

        birlesimToplam = sagToplam + solToplam;
        if (max(sagToplam, solToplam, birlesimToplam) == birlesimToplam)
        {
            *MAX = birlesimToplam;
            *bas = tmpSol;
            *son = tmpSag;
        }
    }

    return birlesimToplam;
}

int Max_Dizi(int dizi[], int sol, int sag, int *MAX, int *bas,
             int *son)
{
    if (sag == sol)
    {
        return dizi[sag];
    }

    int orta = sol + (sag - sol) / 2;

    int solMax = Max_Dizi(dizi, sol, orta, MAX, bas, son);

    int sagMax = Max_Dizi(dizi, orta + 1, sag, MAX, bas, son);

    int ortaMax = Max_Birlesim(dizi, sol, orta, sag, MAX, bas, son);

    MAX = max(solMax, sagMax, ortaMax);

    return MAX;
}

int main()
{
    int dizi[7] = {8, -30, 36, 2, -6, 52, 8};
    int N = sizeof(dizi) / sizeof(dizi[0]);

    // Maksimum, baslangic ve son degerlerimiz
    int *MAX = INT_MIN, *bas, *son;

    Max_Dizi(dizi, 0, N - 1, &MAX, &bas, &son);

    printf("MAX: %d\n", MAX);
    printf("Baslangic indis: %d\nBitis indis: %d\n", bas, son);

    return 0;
}