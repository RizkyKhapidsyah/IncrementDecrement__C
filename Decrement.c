/* Author: Rizky Khapidsyah */

inline int MainDecrement(void)
{
	int a = 5;
	int b = 5;

	SetTitleDec();
	a--;
	printf("Isi variabel a: %d \n", a);
	--b;
	printf("Isi variabel b: %d \n\n", b);

	printf("(Enter untuk melihat perbedaan Post Increment dan Pre Increment)...");
	_getch();
	return 0;
}
