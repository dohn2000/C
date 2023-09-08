#include <stdio.h>

int main(int argc, char **argv)
{
	printf( "*\n");
    printf( "**\n");
    printf( "***\n");
    printf( "****\n");
    printf( "*****\n");



    printf("======================================\n");
    printf("| STT | HO TEN   | Tuoi | Gioi Tinh  |\n");
    printf("|01   | Nguyen A | 20   | Nam        |\n");
    printf("|02   | Nguyen B | 22   | Nam        |\n");
    printf("|03   | Nguyen C | 26   | Nam        |\n");
    
    int a,b,c,d;
    a = 1;
    b = 2;
    c = 3;
    d = 10*a*a + 5*b*c +c*c;
    printf("gia tri cua d: %d\n", d);
}
