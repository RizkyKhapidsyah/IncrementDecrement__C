inline int PostDanPre_Decrement()
{
	SetTitlePostPreDec();
	int a = 5;
	printf("Post Decrement \n");
	printf("Isi variabel a: %d \n", a);
	printf("Isi variabel a: %d \n", a--);
	printf("Isi variabel a: %d \n", a);

	printf("\n");

	int b = 5;
	printf("Pre Decrement \n");
	printf("Isi variabel b: %d \n", b);
	printf("Isi variabel b: %d \n", --b);
	printf("Isi variabel b: %d \n", b);

	return 0;
}