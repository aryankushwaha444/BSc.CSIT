//Converts from Time24 to Time12 using constructor in Time12
//Routine in Destination Object
//Implemented using Conversion Constructor (one argument constructor)

#include <iostream>
#include <string>
using namespace std;

class Time24
{
    private:
        int hours; //0 to 23
        int minutes; //0 to 59
        int seconds; //0 to 59

    public:
        Time24() //no-arg constructor
        {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        Time24(int h, int m, int s) //3-arg constructor
        {
            hours = h;
            minutes = m;
            seconds = s;
        }

        void display() //format 23:15:01
        {
            if(hours < 10)
                cout << '0';
            cout << hours << ':';
            if(minutes < 10)
                cout << '0';
            cout << minutes << ':';
            if(seconds < 10)
                cout << '0';
            cout << seconds;
        }

        int getHrs() { return hours; }
        int getMins() { return minutes; }
        int getSecs() { return seconds; }
};

class Time12
{
    private:
        bool pm; //true = pm, false = am
        int hrs; //1 to 12
        int mins; //0 to 59

    public:
        Time12() //no-arg constructor
        {
             pm = true;
             hrs = 0;
             mins = 0;
        }

        Time12(Time24); //1-arg constructor

        Time12(bool ap, int h, int m) //3-arg constructor
        {
            pm = ap;
            hrs = h;
            mins = m;
        }

        void display()
        {
            cout << hrs << ':';
            if(mins < 10)
                cout << '0'; //extra zero for "01"
            cout << mins << ' ';
            string am_pm = pm ? "p.m." : "a.m.";
            cout << am_pm;
        }
};

Time12::Time12(Time24 t24) //1-arg constructor
{
    //converts time24 to time12
    int hrs24 = t24.getHrs(); //get hours
    //find am/pm
    pm = t24.getHrs() < 12 ? false : true;
    mins = (t24.getSecs() < 30) ? t24.getMins() : t24.getMins()+1; //round secs

    if(mins == 60) //carry mins?
    {
        mins=0;
        ++hrs24;
        if(hrs24 == 12 || hrs24 == 24) //carry hrs?
            pm = (pm==true) ? false : true; //toggle am/pm
    }

    hrs = (hrs24 < 13) ? hrs24 : hrs24-12; //convert hrs
    if(hrs==0) //00 is 12 a.m.
    {
        hrs=12;
        pm=false;
    }
}

int main()
{
    int h, m, s;
    while(1)
    {
        //get 24-hour time from user
        cout << "Enter 24-hour time: \n";
        cout << " Hours (0 to 23): ";
        cin >> h;
        if(h > 23) //quit if hours > 23
            break;
        cout << " Minutes: ";
        cin >> m;
        cout << " Seconds: ";
        cin >> s;

        Time24 t24(h, m, s); //make a Time24
        cout << "You entered: "; //display the Time24
        t24.display();

        Time12 t12 = t24; //convert Time24 to Time12
        cout << "\n12-hour time: "; //display equivalent Time12
        t12.display();
        cout << "\n\n";
    }
    return 0;
}
