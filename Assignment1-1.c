#include <stdio.h>

int main() {
int num, Odd, Even;
    
printf("Enter the number: ");
scanf("%d", &num);

int lastBit = num & 1;
if (lastBit == 1) 
{
Odd = 1;
Even = 0;
} 
else 
{
Odd = 0;
Even = 1;
}

printf("The number is odd = %d\n", Odd);
printf("The number is even = %d\n", Even);

return 0;

}
