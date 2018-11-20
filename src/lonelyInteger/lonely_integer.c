/* Lonely Integer
 * For any given no of integers, find the integer which does not occur twice in
 * the array.
 */
#include <stdint.h>
#include <stdio.h>
uint8_t lonely_integer(uint8_t* int_array, size_t size)
{
  uint8_t lonely_int = int_array[0];
  for (int i = 1; i < size; i++)
    {
      printf ("int[%d] = %d \n", i , int_array[i]);
      lonely_int = lonely_int ^ ((int_array[i]));
    }
  return lonely_int;
}

int main()
{
  uint8_t a[11] = { 1 ,1 ,2 , 2, 3, 3, 4, 4 ,4, 5, 5};
  uint8_t lon_int = lonely_integer(a, 11);
  printf("The lonely integer: %d \n", (lon_int));
  return 0;
}
