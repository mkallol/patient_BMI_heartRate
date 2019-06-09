#include <iostream>
using namespace std;
#include <string>

class Patient
{
public:
    void setname(string patientName)
    {
        name=patientName;
    }
    string getname()
    {
        return name;
    }
    void setheight(int Height)
    {
        height=Height;
    }
    int getheight()
    {
        return height;
    }
    void setage(int Age)
    {
        age=Age;
    }
    int getage()
    {
        return age;
    }
    void setweight(int Weight)
    {
        weight=Weight;
    }
    int getweight()
    {
        return weight;
    }
    double BMI()
    {
        double a,b;
        a=getheight();
        b=getweight();
        return b/(a*a);
    }
    int maxHeartrate()
    {
        int a=220;
        int b=age;
        return a-b;
    }
    double mintargetheartrange()
    {
        double b,a;
        a=maxHeartrate();
        b=((a/100)*55);
        
        return b;
    }
    double maxtargetheartrange()
    {
        double b,a;
        a=maxHeartrate();
        b=((a/100)*87);
        return b;
    }
   void display()
    {
        cout<<endl<<"Hello "<<getname()<<", thanks for filling this out! Now, we will use this information to calculte your BMI,MAX HeartRate,Min target HeartRate,Max target HeartRate"<<endl;
        cout<<endl<<endl<<"Hmm... looks like, your BMI is "<<BMI()<<" (BMI of 18.5-25 is healthy weight). ";
        cout<<endl<<"Your max heart rate is "<<maxHeartrate()<<" (a good heart rate is 55-87% of your max heart rate!)"<<endl;
        cout<<"min of your target heart rate is "<<mintargetheartrange()<<" and max of your target heart rate is " <<maxtargetheartrange()<<" "<<endl;
        
        
    }
private:
    string name;
int height,weight,age;
};

int main()
{
    int age,height,weight;
    string patientname;
    Patient newPatient;
    cout<<"Welcome to wellcare!! We are here to provide you with best medical insurance and services"<<endl;
    cout<<"Please enter your name::";
    getline(cin,patientname);
    newPatient.setname(patientname);
    cout<<endl<<"please enter your age(Yrs)::";
    cin>>age;
    newPatient.setage(age);
    cout<<endl<<"please enter your height(m)::";
    cin>>height;
    newPatient.setheight(height);
    cout<<endl<<"last one! Please enter you weight(Kg)::";
    cin>>weight;
    cout<<endl;
    newPatient.setweight(weight);
    newPatient.display();
   
   
    
}
