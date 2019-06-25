/* Author: Rizky Khapidsyah */

inline int PostDanPre_Increment()
{
	SetTitlePostPreIn();
	int a = 5;
	printf("Post Increment \n");
	printf("Isi variabel a: %d \n", a);
	printf("Isi variabel a: %d \n", a++);
	printf("Isi variabel a: %d \n", a);

	printf("\n");

	int b = 5;
	printf("Pre Increment \n");
	printf("Isi variabel b: %d \n", a);
	printf("Isi variabel b: %d \n", ++a);
	printf("Isi variabel b: %d \n\n", a);

	printf("(Enter untuk melihat perbedaan Post Decrement dan Pre Decrement)...");
	_getch();
	return 0;
}
