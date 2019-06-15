//2019-06-14 부터 제작...
#include <stdio.h>
#include <windows.h>
double R = 0.0820547;
double P, V, n, T;
char find;

void P_calculator() { //미지수 P가 필요할때
	printf("P(기압)을 계산합니다.\n");
	printf("V값을 입력하시오:  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오:  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오:  ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P값은 %lf 입니다.", P);

	return 0;

}

void V_calculator() { //미지수 V가 필요할때
	printf("V(기압)을 계산합니다.\n");
	printf("P값을 입력하시오:  ");
	scanf("%lf", &P);
	printf("\nn값을 입력하시오:  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오:  ");
	scanf("%lf", &T);

	V = (n * R * T) / P;
	printf("\nV값은 %lf 입니다.", V);

	return 0;

}

void n_calculator() { //미지수 n이 필요할때
	printf("n(몰수)값을 계산합니다.\n");
	printf("P값을 입력하시오:  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오:  ");
	scanf("%lf", &V);
	printf("\nT값을 입력하시오:  ");
	scanf("%lf", &T);

	n = P * V / (R * T);
	printf("\nn값은 %lf 입니다.", n);

	return 0;

}

void T_calculator() { //미지수 T가 필요할때
	printf("T(기압)을 계산합니다.\n");
	printf("P값을 입력하시오:  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오:  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오:  ");
	scanf("%lf", &n);
	T = P * V / (n * R);
	printf("\nT값은 %lf 입니다.", T);

	return 0;

}

void R_calculator() { //미지수 R이 필요할때
	printf("r(기체상수)을 계산합니다.\n");
	printf("P값을 입력하시오:  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오:  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오:  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오:  ");
	scanf("%lf", &T);
	R = P * V / (n * T);
	printf("\nR값은 %lf 입니다.", R);
	

	return 0;

}


int main(void)
{
	char A;

start:

	printf("이상기체 상태방정식 계산기\n\n\n");


	printf("기체상수 R은 %lf 으로 계산됩니다.\n", R);
	printf("R값을 수정하시려면R 을 입력해주세요\n\n\n");

	printf("계산이 필요한 수식의 번호를 입력하세요.\n\n\n");
	printf("1\tP값 구하기\n\n");
	printf("2\tV값 구하기\n\n");
	printf("3\tn값 구하기\n\n");
	printf("4\tT값 구하기\n\n");
	printf("5\t기체상수 R 구하기\n\n");
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
		printf("희망하시는 R값을 입력하세요.");
		scanf("%lf", &R);
		goto start;
	}

	else {
		printf("잘못 입력하셧습니다.위 목록중 입력해주세요.\n\n\n");
		goto start;
	}
}

