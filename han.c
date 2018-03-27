#include"stdio.h"
void towers(int num, char from, char top, char aux)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from %c to %c", from, top);
        printf("\n");
        return;
    }
    towers(num - 1, from, aux, top);
    printf("\n Move disk %d from %c to %c", num, from, top);
    towers(num - 1, aux, top, from);
    printf("\n");
}
main()
{
    int num;
    printf("\nEnter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'B', 'C');
}

