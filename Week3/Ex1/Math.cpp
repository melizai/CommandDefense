#include "Math.h"

int Math::Add(int a, int b)
{
    return a + b;
}
int Math::Add(int a, int b, int c)
{
    return a + b + c;
}
int Math::Add(double a, double b)
{
    return a + b;
}
int Math::Add(double a, double b, double c)
{
    return a + b + c;
}

int Math::Mul(int a, int b)
{
    return a * b;
}
int Math::Mul(int a, int b, int c)
{
    return a * b * c;
}
int Math::Mul(double a, double b)
{
    return a * b;
}
int Math::Mul(double a, double b, double c)
{
    return a * b * c;
}

int Math::Add(int count, ...) // sums up a list of integers
{
    va_list as;
    va_start(as, count);

    int sum = 0;

    for (int i = 0; i < count; i++)
        sum += va_arg(as, int);

    va_end(as);

    return sum;
}

char* Math::Add(const char* a, const char* b)
{
    char* c = new char[strlen(a) + strlen(b) + 1];
    if (!c)
        return nullptr;

    for (int i = 0; i < strlen(a); i++)
        c[i] = a[i];
    for (int i = 0; i < strlen(b); i++)
        c[i + strlen(a)] = b[i];
    c[strlen(a) + strlen(b)] = '\0';

    return c;
}