#include <stdio.h>
#include <string.h>


int vstrcmp(char * first, char * second);

int main(){
	printf("%d",vstrcmp("hello","hello "));
return 0;
}


int vstrcmp(char * first, char * second){
	size_t len = 0; // Used to compare indexes of first and second string
	int condition = 0;
	while(first[len] != '\0' && second[len] != '\0'){
		if (first[len] > second[len]){
			condition = 1;
			break;
		}
		else if (first[len] < second[len]){
			condition = -1;
			break;
		}
		++len;
	}
	if (condition == 0){
		if (first[len] == '\0' && second[len] != '\0'){
			condition = -1;
		}
		else if (second[len] == '\0' && first[len] != '\0'){
			condition = 1; 
		}	
	}
	return condition;
};

/*size_t 
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
