/* Author: Rizky Khapidsyah */

inline int MainIncrement(void)
{
	int a = 5; 
	int b = 5;
	
	SetTitleIn();
	a++; 
	printf("Isi variabel a: %d \n", a);
	++b;
	printf("Isi variabel b: %d \n\n", b);
	
	printf("(Enter untuk melihat hasil Decrement)...");
	_getch();
	return 0;
}
