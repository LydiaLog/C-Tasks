/*
  소스파일명 : print.cpp
  실습 번호 : 개념 6
  작성일 : 2024. 03. 11
  작성자 : 윤서은
  프로그램 설명 : 이름을 입력 받아 출력문을 확인하는 프로그램
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
  string name;
  cout << "이름을 입력하세요 : ";
  cin >> name;
  cout << name << " 님 환영합니다 "<<endl;
  return 0;
}