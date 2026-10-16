#include <locale.h>
#include <stdio.h>


int def_1_V1();
int def_2_V5();


int main(){
    setlocale(LC_ALL, ".UTF8");

    def_1_V1();
    def_2_V5();

    return 0;
}


int def_1_V1(){
    int A, B;

    puts("Введите номер Анны");
    scanf("%d", &A);

    puts("Введите номер Бориса");
    scanf("%d", &B);


    int coffe = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
    
    printf("%s", coffe ? "Кофе есть" : "Кофе нет");

    
    return 0;
}



int def_2_V5(){
    int A, B;

    puts("Лампа №1");
    scanf("%d", &A);

    puts("Лампа №2");
    scanf("%d", &B);

    int alarm = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));

    printf("%s", alarm ? "Тревога" : "ОК");


    return 0;
}