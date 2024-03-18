/*
  소스파일명 : changeNumeralSystemPro.cpp
  실습 번호 : 응용 11 교수님ver
  작성일 : 2024. 03. 11
  프로그램 설명 : 입력한 10진 정수를 입력받은 진법으로 출력하는 프로그램
                  (단, 해당 진법이 없을 경우 반복을 종료한다.)
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
  int val;
  cout << "10진수 정수를 입력하세요 : ";
  cin >> val;
  do{
    cout << "변환할 진법을 입력하세요 : ";
    string data;
    cin >> data;

    if(data == "hex" || data == "16"){
      cout << "16진수로 변환 : 0x" << hex << val << endl;
    }else if(data == "oct" || data == "8"){
      cout << "8진수로 변환 : 0" << oct << val << endl;
    }else if(data == "digit" || data == "10"){
      cout << "10진수로 변환 : " << dec << val << endl;
    }else{
      cout << "해당 진법이 없습니다." << endl;
      break;
    }  
  }while(true);
  
  return 0;
}




