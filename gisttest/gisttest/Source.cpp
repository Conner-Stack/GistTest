#include "Header.h"

int main()
{
	//test case question 1
	float question1 = answer1(5.2f, 4, 9);

	//test case question 2
	int *evn = new int[5];
	even(evn, 5);

	
	//test case question 3
	char rev[20] = "wuteven";
	reverse(rev);

	//test case question 4
	Cat cat[26];
	int i = 0;
	int ascii = 63;
	while (i < 26)
	{
		if (i % 2 == 0)
		{
			cat[i] = cat->NameMe((char)ascii + 2);
		}
		else if (i % 2 == 1)
		{
			
		}
	}

	system("pause");
	return 0;
}