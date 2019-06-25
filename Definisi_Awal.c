/* Author: Rizky Khapidsyah */

#include <stdio.h>
#include <conio.h>

#define L_Strip "-"
#define null_c ""
#define nl "\n"
#define titleIn "INCREMENT"
#define titleDec "DECREMENT"
#define titlePostPreIn "PERBEDAAN POST & PRE >> INCREMENT"
#define titlePostPreDec "PERBEDAAN POST & PRE >> DECREMENT"
#define pnl printf("\n");
#define pNL puts("\n");

int i;

inline void C_Sprtr(
	char* C1, char* C2, char* C3,
	int K1, int K2, int K3)
{
	for (i = 1; i <= K1; i++)
	{
		printf("%s", C1);
	}
		for (i = 0; i <= K2; i++)
		{
			printf("%s", C2);
		}
			for (i = 0; i <= K3; i++)
			{
				printf("%s", C3);
			}
}

inline void SetTitleIn()
{
	C_Sprtr(L_Strip, nl, null_c, 20, 0, 1);
	C_Sprtr(titleIn, null_c, nl, 1, 1, 0);
	C_Sprtr(L_Strip, null_c, nl, 20, 0, 0);
}

inline void SetTitleDec()
{
	C_Sprtr(L_Strip, nl, null_c, 20, 0, 1);
	C_Sprtr(titleDec, null_c, nl, 1, 1, 0);
	C_Sprtr(L_Strip, nl, null_c, 20, 0, 0);
}

inline void SetTitlePostPreIn()
{
	C_Sprtr(L_Strip, nl, null_c, 36, 0, 1);
	C_Sprtr(titlePostPreIn, null_c, nl, 1, 1, 0);
	C_Sprtr(L_Strip, nl, null_c, 36, 0, 0);
}

inline void SetTitlePostPreDec()
{
	C_Sprtr(L_Strip, nl, null_c, 36, 0, 1);
	C_Sprtr(titlePostPreDec, null_c, nl, 1, 1, 0);
	C_Sprtr(L_Strip, nl, null_c, 36, 0, 0);
}
