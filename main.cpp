
#include <iostream>

class Coffee {
  private:
  int shot;
  int caffine;
  bool isMilk;
  bool isHot;
  bool isTakeout;

  public:

  Coffee(){
    shot = 1;
    caffine = 200;
    isMilk = false;
    isHot = false;
    isTakeout = true;
  }
    Coffee(int _shot){
    setShot(_shot);
    isMilk = false;
    isHot = false;
    isTakeout = true;
  }


  int getShot(){
    return shot;
  }
  int getCaffine(){
    return caffine;
  }
  bool getIsHot(){
    return isMilk;
  }
  bool getIsMilk(){
    return isHot;
  }
  bool getIsTakeout(){
    return isTakeout;
  }

  void setShot(int _shot){
    shot = _shot;
    caffine = shot * 200;
  }
  // void setCaffine(int _caffine){
  //   caffine = _caffine;
  // }
  void setIsHot(bool _isHot){
    isHot = _isHot;
  }
  void setIsMilk(bool _isMilk){
    isMilk = _isMilk;
  }
  void setIsTakeout(bool _isTakeout){
    isTakeout = _isTakeout;
  }

};


// Coffee am(){
//   return Coffee();
// }


int main() {

  // int arr[2] = {0,0};
  // int (&tmp)[2] = arr;
  int (&tmp)[2] = {0,0};

  std::cout << "shot : " << tmp[1] << std::endl;

  


  // Coffee americano = am();
  // Coffee americano(2);

  // americano.setShot(3);
  // americano.setIsMilk(false);
  // americano.setIsHot(false);
  // americano.setIsTakeout(true);

  // std::cout << "shot : " << americano.getShot() << std::endl;
  // std::cout << "isHot : " << americano.getIsHot() << std::endl;
  // std::cout << "isMilk : " << americano.getIsMilk() << std::endl;
  // std::cout << "isTakeout : " << americano.getIsTakeout() << std::endl;
  // std::cout << "caffine : " << americano.getCaffine() << std::endl;

  return 0;
}