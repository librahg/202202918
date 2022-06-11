// [평가항목 8] : 다중 소스 파일 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "file_print.h"

void file_print(char* country_name, int country_number, int i) { // [평가항목 2] : 함수 사용
	char* array[100] = { // [평가항목 6] : 포인터 활용
		"대한민국",
		"홍콩", 
		"중국", 
		"일본", 
		"인도", 
		"베트남", 
		"미국", 
		"캐나다", 
		"멕시코", 
		"브라질",
		"이탈리아",
		"독일",
		"프랑스",
		"영국",
		"스페인",
		"호주"
	};

	printf("%s(%s)의 총 확진자 수는 %d명입니다.\n", array[i], country_name, country_number);
}