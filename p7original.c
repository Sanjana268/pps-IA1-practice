#include <stdio.h>
typedef struct cmplx
{
    float r, i;
} Clx;

Clx inp()
{
    Clx n;
    printf("Enter real and imaginary parts separated by a space - ");
    scanf("%f %f", &n.r, &n.i);
    return n;
}
Clx add(Clx a, Clx b)
{
    Clx s;
    s.r = a.r + b.r;
    s.i = a.i + b.i;
    return s;
}
void out(Clx a, Clx b, Clx s)
{
    printf("%g+%gi + %g+%gi = %g+%gi", a.r, a.i, b.r, b.i, s.r, s.i);
}
int main()
{
    Clx a = inp(), b = inp(), s;
    s = add(a, b);
    out(a, b, s);
    return 0;
}