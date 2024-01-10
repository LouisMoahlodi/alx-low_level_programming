#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _check_num - Check if the given string is a valid positive number.
 * @str: The string to check.
 *
 * Return: The length of the string if it is a valid positive number.
 */
int _check_num(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        if (!isdigit(str[length])) {
            printf("Error\n");
            exit(98);
        }
        length++;
    }

    return length;
}

/**
 * multiply - Multiply two positive numbers represented as strings.
 * @num1: The first number.
 * @len1: The length of the first number.
 * @num2: The second number.
 * @len2: The length of the second number.
 *
 * Return: A string representing the result of the multiplication.
 */
char *multiply(const char *num1, int len1, const char *num2, int len2) {
    int len_out = len1 + len2;
    char *result = malloc(len_out + 1);

    if (result == NULL) {
        printf("Error\n");
        exit(98);
    }

    memset(result, '0', len_out);
    result[len_out] = '\0';

    for (int i = len1 - 1; i >= 0; i--) {
        int carry = 0;

        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }

        result[i] += carry;
    }

    // Remove leading zeros
    int i = 0;
    while (result[i] == '0') {
        i++;
    }

    if (i == len_out) {
        printf("0\n");
        exit(0);
    }

    return result + i;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }

    int len1 = _check_num(argv[1]);
    int len2 = _check_num(argv[2]);

    if (len1 == 0 || len2 == 0) {
        printf("Error\n");
        exit(98);
    }

    char *result = multiply(argv[1], len1, argv[2], len2);

    printf("%s\n", result);

    free(result);

    return 0;
}

// #include "main.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <ctype.h>

// /**
//  * _is_zero - determines if any number is zero
//  * @argv: argument vector.
//  *
//  * Return: no return.
//  */
// void _is_zero(char *argv[])
// {
// 	int i, isn1 = 1, isn2 = 1;

// 	for (i = 0; argv[1][i]; i++)
// 		if (argv[1][i] != '0')
// 		{
// 			isn1 = 0;
// 			break;
// 		}

// 	for (i = 0; argv[2][i]; i++)
// 		if (argv[2][i] != '0')
// 		{
// 			isn2 = 0;
// 			break;
// 		}

// 	if (isn1 == 1 || isn2 == 1)
// 	{
// 		printf("0\n");
// 		exit(0);
// 	}
// }

// /**
//  * _initialize_array - set memery to zero in a new array
//  * @ar: char array.
//  * @lar: length of the char array.
//  *
//  * Return: pointer of a char array.
//  */
// char *_initialize_array(char *ar, int lar)
// {
// 	int i = 0;

// 	for (i = 0; i < lar; i++)
// 		ar[i] = '0';
// 	ar[lar] = '\0';
// 	return (ar);
// }

// /**
//  * _checknum - determines length of the number
//  * and checks if number is in base 10.
//  * @argv: arguments vector.
//  * @n: row of the array.
//  *
//  * Return: length of the number.
//  */
// int _checknum(char *argv[], int n)
// {
// 	int ln;

// 	for (ln = 0; argv[n][ln]; ln++)
// 		if (!isdigit(argv[n][ln]))
// 		{
// 			printf("Error\n");
// 			exit(98);
// 		}

// 	return (ln);
// }

// /**
//  * main - Entry point.
//  * program that multiplies two positive numbers.
//  * @argc: number of arguments.
//  * @argv: arguments vector.
//  *
//  * Return: 0 - success.
//  */
// int main(int argc, char *argv[])
// {
// 	int ln1, ln2, lnout, add, addl, i, j, k, ca;
// 	char *nout;

// 	if (argc != 3)
// 		printf("Error\n"), exit(98);
// 	ln1 = _checknum(argv, 1), ln2 = _checknum(argv, 2);
// 	_is_zero(argv), lnout = ln1 + ln2, nout = malloc(lnout + 1);
// 	if (nout == NULL)
// 		printf("Error\n"), exit(98);
// 	nout = _initialize_array(nout, lnout);
// 	k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
// 	for (; k >= 0; k--, i--)
// 	{
// 		if (i < 0)
// 		{
// 			if (addl > 0)
// 			{
// 				add = (nout[k] - '0') + addl;
// 				if (add > 9)
// 					nout[k - 1] = (add / 10) + '0';
// 				nout[k] = (add % 10) + '0';
// 			}
// 			i = ln1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
// 		}
// 		if (j < 0)
// 		{
// 			if (nout[0] != '0')
// 				break;
// 			lnout--;
// 			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
// 			k = lnout - 1, i = ln1 - 1, j = ln2 - 1, ca = addl = 0;
// 		}
// 		if (j >= 0)
// 		{
// 			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
// 			addl = add / 10, nout[k] = (add % 10) + '0';
// 		}
// 	}
// 	printf("%s\n", nout);
// 	return (0);
// }
