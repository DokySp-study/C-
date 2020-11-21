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






void printHead(std::string input, int width){
  int length = input.length()/3;
	
	for(int i=0; i<width; i++)
		std::cout << "=";
  std::cout << std::endl;
	
	for(int i=0; i<width/2 - length; i++) 
		std::cout << " ";
	std::cout << input << std::endl;
	
return;
}

void printContext(std::string context, int width){
	int length = context.length()/3;
		for(int i=0; i<width/2 - length; i++) 
		std::cout << " ";
	std::cout << context << std::endl;
}



int main() {

	std::string aa;
	
printHead("메뉴 번호를 선택하세요", 40);
	
	printContext("", 40);
	printContext("1. 열차 예매하기", 40); // 고객정보, 표 정보, 열차 정보 신규 입력
	
	// 위에 입력된 정보를 바탕으로 정보를 조회함
	printContext("2. 열차 조회", 40);
	printContext("3. 고객번호로 조회하기", 40);
	printContext("4. 열차표로 조회하기", 40);
	
	printContext("", 40);
	std::cin >> aa;
	
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