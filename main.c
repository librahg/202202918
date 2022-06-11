/* [평가항목 1] : 과제 설명
	사용자에게 국가명을 입력받고 파일로부터 그 국가의 코로나 바이러스 확진자 수를 불러와 화면에 출력하는 프로그램

컴퓨터 프로그래밍 평가과제 (배점 25점)
학과: 컴퓨터공학부
학번: 202202918
이름: 이희건

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file_print.h"

int main() {
	
	struct elements { // [평가항목 5] : 구조체 사용
		char name[100]; // [평가항목 3] : 배열 사용
		int number;
	};

	FILE* fp = NULL;
	fp = fopen("number_of_confirmed_cases_per_country.txt", "r");// [평가항목 7] : 파일 입출력

	if (fp == NULL) {
		printf("number_of_confirmed_cases_per_country.txt 파일 불러오기 실패\n");
		exit(1);
	}

	struct elements country;

	char* country_name_in_file; // [평가항목 4] : 포인터 사용
	country_name_in_file = (char*)malloc(100 * sizeof(char));

	if (country_name_in_file == NULL) {
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	int i = 0;

	printf("국가명(영문)을 입력하십시오: ");
	scanf("%s", country.name);

	while (feof(fp) == 0) {
		fscanf(fp, "%s\t%d", country_name_in_file, &country.number);
		if (strcmp(country_name_in_file, country.name) == 0) {
			file_print(country.name, country.number, i);
			break;
		}
		i++;
	}
	free(country_name_in_file);
	fclose(fp);
	return 0;
}