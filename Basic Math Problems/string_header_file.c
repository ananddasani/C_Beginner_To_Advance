// using string header file
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    printf("\nenter the first string: ");
    gets(s1);
    // scanf("%s", s1);
    printf("\nenter the second string: ");
    gets(s2);
    // scanf("%s", s2);

    /* 
                    // STRLEN FUNCTION
    printf("\nlength of first string -> %s = %d", s1, strlen(s1));
    printf("\nlength of second string -> %s = %d", s2, strlen(s2));
*/

    /* 
                    // STRCPY (DEST,SOURCE)
    printf("\ns2 = %s is copied in s1 -> %s", s2, strcpy(s1, s2));
*/

    /* 
            //  STRCAT (S1,S2) CONCATE STRING S2 AT THE END OF S1
    printf("\ns2 = %s is concated at the end of s1 -> %s", s2, strcat(s1, s2));
*/

    /* 
            // STRREV (S1) THE ORIGINAL STRING IS OVERRITTEN
    printf("\nreverse of %s is ", s1);
    puts(strrev(s1));
*/

    /* 
    // STRCMP (S1,S2) "DOESN'T IGNORE CASE" -> IF S1 = S2,RETURN 0  IF S1 > S2,RETURN +ve NUM    IF S1 < S2,REURN -ve NUM
    int ans;
    ans = strcmp(s1, s2);
    printf("%d ", ans);
 */

    /* 
    // STRCMPI (S1,S2) "IGNORING THE CASE" -> IF S1 = S2,RETURN 0  IF S1 > S2,RETURN +ve NUM    IF S1 < S2,REURN -ve NUM
    int ans;
    ans = strcmpi(s1, s2);
    printf("%d ", ans);
 */

    /*     // STRNCMP (S1,S2,N) "ONLY COMPARE FIRST N CHARACTERS" AND RETURN RESULT SAME AS OF STRCMP
    int ans, n;
    printf("\nenter whow many character you want to compare: ");
    scanf("%d", &n);
    ans = strncmp(s1, s2, n);
    printf("%d ", ans);
 */

    /* 
            // STRYPR "CONVERTS THE STRING TO UPPER CASE"
    printf("\nconversion of '%s' in upper case -> ", s1);
    puts(strupr(s1));
 */

    /* 
            // STRLWR "CONVERTS THE STRING TO LOWER CASE"
    printf("\nconversion of '%s' in lower case -> ", s1);
    puts(strlwr(s1));

 */

    // strstr(s1,s2) "returns a pointer to the first occurance of string s2 in s1"
    char ans;
    ans = strstr(s1, s2);
    printf("%c ", ans);

    return 0;
}