#include <iostream>
#include <conio.h>


using namespace std;

char ch;
int score;

int main()
{
    cout<< "Welcome to the Mental Health Test."<<endl;
    getch();
    cout<< "Before getting started, take a deep breath first."<<endl;
    getch();

    cout<< "Now you are good to go!"<<endl;
    getch();
    cout<< "Answer the questions below using the letters Y or N only."<<endl;
    getch();


    cout << "\n#1 Do you have little pleasure or interest in doing things? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score + 1;
    cout << endl;

    cout << "#2 Do you feel hopeless or down? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score +1;
    cout<<endl;

    cout << "#3 Do you feel motivated to do daily activities? Y/N:" << endl;
    cin >> ch;
    if(ch=='N') score = score +1;
    cout<<endl;

    cout << "#4 Do you have trouble sleeping, either sleeping too much or not at all? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score +1;
    cout<<endl;

    cout << "#5 Do you feel like a failure or you have let people down? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score +1;
    cout<<endl;

    cout << "#6 Do you have trouble concentrating? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score +1;
    cout<<endl;

    cout << "#7 Do you have any harmful thoughts towards yourself? Y/N:" << endl;
    cin >> ch;
    if(ch=='Y') score = score +1;
    cout<<endl;

    cout<< "Your total score is\t"<< score << endl;
    if(score>=5) cout<< "It is highly likely you are extremely depressed.\n"<<"We recommend you to tell about how are your feeling to the professional. "<<endl;
    else if(score>=2 && score<=4) cout<<"It is likely you have mild depression\n"<<"Do you need someone to share your thought or to tell about your feeling? If so, I am totally open to hear anything from you :)"<<endl;
    else cout<<"It is highly unlikely you are suffering from depression."<<endl;


    return 0;
}
