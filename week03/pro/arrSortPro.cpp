/*
  소스파일명 : arraySort.cpp
  실습 번호 : 응용 15
  작성일 : 2024. 03. 18
  프로그램 설명 : 사용자에게 정수를 입력받아 배열에 저장 후 그 내용을 오름차순 정렬 후 출력하는 프로그램
                  ( sort(array.begin(), array.end()) 사용)
*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main(){
  array<int, 5> arr;

  cout << "정수 입력 : " << endl;
  for(int i = 0; i < arr.size(); i++){
    cin >> arr[i];
    
  }

  cout << "배열에 저장된 내용 : ";
  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " " ;
  }
  cout << endl;

  cout << "배열 오름차순 정렬 : ";
  sort(arr.begin(), arr.end());
  for(auto i : arr){
    cout << i << " ";
  }
  return 0;
}