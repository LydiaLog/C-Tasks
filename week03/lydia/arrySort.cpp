/*
  소스파일명 : arraySort.cpp
  실습 번호 : 응용 15
  작성일 : 2024. 03. 17
  작성자 : 윤서은
  프로그램 설명 : 사용자에게 정수를 입력받아 배열에 저장 후 그 내용을 오름차순 정렬 후 출력하는 프로그램
                  ( sort(array.begin(), array.end()) 사용)
*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
  array<int, 5> arr;
  int value;

  cout << " 정수 입력 : " << endl;
  for(int i = 0; i < arr.size(); i++){
    cin >> value;
    arr[i] = value;
  }

  cout << "배열에 저장된 내용 : ";
  for(int i = 0; i < arr.size(); i++){
    cout << arr.at(i) << " ";
  }
  cout << endl;

  sort(arr.begin(), arr.end());

  cout << "배열 오름차순 정렬 : ";
  for(auto value : arr){
    cout << value << " ";
  }
  cout << endl;

  return 0;
}