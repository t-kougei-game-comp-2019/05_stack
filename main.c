#include <stdio.h>
typedef struct _Stack_Node 
{
	int data;
	struct _Stack_Node* Under;
}Stack_Node;
Stack_Node* PushStack(Stack_Node* Top,Stack_Node* Data){
	Data->Under = Top;
	return Data;
}
int main(int argc, char *argv[]) 
{
	char str[7];
	while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
	
	}

    return 0;
}
