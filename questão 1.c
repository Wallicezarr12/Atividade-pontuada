#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main () {
 float clima;

printf("temperatura: ");
scanf("%f", &clima);

if (clima > 25)
{
printf("clima ensolarado");    
}
if (clima < 15)
{
    printf("clima chuvoso");
}
if (clima > 14 && clima < 26)
{
    printf("clima nublado");
}



aaa



return 0;
}