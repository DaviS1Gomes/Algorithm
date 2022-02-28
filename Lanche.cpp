#include <math.h>
#include <stdio.h>

int main()
{
    int valorX, valorY;
    double price;

        scanf("%d %d", &valorX, &valorY);

    switch (valorX)
    {
    case 1:
        price = 4.00;
        printf("Total: R$ %.2f\n", price * valorY);
        break;
    case 2: 
            price = 4.50;
        printf("Total: R$ %.2f\n", price * valorY);
        break;
    case 3:
            price = 5.00;
        printf("Total: R$ %.2f\n", price * valorY);
        break;
    case 4:
            price = 2.00;
        printf("Total: R$ %.2f\n", price * valorY);
        break;
    case 5:
            price = 1.50;
        printf("Total: R$ %.2f\n", price * valorY);
    break;
    }
    
    return 0;
}
