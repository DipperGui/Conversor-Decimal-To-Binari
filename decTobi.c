#include<stdio.h>
#include<stdlib.h>

int toBinari(int x)
{
    int i, aux, binResult[7];

    aux=x;
    for(i=6; i>=0; i--)
    {
        if(x%2==0)
        {
            binResult[i] = 0;
        }
        else
        {
            binResult[i] = 1;
        }
        x = x/2;
    }
    printf("O numero %d em binario fica: ", aux);
    for(i=0; i<7; i++)
    {
        printf("%d", binResult[i]);
    }
}
int main ()
{
    int x;
    char status;
    
    do{
    printf("Ola! Eu posso transformar um numero decimal em binario.\n");
    printf("Digite um numero(em decimal): ");
    scanf("%d", &x);

    toBinari(x);

    printf("\n\nDeseja tentar com outro numero (S ou N)?");
    setbuf(stdin, NULL);
    scanf("%c", &status);
    }while (status=='s' || status=='S');
    
    return 0;
}