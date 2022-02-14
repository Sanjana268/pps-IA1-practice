#include <stdio.h>
typedef struct cmplx
{
    float r, i;
} Clx;
int rng()
{
    int r;
    printf("Enter range - ");
    scanf("%d", &r);
    return r;
}
Clx inp(int r, Clx n[])
{
    for (int i = 0; i < r; i++)
    {
        printf("Enter real and imaginary parts separated by a space - ");
        scanf("%f %f", &n[i].r, &n[i].i);
    }
}
Clx add(int r, Clx n[])
{
    Clx s;
    for (int i = 0; i < r; i++)
    {
        s.r += n[i].r;
        s.i += n[i].i;
    }
    return s;
}
void out(int r, Clx n[], Clx s)
{
    printf("  %g\t+\t%g i\n", n[0].r, n[0].i);
    for (int i = 1; i < r; i++)
    {
        printf("+ %g\t+\t%g i\n", n[i].r, n[i].i);
    }
    printf("=======================\n  %g\t+\t%g i", s.r, s.i);
}
int main()
{
    int r = rng();
    Clx n[r], s;
    inp(r, n);
    s = add(r, n);
    out(r, n, s);
    return 0;
}
