#include<iostream>
using namespace std;

void fahsai(string sent,string sent2,string sent3,string sent4){
    cout<<"Fahsai: "<<sent<<sent2<<sent3<<sent4<<endl;
}
void chat(string urname){
    cout<<urname<<": ";
    
}

int main(){
    string name="?????",movie,day,x;
    int gear;
    fahsai("Sawadee ka...Can you tell me your name?","","","");
    chat(name);
    getline(cin,name);
    fahsai("Wow!!! ",name," is a really cool name.","");
    fahsai("I think you are an Engineering student. What is your student ID?","","","");
    chat(name);
    cin>>gear;
    cin.ignore();
    gear=gear/10000000;
    gear=gear-12;
    cout<<"Fahsai: I think you may be GEAR "<<gear<<". I have a free movie ticket for you."<<endl;
    fahsai("Let's go to the cinema together!!!","","","");
    fahsai("What movie do you want to watch?","","","");
    chat(name);
    getline(cin,movie);
    fahsai("So....which day are you free to go with me?","","","");
    chat(name);
    getline(cin,day);
    fahsai(day,"....that is OK!!! I'm looking forward to watching ",movie," with you.");
    chat(name);
    getline(cin,x);
    fahsai("555+ see you ",day,". Bye Bye \\(^ ^)/","");
    return 0;



}
/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/
