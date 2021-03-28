#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

int units(int* val, int unit_size)
{
    int num = *val / unit_size;
    *val %= unit_size;

    return num;
}

int main()
{
    

    float amount,amt_money,tot_amt;
    
    srand(time(0)); 
    amount = rand()% 100000;
    amount = amount/10;

    printf("Le montant que vous devrez payer : %.2f\n",amount);
    
    
    printf("quelle est la somme que vous donnerez ?: ");
    scanf("%f",&amt_money);
    
    while(amount > amt_money)
    {
        
      printf("somme insuffisant,donnez en plus!");
      printf("quelle est la somme que vous donnerez ?: ");
      scanf("%f",&amt_money);  
        
    }
    
    tot_amt = amt_money - amount;
    
    printf("La somme a retourner : %.2f\n",tot_amt);

    int x = (int)(tot_amt * 100.0 + 0.5);

    printf("Nombre de billets de Rs2000: %d\n", units(&x, 2000 * 100) );
    printf("Nombre de billets de Rs1000: %d\n", units(&x, 1000 * 100) );
    printf("Nombre de billets de Rs500: %d\n", units(&x, 500 * 100) );
    printf("Nombre de billets de Rs200: %d\n", units(&x, 200 * 100) );
    printf("Nombre de billets de Rs100: %d\n", units(&x, 100 * 100) );
    printf("Nombre de billets de Rs50: %d\n", units(&x, 50 * 100) );
    printf("Nombre de billets de Rs25: %d\n", units(&x, 25 * 100) );
    printf("Nombre de coins de Rs20: %d\n", units(&x, 20 * 100) );
    printf("Nombre de coins de Rs10: %d\n", units(&x, 10 * 100) );
    printf("Nombre de coins de Rs5: %d\n", units(&x, 10 * 100) );
    printf("Nombre de coins de Rs1: %d\n", units(&x, 1 * 100) );
    printf("Nombre de coins de 50sous: %d\n", units(&x, 50) );
    printf("Nombre de coins de 20sous: %d\n", units(&x, 20) );
    printf("Nombre de coins de 5sous: %d\n", units(&x, 5) );

    return 0;
}

