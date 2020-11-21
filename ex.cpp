#include <iostream>

class Person {

  int id;
  int age;
  char* name;

};


class Ticket {
  static int* feeTable; // 노선은 하나만 만들기
  int id;
  int trainId;
  int clientId;
};

class Train {
  int id;
  int grade;
  int departure; // Date 포맷 찾아보기
  int arrival;
  int** seats; // 1a, 1b, 1c, 1d, 2a, ...
};




int main() {
  char *str = "가나다";
  std::cout << "==================================================" << std::endl; //50개
  std::cout << str ;

  // 한글과 영어 구분하는 코드
  // String 관련 클래스 
  

  // 0. 고객 정보
  //  - 고객번호
  //  - 이름
  //  - 나이 (아이/우대권 활용)


  // 1. 표
  //  - 열차 번호
  //    - 출도착 시간
  //    - 열차 등급
  //    - 좌석번호 조회
  //  - 고객번호
   

  // 2. 열차 정보
  //  - 열차 번호
  //  - 열차 등급
  //  - 열차 출발 날짜 / 시간
  //  - 열차 도착 날짜 / 시간
  //  - 좌석 -> 고객번호 할당 
  //     - 좌석 번호 1~20 / a~d

  // 3. 운임표
  //  - 노드별 금액표 넣기

  return 0;
}