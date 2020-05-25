/* Write struct for student
 * 5/24/20
 */

#include <stdio.h>

struct StudentData
{
	int roll; //2 bytes
	char *name; //20 bytes
	char *dept; //10 bytes
	char *address; //50 bytes
};

int main()
{
	struct StudentData student;

	student.roll = 10; //dot notation to modify roll and assign it to 10
	student.name = "John"; //dot notation to access name and assign it
	student.dept = "agriculture";
	student.address = "33609 W. Walnut St.";

	printf("Student roll is: %d\n", student.roll);
	printf("Student name is: %s\n", student.name);
	printf("Department is: %s\n", student.dept);
	printf("Address of student is: %s\n", student.address);

	return 0;
}
