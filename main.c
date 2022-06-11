/* [���׸� 1] : ���� ����
	����ڿ��� �������� �Է¹ް� ���Ϸκ��� �� ������ �ڷγ� ���̷��� Ȯ���� ���� �ҷ��� ȭ�鿡 ����ϴ� ���α׷�

��ǻ�� ���α׷��� �򰡰��� (���� 25��)
�а�: ��ǻ�Ͱ��к�
�й�: 202202918
�̸�: �����

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "file_print.h"

int main() {
	
	struct elements { // [���׸� 5] : ����ü ���
		char name[100]; // [���׸� 3] : �迭 ���
		int number;
	};

	FILE* fp = NULL;
	fp = fopen("number_of_confirmed_cases_per_country.txt", "r");// [���׸� 7] : ���� �����

	if (fp == NULL) {
		printf("number_of_confirmed_cases_per_country.txt ���� �ҷ����� ����\n");
		exit(1);
	}

	struct elements country;

	char* country_name_in_file; // [���׸� 4] : ������ ���
	country_name_in_file = (char*)malloc(100 * sizeof(char));

	if (country_name_in_file == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}

	int i = 0;

	printf("������(����)�� �Է��Ͻʽÿ�: ");
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