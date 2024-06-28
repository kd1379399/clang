#include<stdio.h>
#include<string.h>
#define SIZE 5
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[SIZE] = { {"mizusiro hakuto",2000,1,15,"A"},
								  {"saima nanami",2000,2,2,"B"},
								  {"nagi makoto",2000,1,1,"O"},
								  {"ayasima kotori",2000,1,2,"AB"},
								  {"tokitani syouri",2000,1,31,"O"} };
	struct profile* p;
	int i;

	for (p = data, i = 0; i < SIZE; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d”N%dŒŽ%d“ú--ŒŒ‰tŒ^--%sŒ^\n",
				p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
	
}