/*
  소스파일명 : totalAveragePro.cpp
  실습 번호 : 응용 10 교수님ver
  작성일 : 2024. 03. 11
  프로그램 설명 : 퀴즈, 중간, 기말의 성적을 입력받아 총합과 평균을 계산하는 프로그램
                  (단, 평균은 소수점 둘째자리까지 출력한다.)
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){
  double qz, mid, final;

  cout << "퀴즈, 중간, 기말 점수를 입력하세요 : ";
  cin >> qz >> mid >> final;
  cout << "총합 : " << (qz + mid + final) << endl;
  cout << "평균 : " << fixed << setprecision(2) << (qz + mid + final) / 3 << endl;
  return 0;

}