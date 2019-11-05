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
