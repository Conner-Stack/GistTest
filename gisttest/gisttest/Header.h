#pragma once
#include <iostream>
using namespace std;







//Create a function that takes in 3 numbers and returns the sum of those numbers multiplied by 5 (This function should work for both integer and floating point values).

float answer1(float a, float b, float c)
{
	return (a + b + c) / 5;

}
//Write a function that takes two parameters a pointer to an array and the number of elements then populate the array with all even numbers.


void even(int * &ptr, int elements)
{
	ptr = new int[elements];
	int even = 0;
	
	for (int i = 0; i < elements; i++)
	{
		ptr[i] = even + 2;
		//can't get it to work
	}
}

//Create a function that takes in a character array and reverses the string stored inside of it.
void reverse(char arry[])
{
	char tmp[20];
	for (int i = 0; i < 19; i++)
	{
		tmp[i] = arry[strlen(arry) - i];
		
	}
for (int j = 0; j < 19; j++)
		{
			arry[j] = tmp[j + 1];
		}
}
/*Create a Cat class with a private char variable called m_name. Then create a public constructor that has no arguments. You will need one more function of return type void called NameMe, this takes in a character as an argument
and needs to assign this character to the value of m_name. Once you have your class created, Create an array of type Cat of size 26. Then populate the names of these cats each with a different letter of the alphabet starting 
with capital A and every other cats name should be a lowercase letter (A,b,C,d,E,f,G,...). You cannot use a for loop and you cannot print to the console.*/
class Cat
{
private:
	char m_name;
public:
	Cat() {};
	void NameMe(char A)
	{
		m_name = A;
	}
	
	
};

//Create a function that takes in two arguments, One that points to an array of integers and one for the size of the array. This function will return the value in the array that appears the most times

//Create an array of strings then sort each string in alphabetical order.

