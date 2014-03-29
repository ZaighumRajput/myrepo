#include <iostream>
#include <string>

aa
class mother {
    
public:
  mother(std::string s) { s = lastName;}
    void getInfo() {
      std::cout << "last Name is :";  
      std::cout << lastName;
  
    }
    
    
private:
    std::string lastName;
    
};

class daughter : public mother{
    

};

int main(int argc, const char * argv[])
{

    // insert code here...
    mother chachi("munir");
    chachi.getInfo();
}
