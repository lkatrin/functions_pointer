/*Написать функцию void char_register(char * ch, int fl),
которая переводит переданный ей символ ch (символ латинского алфавита) в заданный переменной fl регистр: 0 — нижний, 1 — верхний*/

#include <stdio.h>
void char_register(char * ch, int fl)
{
if (fl == 0 && *ch > 64 && *ch < 91)
    *ch += 32;
    
else if (fl == 1 && *ch > 96 && *ch < 123)
    *ch -= 32;
}