#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(void) {
setlocale(LC_CTYPE,"UA");
char string;
printf("Çàäàéòå ðÿäîê:  \n");
scanf("%s",&string);
    if(string == 'a' || string =='b' || string =='c' || string =='d' || string =='e' || string =='f' || string =='g' || string =='h' || string =='i' || string =='j' || string =='k' || string =='l' || string =='m' || string =='n' || string =='o' || string =='p' || string =='q' || string =='r' || string =='s' || string =='t' || string =='u' || string =='v' || string =='x' || string =='w' || string =='z'){printf("Âè çàäàëè ñèìâîëè Ëàòèíñüêîãî àëôàâiòó\n"); return 0;} //Óìîâà íà ³çîëÿö³þ Ëàòèíñüêî¿ ìîâè, ÿêùî çì³ííà sym äîð³âíþº õî÷à á îäíîìó ç çàäàíèõ ñèìâîë³â, òî ïðîöåñ ïîâåðòàºòüñÿ íàçàä 
		else(string>0);{printf("Âè çàäàëè öèôðó...\n"); return 0;}
     printf("Âàø ðÿäîê: %s \n",&string);
return 0;
}
