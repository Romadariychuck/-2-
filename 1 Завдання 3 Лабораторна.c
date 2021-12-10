#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main(void){
setlocale(LC_CTYPE,"ua");
    int i,as=0,ao=0,ae=0,au=0,ai=0,ay=0;
    char s[20];
FILE * a;
a = fopen("a.txt", "r");
if(a == NULL){ printf("Файл не вiдкрито\n"); return 0;}
fgets(s,20,a);
printf("%s\n",s);
for(i = 0; s[i] != '\0'; i++)
{
if(("%c\n",s[i]) == 'а'){
as++;
		}
if(("%c\n",s[i]) == 'о'){
ao++;
			}
if(("%c\n",s[i]) == 'е'){
ae++;
			}
if(("%c\n",s[i]) == 'и'){
au++;
			}
if(("%c\n",s[i]) == 'і'){
ai++;
			}
if(("%c\n",s[i]) == 'у'){
ay++;
}
}
 printf("а зустрiчається %d разiв\n", as);
 printf("о зустрiчається %d разiв\n", ao);
 printf("е зустрiчається %d разiв\n", ae);
 printf("и зустрiчається %d разiв\n", au);
 printf("i зустрiчається %d разiв\n", ai);
 printf("у зустрiчається %d разiв\n", ay);
    fclose(a);
}
