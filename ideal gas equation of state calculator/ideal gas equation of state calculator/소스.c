//2019-06-14 부터 제작...
#include <stdio.h>
#include <windows.h>
double R = 0.082; //기체상수 전역변수
double P, V, n, T; //기압 부피 몰수 온도
void P_calculator(); //기압 계산기
void V_calculator(); //부피 계산기
void n_calculator(); //분자 수 계산기
void R_calculator(); //기체상수 계산기
void T_calculator(); //온도 계산기
char find;				//희망하는 계산 선택
char setting;

int main(void)
{
	char A; //계산 할 내용 지정하기
start:

	printf("이상기체 상태방정식 계산기\n\n\n");
	printf("기체상수 R은 %lf 으로 계산됩니다.\n", R);
	printf("단위는 atm(기압), L(부피), mol(분자 수), K(온도)를 사용합니다.\n");
	printf("입, 출력 할 단위나 기체상수를 변경하시려면 계산기 설정에서 변경해주세요. \n\n\n");
	printf("계산이 필요한 수식의 번호를 입력하세요.\n\n\n");
	printf("번호\t방정식\n\n");
	printf("1\tP값 구하기\n\n");
	printf("2\tV값 구하기\n\n");
	printf("3\tn값 구하기\n\n");
	printf("4\tT값 구하기\n\n");
	printf("5\t기체상수 R 구하기\n\n");
	printf("6\t계산기 설정\n\n");
	scanf("%c", &A);
	system("cls"); //화면 정리

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
		printf("다음중 수정하실 항목의 번호를 입력해주세요.\n\n\n");
		printf("순번\t변수 혹은 단위\t 현재 값\n");
		printf("1\t기체상수R\t%lf\n\n", R);
		scanf("%c", &setting);
		if (setting = 1) {
			printf("희망하는 R(기체상수) 값을 입력하세요");
			scanf("%lf", &R);
			goto start;
		}
		else {
			printf("잘못 된 접근입니다. 다음중 선택하세요.\n\n");
			goto setting;
		}
		
		
	}
	else {

		printf("잘못된 입력입니다. 아래 항목중 선택하세요.\n");
		goto start;
	}
}

void P_calculator() { //미지수 P가 필요할때
	printf("P(기압)을 계산합니다.\n");
	printf("V값을 입력하시오(단위 L):  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오(단위 mol):  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오(단위 K): ");
	scanf("%lf", &T);

	P = (n * R * T) / V;
	printf("P값은 %lfatm 입니다.", P);

	return 0;

}
void V_calculator() { //미지수 V가 필요할때
	printf("V(기압)을 계산합니다.\n");
	printf("P값을 입력하시오(단위 atm):  ");
	scanf("%lf", &P);
	printf("\nn값을 입력하시오(단위 mol):  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오(단위 K):  ");
	scanf("%lf", &T);

	V = (n * R * T) / P;
	printf("\nV값은 %lfL 입니다.", V);

	return 0;

}
void n_calculator() { //미지수 n이 필요할때
	printf("n(몰수)값을 계산합니다.\n");
	printf("P값을 입력하시오(단위 atm):  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오(단위 L):  ");
	scanf("%lf", &V);
	printf("\nT값을 입력하시오(단위 K):  ");
	scanf("%lf", &T);

	n = P * V / (R * T);
	printf("\nn값은 %lfmol 입니다.", n);

	return 0;

}
void T_calculator() { //미지수 T가 필요할때
	printf("T(기압)을 계산합니다.\n");
	printf("P값을 입력하시오(단위 atm):  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오(단위 L):  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오(단위 mol):  ");
	scanf("%lf", &n);
	T = P * V / (n * R);
	printf("\nT값은 %lfK 입니다.", T);

	return 0;

}
void R_calculator() { //미지수 R이 필요할때
	printf("r(기체상수)을 계산합니다.\n");
	printf("P값을 입력하시오(단위 atm):  ");
	scanf("%lf", &P);
	printf("\nV값을 입력하시오(단위 L):  ");
	scanf("%lf", &V);
	printf("\nn값을 입력하시오(단위 mol):  ");
	scanf("%lf", &n);
	printf("\nT값을 입력하시오(단위 K):  ");
	scanf("%lf", &T);
	R = P * V / (n * T);
	printf("\nR값은 %lf 입니다.", R);


	return 0;

}