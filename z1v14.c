#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
int Auto,b,a,c;
	setlocale(LC_CTYPE,"ua");
	printf("\n���� �i��������� ������� � ����i�����i nxm.\n������� �������i���� ����� b, � ����� ����� ������� � �������� �������i� ����i�,\n� ���� ����������� ������������ �� �i�i������� �������� �i����i����� �������. \n\n");
 printf("\t    |3||-2||4 ||9|\n");
 printf("\t A =|0||3 ||10||3|\n");
 printf("\t    |5||-4||-6||1|\n\n");
	printf("\n���i���� ������ - 1\n\t");
	scanf("%d",&Auto);
if(Auto>2){printf("�������, �� �� ������� ����� � ��������� �����i�\n");
	return 0;
}
if(Auto==1){
a = (3*(-2)*4*9);
b = (0*3*10*3);
c = (5*(-4)*(-6)*1);
		printf("b = {%d, %d,%d,%d,%d,%d,%d,%d}\n ", b, c, a, b, c, a, c, a);
}
	return 0;
}
