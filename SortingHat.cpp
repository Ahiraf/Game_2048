#include<bits/stdc++.h>
using namespace std;
void invalid(char ch){
    while(true) {
        if(ch>='a' && ch<='d') {
            break;
        } else {
            cout << "Invalid input. Please select a valid option.\n";
            cin>>ch;
            invalid(ch);
        }
    }
}
void gryffindor(){
     cout<<"Congratulations ! Welcome to GRYFFINDOR HOUSE.";
    cout<<" You've been sorted into the House";
    cout<<" of bravery and resourcefulness, Where dwell the brave at heart, Their daring,nerve and chivalry Set Gryffindors apart.\n";
}
void slytherin(){
     cout<<" Congratulations! Welcome to SLYTHERIN HOUSE";
    cout<<" Being sorted in this House means you are one of the elites and will prove it over time.";
    cout<<" Being in this House means you'll become a strategist and will be proficient in whatever field you may choose to your own liking.";
    cout<<" So, Congrats in also ending up in a House that is loyal to its students. It is now up to you on how to use, plan and gain knowledge for whatever you aspire to be in the future.\n";

}
void hufflepuff(){
    cout<<"Congratulations! Welcome to HUFFLEPUFF HOUSE.";
    cout<<" It's emblem is the badger, an animal that is often underestimated, because it lives quietly until attacked,";
    cout<<" but which, when provoked, can fight off animals much larger than itself, including wolves.\n";
}
void ravenclaw(){
 cout<<"Congratulations! Welcome to RAVENCLAW HOUSE.";
    cout<<" Our emblem is the eagle, which soars where others cannot climb.";
    cout<<" Well done on becoming a member of the cleverest, quirkiest and most interesting house at Hogwarts\n";
}

