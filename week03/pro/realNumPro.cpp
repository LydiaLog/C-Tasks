/*
  소스파일명 : realNumPro.cpp
  실습 번호 : 응용 13 교수님 ver
  작성일 : 2024. 03. 18
  프로그램 설명 : 실수를 입력받고 해당 실수를 정수부분과 소수점 아랫부분으로 분리해서 출력하는 프로그램
                  (static_cast 사용)
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double num, fPart;
  int iPart;

  cout << "실수를 입력하세요 : ";
  cin >> num;
  cout << endl;

  iPart = static_cast<int>(num);
  fPart = num - iPart;

  cout << "정수 part : " << iPart << endl;
  cout << "소수 part : " << fPart << endl;
  cout << "소수 part : " << fixed << setprecision(2) << fPart << endl; //소수점 반올림 case

  return 0;
}