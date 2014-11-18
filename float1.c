//Разложение числа типа float. 1 способ
//Миновская Настя
#include <stdio.h>
int main(void)
{
float a, b, val;
int ival, s, e, m;
scanf("%f%f", &a, &b);
val = a / b;
ival = *((int*)((void*)&val));
s = (ival >> 31) & 1;
e = (ival >> 23) & ((1 << 8) - 1);
m = ival & ((1 << 23) - 1);
if (s == 0) 
{
	s = 1;
}
else s = -1;
if ((e == 255) && (m == 0) && (s == -1)) 
{
	printf("-Infinity\n");
}
else if ((e == 255) && (m == 0) && (s == 1)) 
{
	printf("+Infinity\n");
}
else if ((e == 255) && (m != 0)) 
{
	printf("NaN\n");
}
else if ((e == 0) && (m == 0)){
	printf("NULL\n");
}
else printf("%d*2^%d*%f\n", s, e-127,1 + ((float)m / (1 << 23)));
return 0;
}
