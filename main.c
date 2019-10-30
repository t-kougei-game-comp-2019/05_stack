#include <stdio.h>
#include <stdlib.h>
typedef struct _Stack_Node
{
	int data;
	struct _Stack_Node *Under;
} Stack_Node;
Stack_Node *PushStack(Stack_Node *Top, Stack_Node *Data)
{
	Data->Under = Top;
	return Data;
}
Stack_Node *PopStack(Stack_Node *Top)
{
	Stack_Node *Data = Top->Under;
	printf("%d\n", Top->data);
	free(Top);
	return Data;
}
void ShowStack(const Stack_Node *Top)
{
	while (1)
	{
		if (Top == NULL)
			break;
		printf("%d", Top->data);
		Top = Top->Under;
		if (Top == NULL)
			break;
		printf(",");
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	Stack_Node *Top = NULL;
	int stackNum = 0;
	char str[7];
	while (fgets(str, sizeof(str), stdin))
	{
		int iData = atoi(str);
		if (iData == 0)
			ShowStack(Top);
		else if (iData == -1)
		{
			Top = PopStack(Top);
			stackNum--;
		}
		else if(stackNum<10)
		{
			Stack_Node *Data;
			Data =
				(Stack_Node *)malloc(sizeof(Stack_Node));
			Data->data = iData;
			Top = PushStack(Top, Data);
			stackNum++;
		}
	}

	return 0;
}
