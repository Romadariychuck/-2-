#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main(void) {
setlocale(LC_CTYPE,"UA");
char string;
printf("������� �����:  \n");
scanf("%s",&string);
    if(string == 'a' || string =='b' || string =='c' || string =='d' || string =='e' || string =='f' || string =='g' || string =='h' || string =='i' || string =='j' || string =='k' || string =='l' || string =='m' || string =='n' || string =='o' || string =='p' || string =='q' || string =='r' || string =='s' || string =='t' || string =='u' || string =='v' || string =='x' || string =='w' || string =='z'||string>0){printf("�� ������ ������� ����������� �����i�� ��� �����\n"); return 0;} //����� �� �������� ��������� ����, ���� ����� sym ������� ���� � ������ � ������� �������, �� ������ ����������� ����� 
     printf("��� �����: %s \n\n",&string);
		return 0;

return 0;
}
