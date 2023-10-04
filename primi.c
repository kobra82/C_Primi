#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main()
{
printf("\nTEST DI PRIMALITA' DEI NUMERI PRIMI\n\n");
printf("Inserisci il numero da testare: ");
int n;
scanf("%d",&n);
int i=2,primo=1, div=0, somma=1;
do
{
if (n%i==0)
{
primo=0;
printf("\n%d/%d = %d",n,i,(n/i));
div++;
somma+=i;
}
i++;
}while(i<n);
if (primo==1)
printf("\nNon sono trovati divisori quindi il numero testato e' primo");
else 
{
if (somma==n)
printf("\n\nSono trovati %d divisori ed il numero e' perfetto",div);
else
printf("\n\nSono trovati %d divisori",div);
}
getch();
}
