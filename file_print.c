// [���׸� 8] : ���� �ҽ� ���� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "file_print.h"

void file_print(char* country_name, int country_number, int i) { // [���׸� 2] : �Լ� ���
	char* array[100] = { // [���׸� 6] : ������ Ȱ��
		"���ѹα�",
		"ȫ��", 
		"�߱�", 
		"�Ϻ�", 
		"�ε�", 
		"��Ʈ��", 
		"�̱�", 
		"ĳ����", 
		"�߽���", 
		"�����",
		"��Ż����",
		"����",
		"������",
		"����",
		"������",
		"ȣ��"
	};

	printf("%s(%s)�� �� Ȯ���� ���� %d���Դϴ�.\n", array[i], country_name, country_number);
}