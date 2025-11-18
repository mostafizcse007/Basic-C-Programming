#include <stdio.h>
int main()
{
    double a, b, c, d, avg;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    a *= 2, b *= 3, c *= 4, d *= 1;
    avg = (a + b + c + d) / 10;
    printf("Media: %.1lf\n", avg);
    if (avg >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if (avg >= 5 && avg <= 6.9)
    {
        printf("Aluno em exame.\n");
        double e, avg2;
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        avg2 = (avg + e) / 2;

        if (avg2 >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else if (avg2 <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", avg2);
    }
    return 0;
}