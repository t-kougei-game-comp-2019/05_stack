#include <stdio.h>
typedef struct _Stack_Node 
{
	int data;
	struct _Stack_Node* Under;
}Stack_Node;

int main(int argc, char *argv[]) 
{

	char str[7];
	while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
