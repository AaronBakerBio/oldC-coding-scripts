// R Jesse Chaney
// rchaney@pdx.edu

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <assert.h>
int vstrcasecmp(char * first, char *second);
char vstrtoupper(char upper);
size_t vstrlen(const char *);
char *vstrcpy(char *, const char *);
// You need to place the function protypes/declarations up here.

int 
main(void)
{
    // vstrlen tests
    {
        char str0[5] = "";
        char str1[] = "123456789";
        char str2[50] = "123456";

        assert(vstrlen(str0) == strlen(str0));
        assert(vstrlen(str1) == strlen(str1));
        assert(vstrlen(str2) == strlen(str2));
        assert(vstrlen("abc") == strlen("abc"));
        printf("vstrlen passes all tests\n");
    }

    // vstrcpy tests
    {
        char str0[5] = "";
        char str1[50] = "123456";
        char str2[50] = "123456";

        assert(strcmp(vstrcpy(str1, str0), strcpy(str2, str0)) == 0);
        assert(strcmp(str1, str2) == 0);
    }
    {
        char str0[50] = "";
        char str1[50] = "";
        char str2[50] = "123456";

        assert(strcmp(vstrcpy(str0, str2), strcpy(str1, str2)) == 0);
        assert(strcmp(str0, str1) == 0);
    }
    {
        char str1[] = "123456789";
        char str2[50] = "123456";
        char str3[50] = "123456";

        assert(strcmp(vstrcpy(str2, str1), strcpy(str3, str1)) == 0);
        assert(strcmp(str2, str3) == 0);
    }
    {
        char str1[50] = "";
        char str2[50] = "";

        assert(strcmp(vstrcpy(str1, "abc"), strcpy(str2, "abc")) == 0);
        assert(strcmp(str1, str2) == 0);
    }
    printf("vstrcpy passes all tests\n");

// When you are ready to test your implementation of vstrcat(), uncomment
// the following line to run the tests.
//#define VSTRCAT
#ifdef VSTRCAT
    // vstrcat tests
    {
        char str1[] = "123456789";
        char str2[50] = "123456";
        char str3[50] = "123456";

        assert(strcmp(vstrcat(str2, str1), strcat(str3, str1)) == 0);
        assert(strcmp(str2, str3) == 0);
    }
    {
        char str0[5] = "";
        char str2[50] = "123456";
        char str3[50] = "123456";

        assert(strcmp(vstrcat(str2, str0), strcat(str3, str0)) == 0);
        assert(strcmp(str2, str3) == 0);
    }
    {
        char str2[50] = "123456";
        char str3[50] = "123456";

        assert(strcmp(vstrcat(str2, "a"), strcat(str3, "a")) == 0);
        assert(strcmp(str2, str3) == 0);
    }
    {
        char str2[50] = "123456";
        char str3[50] = "123456";

        assert(strcmp(vstrcat(str2, "123456789"), strcat(str3, "123456789")) == 0);
        assert(strcmp(str2, str3) == 0);
    }
    printf("vstrcat passes all tests\n");
#endif // VSTRCAT

// When you are ready to test your implementation of vstrcmp(), uncomment
// the following line to run the tests.
#define VSTRCMP
#ifdef VSTRCMP
    // vstrcmp tests
    {
        char str1[] = "";
        char str2[] = "";

        assert(vstrcmp(str1, str2) == strcmp(str1, str2));
        assert(vstrcmp(str2, str1) == strcmp(str2, str1));
    }
    {
        char str1[] = "123456";
        char str2[] = "123456";

        assert(vstrcmp(str1, str2) == strcmp(str1, str2));
        assert(vstrcmp(str2, str1) == strcmp(str2, str1));
    }
    {
        char str1[] = "1234";
        char str2[] = "123456";

        assert((vstrcmp(str1, str2)) < 0 && (strcmp(str1, str2) < 0));
        assert((vstrcmp(str2, str1)) > 0 && (strcmp(str2, str1) > 0));
    }
    {
        char str1[] = "";
        char str2[] = "123456";

        assert((vstrcmp(str1, str2)) < 0 && (strcmp(str1, str2) < 0));
        assert((vstrcmp(str2, str1)) > 0 && (strcmp(str2, str1) > 0));
    }
    {
        // In ASCII, uppercase characters are less than the matching
        // lowercase characters.
        char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char str2[] = "abcdefghijklmnopqrstuvwxyz";

        assert((vstrcmp(str1, str2)) < 0 && (strcmp(str1, str2) < 0));
        assert((vstrcmp(str2, str1)) > 0 && (strcmp(str2, str1) > 0));
    }
    {
        // In ASCII, uppercase characters are less than the matching
        // lowercase characters.
        char str1[] = "abcdefghijklmnopqrstuvwxyz";
        char str2[] = "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        assert((vstrcmp(str1, str2)) < 0 && (strcmp(str1, str2) < 0));
        assert((vstrcmp(str2, str1)) > 0 && (strcmp(str2, str1) > 0));
    }
    printf("vstrcmp passes all tests\n");
#endif // VSTRCMP

// When you are ready to test your implementation of vstrcmp(), uncomment
// the following line to run the tests.
#define VSTRCASECMP
#ifdef VSTRCASECMP
    // vstrcasecmp tests
    {
        char str1[] = "";
        char str2[] = "";

        assert(vstrcasecmp(str1, str2) == strcasecmp(str1, str2));
        assert(vstrcasecmp(str2, str1) == strcasecmp(str2, str1));
    }
    {
        char str1[] = "123456";
        char str2[] = "123456";

        assert(vstrcasecmp(str1, str2) == strcasecmp(str1, str2));
        assert(vstrcasecmp(str2, str1) == strcasecmp(str2, str1));
    }
    {
        char str1[] = "1234";
        char str2[] = "123456";

        assert((vstrcasecmp(str1, str2)) < 0 && (strcasecmp(str1, str2) < 0));
        assert((vstrcasecmp(str2, str1)) > 0 && (strcasecmp(str2, str1) > 0));
    }
    {
        char str1[] = "";
        char str2[] = "123456";

        assert((vstrcasecmp(str1, str2)) < 0 && (strcasecmp(str1, str2) < 0));
        assert((vstrcasecmp(str2, str1)) > 0 && (strcasecmp(str2, str1) > 0));
    }
    {
        // In ASCII, uppercase characters are less than the matching
        // lowercase characters.
        char str1[] = "ABC";
        char str2[] = "abc";

        assert(vstrcasecmp(str1, str2) == 0);
        assert(vstrcasecmp(str2, str1) == 0);
    }
    {
        // In ASCII, uppercase characters are less than the matching
        // lowercase characters.
        char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ=+!@#";
        char str2[] = "abcdefghijklmnopqrstuvwxyz=+!@#";

        assert(vstrcasecmp(str1, str2) == 0);
        assert(vstrcasecmp(str2, str1) == 0);
    }
    {
        // In ASCII, uppercase characters are less than the matching
        // lowercase characters.
        char str1[] = "abcdefghijklmnopqrstuvwxyz";
        char str2[] = "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        assert((vstrcasecmp(str1, str2)) < 0 && (strcasecmp(str1, str2) < 0));
        assert((vstrcasecmp(str2, str1)) > 0 && (strcasecmp(str2, str1) > 0));
    }
    printf("vstrcasecmp passes all tests\n");
#endif // VSTRCASECMP
    
// When you are ready to test your implementation of vstrdog(), uncomment
// the following line to run the tests.
//#define VSTRDOG
#ifdef VSTRDOG
    // vstrdog
    {
        char str1[] = "abc";
        char str2[50] = "123456";

        assert(strcmp(vstrdog(str2, str1), "abc" "123456") == 0);
        assert(strcmp(str2, "abc" "123456") == 0);
    }
    {
        //char str1[] = "abc";
        char str2[50] = "123456";

        assert(strcmp(vstrdog(str2, "abc"), "abc" "123456") == 0);
        assert(strcmp(str2, "abc" "123456") == 0);
    }
    {
        char str1[] = "abcdefghijk";
        char str2[50] = "123";

        assert(strcmp(vstrdog(str2, str1), "abcdefghijk" "123") == 0);
        assert(strcmp(str2, "abcdefghijk" "123") == 0);
    }
    {
        //char str1[] = "abcdefghijk";
        char str2[50] = "123";

        assert(strcmp(vstrdog(str2, "abcdefghijk"), "abcdefghijk" "123") == 0);
        assert(strcmp(str2, "abcdefghijk" "123") == 0);
    }
    {
        char str1[] = "";
        char str2[50] = "123456";

        assert(strcmp(vstrdog(str2, str1), "" "123456") == 0);
        assert(strcmp(str2, "" "123456") == 0);
    }
    {
        //char str1[] = "";
        char str2[50] = "123456";

        assert(strcmp(vstrdog(str2, ""), "" "123456") == 0);
        assert(strcmp(str2, "" "123456") == 0);
    }
    {
        char str1[] = "123456";
        char str2[50] = "";

        assert(strcmp(vstrdog(str2, str1), "123456" "") == 0);
        assert(strcmp(str2, "123456" "") == 0);
    }
    {
        //char str1[] = "123456";
        char str2[50] = "";

        assert(strcmp(vstrdog(str2, "123456"), "123456" "") == 0);
        assert(strcmp(str2, "123456" "") == 0);
    }
    printf("vstrdog passes all tests\n");
#endif // VSTRDOG
    
    return(EXIT_SUCCESS);
}

/*#define ARRAY

size_t 
vstrlen(const char *s)
{
    size_t len = 0;

#ifdef ARRAY
    while (s[len] != '\0') {
        len++;
   }
#else // ARRAY
    while (*s != '\0') {
        len++;
        s++;
    }
#endif // ARRAY

    return len;
}

char *
vstrcpy(char *dest, const char *src)
{
#ifdef ARRAY
    int idx = 0;

    while(src[idx] != '\0') {
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
#else // ARRAY
    char *ptr = dest;

    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';
#endif // ARRAY

    return dest;
}*/
