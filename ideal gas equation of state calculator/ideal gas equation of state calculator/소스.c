//2019-06-14 ���� ����...
#include <stdio.h>
#include <windows.h>
double R = 0.082; //��ü��� ��������
double P, V, n, T; //��� ���� ���� �µ�
void P_calculator(); //��� ����
void V_calculator(); //���� ����
void n_calculator(); //���� �� ����
void R_calculator(); //��ü��� ����
void T_calculator(); //�µ� ����
char find;				//����ϴ� ��� ����
char setting;

int main(void)
{
	char A; //��� �� ���� �����ϱ�
start:

	printf("�̻��ü ���¹����� ����\n\n\n");
	printf("��ü��� R�� %lf ���� ���˴ϴ�.\n", R);
	printf("������ atm(���), L(����), mol(���� ��), K(�µ�)�� ����մϴ�.\n");
	printf("��, ��� �� ������ ��ü����� �����Ͻ÷��� ���� �������� �������ּ���. \n\n\n");
	printf("����� �ʿ��� ������ ��ȣ�� �Է��ϼ���.\n\n\n");
	printf("��ȣ\t������\n\n");
	printf("1\tP�� ���ϱ�\n\n");
	printf("2\tV�� ���ϱ�\n\n");
	printf("3\tn�� ���ϱ�\n\n");
	printf("4\tT�� ���ϱ�\n\n");
	printf("5\t��ü��� R ���ϱ�\n\n");
	printf("6\t���� ����\n\n");
	scanf("%c", &A);
	system("cls"); //ȭ�� ����

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

	else if (A == '6') {
	setting:
		printf("������ �����Ͻ� �׸��� ��ȣ�� �Է����ּ���.\n\n\n");
		printf("����\t���� Ȥ�� ����\t ���� ��\n");
		printf("1\t��ü���R\t%lf\n\n", R);
		scanf("%c", &setting);
		if (setting = 1) {
			printf("����ϴ� R(��ü���) ���� �Է��ϼ���");
			scanf("%lf", &R);
			goto start;
		}
		else {
			printf("�߸� �� �����Դϴ�. ������ �����ϼ���.\n\n");
			goto setting;
		}
		
		
	}
	else {

		printf("�߸��� �Է��Դϴ�. �Ʒ� �׸��� �����ϼ���.\n");
		goto start;
	}
}

void P_calculator() { //������ P�� �ʿ��Ҷ�
	printf("P(���)�� ����մϴ�.\n");
	printf("V���� �Է��Ͻÿ�(���� L):  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�(���� mol):  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�(���� K): ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P���� %lfatm �Դϴ�.", P);

	return 0;

}
void V_calculator() { //������ V�� �ʿ��Ҷ�
	printf("V(���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�(���� atm):  ");
	scanf("%lf", &P);
	printf("\nn���� �Է��Ͻÿ�(���� mol):  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�(���� K):  ");
	scanf("%lf", &T);

	V = (n * R * T) / P;
	printf("\nV���� %lfL �Դϴ�.", V);

	return 0;

}
void n_calculator() { //������ n�� �ʿ��Ҷ�
	printf("n(����)���� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�(���� atm):  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�(���� L):  ");
	scanf("%lf", &V);
	printf("\nT���� �Է��Ͻÿ�(���� K):  ");
	scanf("%lf", &T);

	n = P * V / (R * T);
	printf("\nn���� %lfmol �Դϴ�.", n);

	return 0;

}
void T_calculator() { //������ T�� �ʿ��Ҷ�
	printf("T(���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�(���� atm):  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�(���� L):  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�(���� mol):  ");
	scanf("%lf", &n);
	T = P * V / (n * R);
	printf("\nT���� %lfK �Դϴ�.", T);

	return 0;

}
void R_calculator() { //������ R�� �ʿ��Ҷ�
	printf("r(��ü���)�� ����մϴ�.\n");
	printf("P���� �Է��Ͻÿ�(���� atm):  ");
	scanf("%lf", &P);
	printf("\nV���� �Է��Ͻÿ�(���� L):  ");
	scanf("%lf", &V);
	printf("\nn���� �Է��Ͻÿ�(���� mol):  ");
	scanf("%lf", &n);
	printf("\nT���� �Է��Ͻÿ�(���� K):  ");
	scanf("%lf", &T);
	R = P * V / (n * T);
	printf("\nR���� %lf �Դϴ�.", R);


	return 0;

}