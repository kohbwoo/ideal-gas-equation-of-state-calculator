//2019-06-14 ���� ����...
#include <stdio.h>
#include <windows.h>
double R = 0.0820547;
double P, V, n, T;
char find;

void P_calculator() { //������ P�� �ʿ��Ҷ�
	printf("P(���)�� ����մϴ�.\n");
	printf("V���� �Է��Ͻÿ�:  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�:  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�:  ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P���� %lf �Դϴ�.", P);

	return 0;

}

void V_calculator() { //������ V�� �ʿ��Ҷ�
	printf("V(���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�:  ");
	scanf("%lf", &P);
	printf("\nn���� �Է��Ͻÿ�:  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�:  ");
	scanf("%lf", &T);

	V = (n * R * T) / P;
	printf("\nV���� %lf �Դϴ�.", V);

	return 0;

}

void n_calculator() { //������ n�� �ʿ��Ҷ�
	printf("n(����)���� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�:  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�:  ");
	scanf("%lf", &V);
	printf("\nT���� �Է��Ͻÿ�:  ");
	scanf("%lf", &T);

	n = P * V / (R * T);
	printf("\nn���� %lf �Դϴ�.", n);

	return 0;

}

void T_calculator() { //������ T�� �ʿ��Ҷ�
	printf("T(���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�:  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�:  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�:  ");
	scanf("%lf", &n);
	T = P * V / (n * R);
	printf("\nT���� %lf �Դϴ�.", T);

	return 0;

}

void R_calculator() { //������ R�� �ʿ��Ҷ�
	printf("r(��ü���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�:  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�:  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�:  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�:  ");
	scanf("%lf", &T);
	R = P * V / (n * T);
	printf("\nR���� %lf �Դϴ�.", R);
	

	return 0;

}


int main(void)
{
	char A;

start:

	printf("�̻��ü ���¹����� ����\n\n\n");


	printf("��ü��� R�� %lf ���� ���˴ϴ�.\n", R);
	printf("R���� �����Ͻ÷���R �� �Է����ּ���\n\n\n");

	printf("����� �ʿ��� ������ ��ȣ�� �Է��ϼ���.\n\n\n");
	printf("1\tP�� ���ϱ�\n\n");
	printf("2\tV�� ���ϱ�\n\n");
	printf("3\tn�� ���ϱ�\n\n");
	printf("4\tT�� ���ϱ�\n\n");
	printf("5\t��ü��� R ���ϱ�\n\n");
	scanf("%c", &A);
	system("cls");

	scanf("%c", &find);

	if (A == '1') 
		P_calculator();
	else if (A == '2') 
		V_calculator();
	else if (A == '3') 
		n_calculator();
	else if (A == '4') 
		T_calculator();
	else if (A == '5')
		R_calculator();

	else if (A == 'R'||'r') {
		printf("����Ͻô� R���� �Է��ϼ���.");
		scanf("%lf", &R);
		goto start;
	}

	else {
		printf("�߸� �Է��ϼ˽��ϴ�.�� ����� �Է����ּ���.\n\n\n");
		goto start;
	}
}

