
#include <stdio.h>

int main()
{
    int day = 2;
  
    switch (day)
      {
// ----------------------------------------------
      case 1: {
        int i;
        for (i = 1; i <= 10; i++) {
            printf("%d ", i);  }
        printf("\n");
        
        return 0; }
          break;
// ----------------------------------------------   
      case 2:
        {
            int num, factorial = 1, i = 1;
            printf("Enter a number: ");
            scanf("%d", &num);
            while (i <= num) {
                factorial *= i;
                i++;
            }
            printf("Factorial of %d = %d\n", num, factorial);
            return 0;
        }
          break;
// ----------------------------------------------
      case 3:
        {
            int n, sum = 0, i = 2;
            printf("Enter a number: ");
            scanf("%d", &n);
            do {
                sum += i;
                i += 2;
            } while (i <= n);
            printf("Sum of even numbers from 1 to %d = %d\n", n, sum);
            return 0;
        }
          break;
// ----------------------------------------------
      case 4:
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0) {
                printf("%d is even\n", num);
            } else {
                printf("%d is odd\n", num);
            }
            return 0;   

        }
          break;
// ----------------------------------------------
      case 5:
        {
            int num1, num2, num3, largest;
            printf("Enter three numbers: ");
            scanf("%d %d %d", &num1, &num2, &num3);
            if (num1 >= num2 && num1 >= num3) {
                largest = num1;
            } else if (num2 >= num1 && num2 >= num3) {
                largest = num2;
            } else {
                largest = num3;
            }
            printf("Largest number is %d\n", largest);
            return 0;
        }
          break;
// ----------------------------------------------
      case 6:
        {
            int year;
            printf("Enter a year: ");
            scanf("%d", &year);
            switch (year % 4) {
                case 0:
                    if (year % 100 == 0) {
                        if (year % 400 == 0) {
                            printf("%d is a leap year\n", year);
                        } else {
                            printf("%d is not a leap year\n", year);
                        }
                    } else {
                        printf("%d is a leap year\n", year);
                    }
                    break;
                default:
                    printf("%d is not a leap year\n", year);   

            }
            return 0;
        }
          break;
// ----------------------------------------------
      case 7:
        {
          if (n == 0) {
              return 1;
          } else {
              return n * factorial(n - 1);
          }
        }

        int main() {
          int num;   

          printf("Enter a number: ");
          scanf("%d", &num);
          printf("Factorial of %d = %d\n", num, factorial(num));
          return 0;   

        }
          break;
// ----------------------------------------------
        // ----------------------------------------------
              case 8:
                {
                  if (num <= 1) {
                      return 0;
                  }
                  for (int i = 2; i <= sqrt(num); i++) {
                      if (num % i == 0) {
                          return 0;
                      }
                  }
                  return 1;
                }

                int main() {
                  int num;
                  printf("Enter a number: ");
                  scanf("%d", &num);
                  if (is_prime(num)) {
                      printf("%d is prime\n", num);
                  } else {
                      printf("%d is not prime\n", num);
                  }
                  return 0;   

                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 9:
                {
                    char str[100];
                    printf("Enter a string: ");
                    scanf("%s", str);
                    int length = strlen(str);
                    printf("Length of the string is %d\n", length);
                    return 0;
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 10:
                {
                  char str="aditya" ;
                    int len = strlen(str);
                    for (int i = 0, j = len - 1; i < j; i++, j--) {
                        char temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                    }
                  printf("Reversed string: %s\n", str);
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
        case 11:
          {
              int sum = 0;
              for (int i = 1; i <= 100; i++) {
                  if (i % 3 == 0 || i % 5 == 0) {
                      sum += i;
                  }
              }
              printf("Sum of numbers divisible by 3 or 5: %d\n",sum);
              return 0;
          }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 12:
                {
                    int n, i;
                    printf("Enter the number of elements: ");
                    scanf("%d", &n);
                    int arr[n];
                    printf("Enter the elements: ");
                    for (i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                    }
                    int   
                 largest = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > largest) {
                            largest = arr[i];
                        }
                    }
                    printf("Largest element: %d\n", largest);
                    return 0;
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 13:
                {
                    int n, i;
                    printf("Enter the number of elements: ");
                    scanf("%d", &n);
                    int arr[n];
                    printf("Enter the elements: ");
                    for (i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                    }
                    int   
                 largest = arr[0];
                    for (i = 1; i < n; i++) {
                        if (arr[i] > largest) {
                            largest = arr[i];
                        }
                    }
                    printf("Largest element: %d\n", largest);
                    return 0;
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 14:
                 {
                    int n, i, j;
                    printf("Enter the number of elements: ");
                    scanf("%d", &n);
                    int arr[n];
                    printf("Enter the elements: ");
                    for (i = 0; i < n; i++) {
                        scanf("%d", &arr[i]);
                    }
                    int freq[n];
                    for (i = 0; i < n; i++) {
                        freq[i] = 0;
                    }
                    for (i = 0; i < n; i++) {
                        freq[arr[i]]++;
                    }
                    printf("Frequency of each element:\n");
                    for (i = 0; i < n; i++) {
                        if (freq[i] != 0) {
                            printf("%d occurs %d times\n", i, freq[i]);
                        }
                    }
                    return 0;
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 15:
                {
                    int sum = 0;
                    for (int i = 2; i <= 50; i += 2) {
                        sum += i;
                    }
                    printf("Sum of even numbers: %d\n", sum);
                    return 0;
                }
                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 16:
                #include <stdio.h>

                int main() {
                    int num;
                    printf("Enter a number: ");
                    scanf("%d", &num);
                    for (int i = 1; i <= 10; i++) {
                        printf("%d x %d = %d\n", num, i, num * i);
                    }
                    return 0;
                }

                  break;
        // ----------------------------------------------
        // ----------------------------------------------
              case 18:
                {
                    int num;

                    printf("Enter a number: ");
                    scanf("%d", &num);

                    if (num > 0) {
                        printf("%d is positive\n", num);
                    } else if (num < 0) {
                        printf("%d is negative\n", num);
                    } else {
                        printf("%d is zero\n", num);
                    }

                    return   
                 0;
                }
                  break;
  // ----------------------------------------------
       
              case 19:
                 {
                    int num, factorial = 1;
                    printf("Enter a number: ");
                    scanf("%d", &num);
                    for (int i = 1; i <= num; i++) {
                        factorial *= i;
                    }
                    printf("Factorial  of %d = %d\n", num, factorial);
                    return 0;
                }
                  break;
// ----------------------------------------------
      
              case 20:
                {
                    int num, i = 1;
                    printf("Enter a number: ");
                    scanf("%d", &num);
                    do {
                        printf("%d x %d = %d\n", num, i, num * i);
                        i++;
                    } while (i <= 10);
                    return   
                 0;
                }
                  break;
// ----------------------------------------------
        
 
      default:
          printf("Invalid Input");
          break;
      }
    return 0;
}
