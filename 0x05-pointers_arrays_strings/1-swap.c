/**
 * swap_int - Swaps the value of two int variables
 * @a: int variable to be swapped
 * @b: int variable to be swapped
 *
 * return: zero
 */

void swap_int(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = *temp;
}