int main(){
    char c;
    int g=0,s=0,h=0,r=0;
  cout<<"Pick one option from the followings to describe yourself:\n";
  cout<<"a)Brave"<<" "<<"b)Determined"<<" "<<"c)Patience"<<" "<<"d)Clever"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')h++;
  else if(c=='c')r++;
  else{
    s++;
  }
  cout<<"What's your favorite color\n";
  cout<<"a)Red"<<" "<<"b)Green"<<" "<<"c)Yellow"<<" "<<"d)Blue"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"Choose a character to spend the day with.\n";
  cout<<"a)Albus Dumbledore"<<" "<<"b)Draco Malfoy"<<" "<<"c)Cedric Diggory"<<" "<<"d)Luna Lovegood"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"If you could own one magical item from the Wizarding World, what would it be?\n";
  cout<<"a)I would own Rowena Ravenclaw's Diadem because it enhances wisdom and intelligence, helping me to learn and understand more.\n";
  cout<<"b)I would own Helga Hufflepuff's Cup because it represents hard work, loyalty, and the ability to help others.\n";
  cout<<"c)I would own Salazar Slytherin's Locket because it symbolizes ambition and the ability to achieve great things.\n";
  cout<<"d)I would own the Sword of Gryffindor because it represents bravery and courage in the face of danger.\n";
  cin>>c;
  invalid(c);
  if(c=='a')r++;
  else if(c=='b')h++;
  else if(c=='c')s++;
  else{
    g++;
  }
  cout<<"What's your favorite animal?\n";
  cout<<"a)Lion"<<" "<<"b)Snake"<<" "<<"c)Badger"<<" "<<"d)Eagle"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"If you had the opportunity to learn any new skill instantly, what would it be?\n";
  cout<<"a)I would instantly learn how to master persuasion or business strategy."<<" "<<"b)I would instantly learn how to become an expert in herbal medicine or baking"<<" "<<"c)I would instantly learn how to master sword fighting or extreme sports."<<" "<<"d)I would instantly learn how to master a new language or advanced mathematics.\n";
  cin>>c;
  invalid(c);
  if(c=='a')s++;
  else if(c=='b')h++;
  else if(c=='c')g++;
  else{
    r++;
  }
  cout<<"How do you react in crisis situation?\n";
  cout<<"a)Fighting bravely"<<" "<<"b)Taking the fair and just approach"<<" "<<"c)Taking calculated approach often looking for ways to turn it into advantage"<<" "<<"d)Analyzing situation with logic before making any decision\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')h++;
  else if(c=='c')s++;
  else{
    r++;
  }
  cout<<"Choose an element.\n";
  cout<<"a)Fire"<<" "<<"b)Water"<<" "<<"c)Earth"<<" "<<"d)Air"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"Pick a random item\n";
  cout<<"a)Golden Snitch"<<" "<<"b)Locket"<<" "<<"c)House Plant"<<" "<<"d)Book"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"How do you enjoy spending your free time?\n";
  cout<<"a)Going to the gym"<<" "<<"b)Playing video games"<<" "<<"c)Hanging with your friends"<<" "<<"d)Reading a book"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"What's your worst trait?\n";
  cout<<"a)Too reckless"<<" "<<"b)Tends to be sneaky"<<" "<<"c)Often a pushover"<<" "<<"d)Overly strict"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"How do motivate yourself to achieve your goals?\n";
  cout<<"a)I motivate myself by setting clear, ambitious goals and reminding myself of the rewards and power that come with achieving them. I also make strategic plans to ensure my success.\n";
  cout<<"b)I motivate myself by focusing on the challenge and excitement of achieving something difficult. The idea of overcoming obstacles and proving my courage keeps me going.\n";
  cout<<"c)I motivate myself by focusing on the learning process and the knowledge I gain along the way. I set intellectual challenges for myself and take pride in solving problems creatively.\n";
  cout<<"d)I motivate myself by staying dedicated and remembering the people who depend on me. The satisfaction of hard work and the support of my friends and family keep me driven.\n";
  cin>>c;
  invalid(c);
  if(c=='a')s++;
  else if(c=='b')g++;
  else if(c=='c')r++;
  else{
    h++;
  }
  cout<<"Tell us your ideal setting.\n";
  cout<<"a)Woods"<<" "<<"b)Dungeon"<<" "<<"c)Kitchen"<<" "<<"d)Library"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  cout<<"Finally, tell us your dream job.\n";
  cout<<"a)Athelete"<<" "<<"b)Politician"<<" "<<"c)Psychologist"<<" "<<"d)Writer"<<"\n";
  cin>>c;
  invalid(c);
  if(c=='a')g++;
  else if(c=='b')s++;
  else if(c=='c')h++;
  else{
    r++;
  }
  if(g>s && g>h && g>r){
     gryffindor();
  }
  else if(s>g && s>h && s>r){
    slytherin();
  }
  else if(h>g && h>s && h>r){
   hufflepuff();
  }
  else if(r>g && r>s && r>h){
    ravenclaw();
  }
  else{
    if(g==s && g==r){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)a desire for adventure and heroism\n";
            cout<<"b)ambition and the desire for success\n";
            cout<<"c) a quest for knowledge and understanding\n";
            cin>>c;
            if(c=='a'){
                    gryffindor();
            }
           else if(c=='b'){
             slytherin();
           }
            else{
                ravenclaw();
            }
        }
    else if(g==s && g==h){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)a desire for adventure and heroism\n";
            cout<<"b)ambition and the desire for success\n";
            cout<<"c)loyalty and a sense fairness that benefit the community as a whole\n";
            cin>>c;
            if(c=='a'){
                    gryffindor();
            }
           else if(c=='b'){
             slytherin();
           }
            else{
                hufflepuff();
            }

     }
    else if(g==r && g==h){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)a desire for adventure and heroism\n";
            cout<<"b)a quest for knowledge and understanding\n";
            cout<<"c)loyalty and a sense fairness that benefit the community as a whole\n";
            cin>>c;
            if(c=='a'){
                    gryffindor();
            }
           else if(c=='b'){
             ravenclaw();
           }
            else{
                hufflepuff();
            }

     }
    else if(r==s && r==h){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)a quest for knowledge and understanding\n";
            cout<<"b)ambition and the desire for success\n";
            cout<<"c)loyalty and a sense fairness that benefit the community as a whole\n";
            cin>>c;
            if(c=='a'){
                    ravenclaw();
            }
           else if(c=='b'){
             slytherin();
           }
            else{
                hufflepuff();
            }
    }
    else if(g==r){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)a desire for adventure and heroism\n";
            cout<<"b) a quest for knowledge and understanding\n";
            cin>>c;
            if(c=='a'){
                    gryffindor();
            }
            else{
                ravenclaw();
            }

        }
   else if(g==s){
                cout<<"While taking decisions what drives you most?\n";
                cout<<"a)a desire for adventure and heroism\n";
                cout<<"b)ambition and the desire for success\n";
                cin>>c;
                if(c=='a'){
                        gryffindor();
                }
                else{
                   slytherin();
                }
        }
    else if(g==h){
                cout<<"While taking decisions what drives you most?\n";
                cout<<"a)a desire for adventure and heroism\n";
                cout<<"b)loyalty and a sense fairness that benefit the community as a whole\n";
                cin>>c;
                if(c=='a'){
                   gryffindor();
                }
                else{
                    hufflepuff();
                }
        }
    else if(s==r){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)ambition and the desire for success\n";
            cout<<"b) a quest for knowledge and understanding\n";
            cin>>c;
            if(c=='a'){
                    slytherin();
            }
            else{
                    ravenclaw();
            }
        }
    else if(s==h){
            cout<<"While taking decisions what drives you most?\n";
            cout<<"a)ambition and the desire for success\n";
            cout<<"b)loyalty and a sense fairness that benefit the community as a whole\n";
            cin>>c;
            if(c=='a'){
                    slytherin();
            }
            else{
                    hufflepuff();

            }
            }
    else if(h==r){
                    cout<<"While taking decisions what drives you most?\n";
            cout<<"a)loyalty and a sense fairness that benefit the community as a whole\n";
            cout<<"b)a quest for knowledge and understanding\n";
            cin>>c;
            if(c=='a'){
                hufflepuff();
            }
            else{
               ravenclaw();
            }

        }
  }
return 0;
}
