/*
  소스파일명 : letterPrint.cpp
  실습 번호 : 응용 14
  작성일 : 2024. 03. 17
  작성자 : 윤서은
  프로그램 설명 : 두 번째 인수와 가장 가까운 거리에 있는 문자를 출력하는 프로그램
                  (initilaizer_list 사용)
*/
#include <iostream>
#include <initializer_list>
#include <cmath>
using namespace std;

char list_exam(initializer_list<char> value, char ch){
  char min = 0;
  char sub = 127;
  char temp;

  for(char elem : value){
    temp = abs(elem - ch);
    
    if(temp < sub){
      sub = temp;
      min = elem;
    }
  }
  return min;
}
int main(){
  cout << "{'d', 'p', 'r', 'w', 'g', 'f'} 문자 중 h와 가까운 문자는 : " ;
  cout << list_exam({'d', 'p', 'r', 'w', 'g', 'f'}, 'h') << endl;

  cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'} 문자 중 w와 가까운 문자는 : "; 
  cout << list_exam({'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}, 'w') << endl;
  return 0;
}