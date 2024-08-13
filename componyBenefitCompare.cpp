#include <iostream>

using namespace std;
class Company
{
  private:
  string name;
  int num;
  int sem1,sem2,sem3;
  public:
  Company():name("istanbul"),num(001),sem1(100),sem2(100),sem3(100){}
  Company(string n,int reg,int s1,int s2,int s3):name(n),num(reg),sem1(s1),sem2(s2),sem3(s3){}
  
  void companyinfo()
  {
      cout<<"Name :";cin>>name;
      cout<<"Register number :";cin>>num;
      cout<<"Semestre benefit 1 :";cin>>sem1;
      cout<<"Semestre benefit 2 :";cin>>sem2;
      cout<<"Semestre benefit 3 :";cin>>sem3;
  }
  void displayinfo()
  {
      cout<<"Name :"<<name;
      cout<<"Register number :"<<num<<endl;
      cout<<"Semestre benefit 1 :"<<sem1<<endl;
      cout<<"Semestre benefit 2 :"<<sem2<<endl;
      cout<<"Semestre benefit 3 :"<<sem3<<endl;
  }
  int calculate()
  {
      int avg=(sem1+sem2+sem3)/3;
      return avg;
  }
  void compare(int res1,int res2,int res3)
  {
      if(res1>res2)
      {
          cout<<"the benefit of Company 1 is higher than 2 and 3"<<endl;
      }
      else if(res3>res2)
      {
          cout<<"the benefit of Company 3 is higher than 1 and 2"<<endl;
      }
      else
      {
          cout<<"the benefit of Company 2 is higher than 1 and 3"<<endl;
      }
  }
};
int main()
{
    Company c1,c2("elimsan",150825,800.000,500.000,250.000),c3;
    c3.companyinfo();
    cout<<endl;
    cout<<"***************Company 1*****************"<<endl;
    c1.displayinfo();
    cout<<endl;
    cout<<"***************Company 2*****************"<<endl;
    c2.displayinfo();
    cout<<endl;
    cout<<"***************Company 3*****************"<<endl;
    c3.displayinfo();
    cout<<endl;
    int res1=c1.calculate();
    int res2=c2.calculate();
    int res3=c3.calculate();
    c1.compare(res1,res2,res3);
    
    
    
    

    return 0;
}
