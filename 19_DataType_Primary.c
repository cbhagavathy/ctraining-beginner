#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
    char char_var = 'A';
    short short_var = 4;
    int int_var = 4;
    long long_var = 100000L;
    float float_var = 3.14;
    double double_var = 3.14;
    long double long_double_var = 3.14;

    printf("\n---------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-25s | %-25s\n","DataType", "Value", "Size");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-25c | %-25lu\n","char", char_var, sizeof(char));
    printf("%-20s | %-25hi | %-25lu\n","short", short_var, sizeof(short_var));
    printf("%-20s | %-25i | %-25lu\n","int", int_var, sizeof(int_var));
    printf("%-20s | %-25li | %-25lu\n","long", long_var, sizeof(long_var));
    printf("%-20s | %-25f | %-25lu\n","float", float_var, sizeof(float_var));
    printf("%-20s | %-25lf | %-25lu\n","double", double_var, sizeof(double_var));
    printf("%-20s | %-25Lf | %-25lu\n","long double", long_double_var, sizeof(long_double_var));
    printf("\n----------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-25s | %-25s | %-25s\n","DataType", "Min", "Max", "Unsigned Max");
    printf("----------------------------------------------------------------------------------------------\n");
    printf("%-20s | %-25d | %-25d | %-25lu\n","char", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
    printf("%-20s | %-25d | %-25d | %-25lu\n","short", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("%-20s | %-25d | %-25d | %-25lu\n","int", INT_MIN, INT_MAX, UINT_MAX);
    printf("%-20s | %-25ld | %-25ld | %-25lu\n","long int", LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("%-20s | %-25e | %-25e | %-25s\n","float", FLT_MIN, FLT_MAX, "");
    printf("%-20s | %-25e | %-25e | %-25s\n","double", DBL_MIN, DBL_MAX, "");
    printf("%-20s | %-25Le | %-25Le | %-25s\n","long double", LDBL_MIN, LDBL_MAX, "");

    return 0;
}
