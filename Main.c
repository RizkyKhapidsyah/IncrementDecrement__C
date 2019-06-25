/* Author: Rizky Khapidsyah */

#include "Definisi_Awal.c"
#include "Increment.c"
#include "Decrement.c"
#include "Post_Pre_Increment.c"
#include "Post_Pre_Decrement.c"

int main()
{
	MainIncrement(); pNL;
	MainDecrement(); pNL;
	PostDanPre_Increment(); pNL;
	PostDanPre_Decrement();

	return 0;
}
