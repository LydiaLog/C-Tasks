/*
  소스파일명 : realNum.cpp
  실습 번호 : 응용 13
  작성일 : 2024. 03. 17
  작성자 : 윤서은
  프로그램 설명 : 실수를 입력받고 해당 실수를 정수부분과 소수점 아랫부분으로 분리해서 출력하는 프로그램
                  (static_cast 사용)
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){

double num;
int intPart;
double fractPart;

cout << "실수를 입력하세요 : ";
cin >> num;

intPart = static_cast<int>(num);
fractPart = num - intPart;

cout << "정수 part : " << intPart << endl;
cout << "소수 part : " << fractPart << endl;
return 0;
}