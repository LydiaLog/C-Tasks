/*
  소스파일명 : totalAverage.cpp
  실습 번호 : 응용 10
  작성일 : 2024. 03. 11
  작성자 : 윤서은
  프로그램 설명 : 퀴즈, 중간, 기말의 성적을 입력받아 총합과 평균을 계산하는 프로그램
                  (단, 평균은 소수점 둘째자리까지 출력한다.)
*/
#include <iostream>
#include <iomanip>

int main(){
  double quiz, mid, final;
  std::cout << "퀴즈, 중간, 기말 점수를 입력하세요 : ";
  std::cin >> quiz >> mid >> final;
  double total = quiz + mid + final;
  double average = total / 3;
  std::cout << "총합 : " << total << std::endl;
  std::cout << "평균 : " << std::fixed << std::setprecision(2) << average << std::endl;
  
  return 0;

}