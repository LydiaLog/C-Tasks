/*
  소스파일명 : letterPrintPro.cpp
  실습 번호 : 응용 14 교수님 ver
  작성일 : 2024. 03. 18
  프로그램 설명 : 두 번째 인수와 가장 가까운 거리에 있는 문자를 출력하는 프로그램
                  (initilaizer_list 사용)
*/
#include <iostream>
#include <initializer_list>
#define FAR 127 // 아스키코드 값 이용 (가장 먼 글자 기준으로 잡음)

using namespace std;

char list_exam(initializer_list<char> list, char key){
  int dist = FAR;
  char returnValue;

  for(char ch : list){
    int len = abs(key - ch);

    if(dist > len){
      dist = len;
      returnValue = ch; // 가장 가까운 값
    }
  }
  return returnValue;
}
int main (){
  cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' } 문자 중 h와 가까운 문자는 : ";
  cout << list_exam({ 'd', 'p', 'r', 'w', 'g', 'f' }, 'h') << endl;

  cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z' } 문자 중 w와 가까운 문자는 : ";
  cout << list_exam({ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z' }, 'w') << endl;
  return 0;
}