#include <stdio.h>
#include <windows.h>
double R = 0.082;
double P, V, n, T;
char find;


void P_calculator() { //������ P�� �ʿ��Ҷ�
	printf("P(���)�� ����մϴ�.");
	printf("V���� �Է��Ͻÿ�:  ");
	scanf("%lf", &V);
	printf("n���� �Է��Ͻÿ�:  ");
	scanf("%lf", &n);
	printf("T���� �Է��Ͻÿ�:  ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P���� %lf �Դϴ�.", P);

	return 0;

}

int main(void)
{
	char RR = 1;

start:

	printf("�̻��ü ���¹����� ����\n\n\n");


	printf("��ü��� R�� 0.082 atm*L/mol*K ���� ���˴ϴ�.\n");
	printf("�̴�� �����Ͻ÷���y �� R���� �����Ͻ÷���n �� �Է����ּ���\n");

	scanf("%c", &RR);

	system("cls");
	if (RR == 'y') {
		printf("P,V,n,R,T�� ���Ϸ��� �������� �Է��Ͻÿ�.\n\n\n");

		scanf("%c", &find);
		
		P_calculator();
		
	}
	else if (RR == 'n') {
		printf("����Ͻô� R���� �Է��ϼ���.");
		scanf("%lf", &R);
	}
	else {
		printf("�߸� �Է��ϼ˽��ϴ�. y�Ǵ� n�� ������ �Է����ּ���.\n\n\n");
		goto start;
	}


}

