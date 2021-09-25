#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define UNDEF -1

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @return int 
 */
char *sort(char *target)
{
    int length = strlen(target);
    int swapped = 0;
    int temporaryVale = 0;
    do
    {
        swapped = 0;

        for (int i = 0; i < (length - 1); i++)
        {
            if (target[i] > target[i + 1])
            {
                temporaryVale = target[i];
                target[i] = target[i + 1];
                target[i + 1] = temporaryVale;
                swapped = 1;
            }
        }
    } while (swapped != 0);
    return target;
}
int isPermutationOf(const char *s1, const char *s2)
{
    char *ps1; //=malloc(sizeof(s1[0]*strlen(s1)))
    char *ps2;

    if (strlen(s1) == 0 || strlen(s2) == 0)
    {
        return FALSE;
    }
    if (strlen(s1) != strlen(s2))
    {
        return FALSE;
    }

    ps1 = malloc(sizeof(s1[0]) * (strlen(s1) + 1));
    ps2 = malloc(sizeof(s2[0]) * (strlen(s2) + 1));

    if (ps1 == NULL || ps2 == NULL)
    {
        return UNDEF;
    }
    strcpy(ps1, s1);
    strcpy(ps2, s2);

    sort(ps1);
    sort(ps2);

    if (strcmp(ps1, ps2) == 0)
    {
        free(ps1);
        free(ps2);
        return TRUE;
    }
    free(ps1);
    free(ps2);
    return FALSE;
}

void test(int expected, int actual, const char *testName)
{
    if (expected == actual)
    {
        printf("\nPASSED %s ", testName);
    }
    else
    {
        printf("\nFAILED %s FAILED", testName);
        printf("\n   expected: %d actual: %d", expected, actual);
    }
}

int main(int argc, char const *argv[])
{
    test(TRUE, isPermutationOf("a", "a"), "a");
    test(TRUE, isPermutationOf("abc", "abc"), "abc");
    test(TRUE, isPermutationOf("cab", "bac"), "cab=>bac");
    test(FALSE, isPermutationOf("c", "b"), "c=>b");
    test(TRUE, isPermutationOf("abcdefg", "gfedcba"), "abcdefg");
    test(FALSE, isPermutationOf("", "abc"), "1 is empty");
    test(FALSE, isPermutationOf("abc", ""), "2 is empty");
    test(FALSE, isPermutationOf("", ""), "1 and 2 is empty");
    test(FALSE, isPermutationOf("abc", "ab"), "abc>=ab");
    test(TRUE, isPermutationOf("123456789", "987654321"), "123456789");

    return 0;
}
