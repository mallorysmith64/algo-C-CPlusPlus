/* Using struct define playing cards
 * 5/25/20
 */

#include <stdio.h>

struct CardData
{
	int face; //face of card from 1 to 13, takes 2 bytes on 32 bit system
	int shape; //club = 0, spade = 1, diamond = 3, heart = 4
	int color; //black = 0 red = 1
};

int main()
{
	struct CardData card;
	card.face = 10;
	card.shape = 3;
	card.color = 1; //could have done struct CardData card = {10,3,1}; instead

	printf("The face value is: %d\n", card.face);
	printf("The shape value is: %d\n", card.shape);
	printf("The color value is: %d\n", card.color);

	struct CardData deck[52] = {1,0,0};
	printf("The first card face value is %d, shape value is %d, and the color is %d\n", deck[0].face, deck[0].shape, deck[0].color);
}
