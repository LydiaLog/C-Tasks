/*
  소스파일명 : rockPaperSissors.cpp
  실습 번호 : 응용 12
  작성일 : 2024. 03. 16
  작성자 : 윤서은
  프로그램 설명 : 가위바위보가 각각 1,2,3의 값을 갖는 열거형 클래스이고 
                  사용자에게 정수를 입력받아 해당 값이 가위바위보 중 어느 것에 해당하는 지 알려주는 프로그램
                  (enum class, static_cast 사용)
*/
#include <iostream>
#include <string>

using namespace std;


int main(){
  enum class rps {rock = 1, paper, sissors};
  int num;

  cout << "     20215196 윤서은" << endl;
  
  do{
    cout << "정수 입력(1, 2, 3이 아닌 수는 프로그램 종료) : ";
    cin >> num;

    rps choice = static_cast<rps>(num);

    if(choice == rps::rock){
      cout << "     Rock" << endl;
    }else if(choice == rps::paper){
      cout << "     Paper" << endl;
    }else if(choice == rps::sissors){
      cout << "     Sissors" << endl;
    }else{
      break;
    }
  }while(true);
  return 0;
}
