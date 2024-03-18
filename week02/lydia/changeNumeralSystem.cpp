/*
  소스파일명 : changeNumeralSystem.cpp
  실습 번호 : 응용 11
  작성일 : 2024. 03. 11
  작성자 : 윤서은
  프로그램 설명 : 입력한 10진 정수를 입력받은 진법으로 출력하는 프로그램
                  (해당 진법이 없을 경우 반복을 종료한다.)
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  int num;
  cout << "10진수 정수를 입력하세요 : ";
  cin >> num;

  cout << "여러 진법으로 출력하기 oct(8), hex(16), dec(10)" << endl;

  do{
    cout << "해당 진법 입력 : ";
    string data;
    cin >> data;

    if(data == "oct" || data == "8"){
      cout << " => 8진수로 변환 : 0" << oct << num << endl;
    }else if(data == "hex" || data == "16"){
      cout << " => 16진수로 변환 : 0x" << hex << num << endl;
    }else if(data == "dec" || data == "10"){
      cout << " => 10진수로 변환 : " << dec << num << endl;
    }else{
      cout << "해당 진법이 없습니다." << endl;
      break;
    }
  }while(true);
  
  return 0;
}
