#include<stdio.h> // Include standard input-output header file

void main(void) // Main function
{
	int num = 1234, quot1, quot2, quot3, rem1, rem2, rem3, sum; // Declare and initialize variables

	quot1 = num / 1000; // Get the thousands place digit
	rem1 = num % 1000; // Get the remainder after removing the thousands place digit
	quot2 = rem1 / 100; // Get the hundreds place digit
	rem2 = rem1 % 100; // Get the remainder after removing the hundreds place digit
	quot3 = rem2 / 10; // Get the tens place digit
	rem3 = rem2 % 10; // Get the units place digit

	sum = quot1 + quot2 + quot3 + rem3; // Calculate the sum of all digits

	printf("%d\n", sum); // Print the sum
}