#include <stdio.h>
int main()
{
    int Physics, Chemistry, Biology, Maths, Computer; 
    float per; 
    printf("Enter five subjects marks:\nPhysics\nChemistry\nBiology\nMaths\nComputer\n");
    scanf("%d%d%d%d%d", &Physics, &Chemistry, &Biology, &Maths, &Computer);
    per = (Physics + Chemistry + Biology + Maths + Computer) / 5.0;
    printf("Percentage = %.2f\n", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
