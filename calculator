/*главная функция сканирует два числа, является меню*/
#include<stdio.h>

int main(void){
double a = 0, b = 0, result = 0;

char cmd;
int ErrorCode = 0;
int resInt = 0;
while(1){
  scanf("%lg%c%lg", &a, &cmd, &b);
  
  switch(cnd){
  case'+':
      printf("%lg + %lg = %lg\n", a, b, a + b);
  break;
  case'-';
      printf("%lg - %lg = %lg\n", a, b, a - b);
      break;
  case'*':
      printf("%lg * %lg = %lg\n", a, b, a * b);
  break;
  case'/':
      result = division( a, b,  &errorCode);
      if(ErrorCode == 0)
         printf("%lg\n", result);
      if(ErrorCode != 0)
         printf("ой\n");
         errorCode = 0;
   break;
   case 'D':
      resInt = div((int) a, (int) b, &errorCode);
      if(0 == errorCode)
          printf("%lg D %lg = %d\n", a, b, resInt);
   break;
   case '%':
      resInt = mod((int) a, (int) b, &errorCode);
      if(0 == errorCode)
          printf("%lg %% %lg = %d\n", a, b, resInt);
   break;
 return 0;
 }
}
