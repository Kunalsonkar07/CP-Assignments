#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;
} comp;

int main()
{
    comp c[100];
    int num;
    printf("Enter count of numbers \n");
    scanf("%d", &num);
    int sr = 0, sc = 0;
    for (int i = 0; i < num; i++)
    {
        printf("\n\nFor number %d\n", i + 1);
        printf("Enter real part\n");
        scanf("%d", &c[i].real);
        printf("Enter complex part\n");
        scanf("%d", &c[i].complex);
        printf("%d.  %d + i %d\n", i + 1, c[i].real, c[i].complex);
        sr += c[i].real;
        sc += c[i].complex;
    }

    printf("Sum is : %d + i %d\n", sr, sc);
    return 0;
}