#include <math.h>
/*фу-ия деления берет double a, b, выводит double, ошика при b == 0, тогда меняем и выводим код ошибки*/
double division(double a, double b, int* ErrorCode) {
    if(b != 0)
        return a / b;
    else
        *ErrorCode = -1;
    return 0;
}
/* это фу-ия модуля, берет double, a, затем выводит double */
double module(double a) { 
    if(a >= 0)
    return a;
    else
    return -a;
}
/*фу-ия деления со взятием частного, берет int a, b, выводит int, ошика при b == 0, тогда меняем и выводим код ошибки*/
int div(int a, int b, int* ErrorCode) {
    if(b != 0)
        return a / b;
    if(b == 0)
        *ErrorCode = -1;
    return 0;
}
/*фу-ия деления со взятием остатка, берет int a, b, выводит int, ошика при b == 0, тогда меняем и выводим код ошибки*/
int mod(int a, int b, int* ErrorCode){
    if(b != 0)
        return a % b;
    else
        *ErrorCode = -1;
    return 0;
}
/*функция квадратного корня, берет double a, указатель на errorcode, выводит double, ошибка при a < 0, то указатель на ошипку*/
double computesqrt(double a, int* ErrorCode) {
    if(a >= 0)
        return sqrt(a);
    else
        *ErrorCode = -1;
    return 0;
}
