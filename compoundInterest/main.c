#include <stdio.h>
#include <math.h>
#include <math.h>

void exitSmooth(int error)
{
    if (error)
        getchar();
    char c;
    printf("\n\n\n...press enter to exit...");
    scanf("%c", &c);
}

int main()
{
    float principle, rate = 10.0, time, interest, totalInterest;
    printf("Enter the principle amount:");
    scanf("%f", &principle);
    printf("Enter the number of years:");
    scanf("%f", &time);
    // interest = principle * rate / 100;
    // amount = principle + interest;
    for (float i = 1; i <= time; i++)
    {
        interest = principle * rate / 100;
        principle = principle + interest;
        totalInterest += interest;
        printf("Interest of the %0.0f year: %0.2f\n", i, interest);
    }
    float remainTime = time - floorf(time);
    interest = remainTime * principle * rate / 100 ;
    principle = principle + interest;
    totalInterest += interest;
    printf("Interest of the %0.0f year: %0.2f\n", ceilf(time), interest);
    printf("\nTotal compond interest: %.2f",principle);
    exitSmooth(1);
    return 0;
}