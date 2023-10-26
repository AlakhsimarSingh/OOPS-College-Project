#include<iostream>

using namespace std;

class person{//top level of inheritance
    char ID[100];
    char password[100];
    public:
    char name[100];
    char gender;
    person(){//includes basic details of each person
        cout<<"\nEnter the ID : ";
        cin>>ID;
        cout<<"Enter the password : ";
        cin>>password;
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the gender : ";
        cin>>gender;
    }
    ~person(){}
};

class admin: public person{//derived from person, 2nd level of inhritance
    public:
    admin(){}
    ~admin(){}
};

class organizer:public person{//derived from person, 2nd level of inheritance
    public:
    organizer(){}
    ~organizer(){}
};

class contestant:public person{//derived from person, 2nd level of inheritance
    public:
    int age;
    float score;
    int position;
    int prize_money;
    static int total_contestants;
    contestant(){
        cout<<"Enter the age : ";
        cin>>age;
    }
    ~contestant(){}
};

class coding:public contestant{//derived from contestant, sub-derived from person, 3rd level of inheritance
    public:
    int rating;
    int no_of_questions_solved;
    float avg_acceptance_rate;
    int avg_time_complexity;
    int avg_space_complexity;
    coding(){}
    ~coding(){}
};

class chess: public contestant{//derived from contestant, sub-derived from person, 3rd level of inheritance
    public:
    int no_of_games_won_with_white;//parameter to calculate total score
    int no_of_games_won_with_black;//parameter to calculate total score
    int draws;
    chess(){}
    ~chess(){}
};

class debate: public contestant{//derived from contestant, sub-derived from person, 3rd level of inheritance
    public:
    int victories_as_PM;//parameter to calculate total score
    int victories_as_DPM;//parameter to calculate total score
    int victories_as_whip;//parameter to calculate total score
    int victories_as_LO;//parameter to calculate total score
    int victories_as_DLO;//parameter to calculate total score
    int victories_as_O_whip;//parameter to calculate total score
    debate(){}
    ~debate(){}
};

int main(){
    
    return 0;
}