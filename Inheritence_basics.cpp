/*
    Inheritence:-
      super class/Parent class/Base Class--->sub class/child class/derived class

      Syntax of Inheritence:-
        class child_name : [mode of Inheritence] parent_name{

        };

      Protected : Members declared Protected are accessible within class itself
                  & to its derived class.
      Privtate  : Members declared Private are accessible within class only & not
                  in its derived class.
                  Private data can not be inherited.
      ______________________________________________________
      |Base class |       Mode of Inheritence              |   
      |access mode|   Public   |  Protected  |   Private   |
      ______________________________________________________                                                  
      | Public    |   Public   |  Protected  |   Private   |
      ______________________________________________________
      | Protected | Protected  | Protected   |   Private   |
      ______________________________________________________                                                
      | Private   |   N/A      |    N/A      |    N/A      |
      ______________________________________________________

      Advantages of Inheritence:-

      a) Code Reusibility: When a class inherits from another class, it can access the functionality of the     
                           inherited class, which reduces the amount of code that needs to be written and maintained. This can lead to faster development, fewer errors, and more efficient development.
      b) Reliability     : Because the base class code has already been tested and debugged, reusing it can lead 
                           to more reliable code.
      c) Extensibilty    : Inheritance can support extensibility by making it easier to add new classes to 
                           existing classes.
      d) Code organising : Inheritance can help organize code by grouping related classes together in a 
                           hierarchical structure.
      e) Consistency     : Inheritance ensures that all derived classes that use the same base class have a 
                           standard set of properties and methods.
*/

#include <iostream>
#include<string>
using namespace std;
class Bird{
  //If bird class is private then nothing is accessible but we can abstract it by creating getter functions.
  protected:
  int age,weight;
  int nol;
  string color;

  void eating(){
    cout<<"Bird is eating"<<endl;
  }
  void flying(){
    cout<<"Bird is flying"<<endl;
  }
};

class Sparrow : private Bird{
  public:
    Sparrow(int age,int weight,string color,int nol){
      this->age=age;
      this->weight=weight;
      this->color=color;
      this->nol=nol;
    }
    int getnol(){
      return nol;
    }
    void grassing(){
      cout<<"Bird is grassing"<<endl;
    }
};

class Pigeon : public Bird{
  public:
    void guttering(){
      cout<<"Bird is guttering"<<endl;
    }
};
class Parrot : public Bird{
  public:
    void speaking(){
      cout<<"Bird is speaking"<<endl;
    }
};
int main() {
  
  Sparrow s(1,2,"Brown",4);
  // cout<<s.age<<endl; since bird is protected, we can't access age directly from 
  //                    Sparrow class, but yes, using getter function we can abstract
  //                    age and all the variables defined in the Bird class.

  cout<<s.getnol()<<endl;
  s.grassing();
  return 0;
}