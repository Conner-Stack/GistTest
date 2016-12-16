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
	
	char letter = 'A';
	int i = 0;
	
	while (i < 26)
	{
		if (letter > 97)
		{
			cat[i].NameMe(letter);
			letter += 33;
			i++;
		}
		if (letter < 97)
		{
			cat[i].NameMe(letter);
			letter -= 31;
			i++;
		}
	}

	system("pause");
	return 0;
}