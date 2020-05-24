/* Find area of rectangle in array
 * 5/24/20
 */

#include <stdio.h>

struct Rectangle
{
	int length; //takes 2 bytes of memory
	int width; //takes 2 bytes of memory
}; //don't forget semicolon here before int main

int main(void)
{
	//struct Rectangle r; //declaration only here: r is 4 bytes, 2 length and 2 width
	struct Rectangle r = {10, 5}; //declaration with initialization
	r.length = 15; //to modify array use dot
	r.width = 10;
	printf("The area of the rectangle is %d\n", r.length * r.width);
}
