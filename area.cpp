#include <iostream>

using namespace std;
class Area
{
    private:
    int length,breadht;
    string word,word2;
    public:
    //default constructor
    Area():length(7),breadht(9){}
    
    //overloiding constructor
    Area(int l,int b):length(l),breadht(b){}
    
    //this pointer (overloaidingle aynı)
   
   Area(string word,string word2) 
    {
        this->word=word;
        this->word2=word2;
        
        
    }
    
    void getlengthandbreadht()
    {
        cout<<"enter the lenght :"<<endl;cin>>length;
        cout<<"enter the breadht :"<<endl;cin>>breadht;
    }
    int areacalculation()
    {
        return length*breadht;
    }
    void displayarea()
    {
        cout<<"area is "<<areacalculation();
    }
    void display()
    {
        cout<<word;
        cout<<word2;
    }
};


int main()
{
    Area a1,a2(5,8),a3(7,4),a4;
    Area a5("                                      zeliha ","demir");
    a5.display();
    cout<<endl;
    cout<<"***************** A1 *********************"<<endl;
    a1.displayarea();
    cout<<endl;
    cout<<"***************** A2 ********************"<<endl;
    a2.displayarea();
    cout<<endl;
    cout<<"***************** A3 ********************"<<endl;
    a3.displayarea();
    cout<<endl;
    cout<<"***************** A4 ********************"<<endl;
    a4.getlengthandbreadht();
    cout<<"new area of A4 :"<<endl;
    a4.displayarea();
    

    return 0;
}

