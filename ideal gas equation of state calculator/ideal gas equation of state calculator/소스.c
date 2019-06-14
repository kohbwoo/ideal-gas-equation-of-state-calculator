#include <stdio.h>
#include <windows.h>
double R = 0.082;
double P, V, n, T;
char find;


void P_calculator() { //미지수 P가 필요할때
	printf("P(기압)을 계산합니다.");
	printf("V값을 입력하시오:  ");
	scanf("%lf", &V);
	printf("n값을 입력하시오:  ");
	scanf("%lf", &n);
	printf("T값을 입력하시오:  ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P값은 %lf 입니다.", P);

	return 0;

}

int main(void)
{
	char RR = 1;

start:

	printf("이상기체 상태방정식 계산기\n\n\n");


	printf("기체상수 R은 0.082 atm*L/mol*K 으로 계산됩니다.\n");
	printf("이대로 진행하시려면y 를 R값을 수정하시려면n 을 입력해주세요\n");

	scanf("%c", &RR);

	system("cls");
	if (RR == 'y') {
		printf("P,V,n,R,T중 구하려는 미지수를 입력하시오.\n\n\n");

		scanf("%c", &find);
		
		P_calculator();
		
	}
	else if (RR == 'n') {
		printf("희망하시는 R값을 입력하세요.");
		scanf("%lf", &R);
	}
	else {
		printf("잘못 입력하셧습니다. y또는 n중 선택해 입력해주세요.\n\n\n");
		goto start;
	}


}

