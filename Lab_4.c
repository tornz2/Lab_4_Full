#include <locale.h>
#include <stdio.h>


int def_1();
int def_2();
int def_3();


int main(){
    setlocale(LC_ALL, ".UTF8");

    // def_1();
    // def_2();
    def_3();

    return 0;
}


int def_1(){
    char c; 
    int i;
    float f;
    double d;

    puts("Char");
    scanf("%c", &c);

    puts("Int");
    scanf("%d", &i);

    puts("Float");
    scanf("%f", &f);

    puts("Double");
    scanf("%lf", &d);

    printf("%c %d %f %e", c, i, f, d);


    //1a

    int left_part = f;
    float right_part = f - left_part;

    printf("\nЦелая часть %d\nДробная часть %f", left_part, right_part);

    //2b

    char symbol;

    scanf("%c", &symbol);
    printf("\n16: %X\n10: %d", symbol, symbol);


    //1c

    double i2;

    scanf("%lf", &i2);

    printf("\n1/i = %lf", 1.0 / i2);

    return 0;
}


int def_2(){
    int a = 11, b = 3;

    printf("a/b = %f", (float)a/b);


    return 0;
}



int def_3(){
    int input;

    puts("Ведите число:");

    scanf("%d", &input);
    int last_symb = input % 10, first_symb = input / 100;
    int midle_symb = (input % 100) / 10;

    printf("\nПоследняя цифра: %d\nПервая цифра: %d\nСумма разрядов числа: %d\nОтраженное число: %d", 
        last_symb, first_symb, last_symb + first_symb + midle_symb, last_symb * 100 + midle_symb * 10 + first_symb);

    return 0;
}




