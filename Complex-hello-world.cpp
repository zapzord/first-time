#include <iostream>
class Hello{
private:
std::string hi;
std::string w;
public:
void setHi(std::string hel){
hi = hel;
}
void setWo(std::string wold){
w = wold;
}
std::string getHi(){
return hi;
}
std::string getWo(){
return w;
}


};

int main(){
Hello helo;
helo.setHi("Hello");
helo.setWo("world!!");
std::cout <<helo.getHi()<<" "<<helo.getWo()<<std::endl;
return 0;
}
