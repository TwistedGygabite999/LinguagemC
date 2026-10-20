#include <stdio.h>

int main()
{
    int num1, num2;
    num1 = 5;
    
    printf("Hello World\n");
    
    printf("Digite um número: ");
    scanf("%d", &num2);
    printf("Número vale: %d, e o número digitado vale %d!", num1, num2);

    return 0;
}
