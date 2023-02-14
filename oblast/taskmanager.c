#include <stdio.h>
#include <stdlib.h>
#include "processes.h"
void main(void)
{
	int choise;
	//printf("%d", rand());
	int f = 1;
	while (f)
	{
		printf("1. Create process\n2. List of all the process\n3. Stop process\n4. Exit\n");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			printf("Name of the process: ");
			char name[30];
			scanf("%s",&name);
			createnewprocess(name);
			break;
		case 2:
			for(int i=0;i<processescount;i++)
				printf("%s - %d\n",processes[i].name,processes[i].ID);
			break;
		case 3:
			printf("stop the process with ID: ");
			int id;
			scanf("%d",&id);
			stopprocess(id);
			break;
		case 4:
			f = 0;
			break;
		}
	}
}