//noob snake ladder game

#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int snake_99_40(int *score)
{
    if(*score==99){ *score=40;
    return 1;}
    else return 0;
}
int snake_87_22(int *score)
{
    if(*score==87) {*score=22;
    return 1;}
    else return 0;
}
int snake_34_7(int *score)
{
    if(*score==34) {*score=7;
    return 1;}
    else return 0;
}
int ladder_24_94(int *score)
{
    if(*score==24) {*score=94;
    return 1;}
    else return 0;
}
int ladder_58_82(int *score)
{
    if(*score==58) {*score=82;
    return 1;}
    else return 0;
}
void throw_dice(int *score,int *moving)
{
    srand(time(0));
    int move=rand()%6+1;
    *score+=move;
    if(*score<=100){
        *moving=move;
    }
    else{
       *score-=move;
       *moving=move;
    }
}
int main()
{
    cout<<"~~~~~WELCOME TO SNAKE LADDER~~~~~"<<nl<<nl;
    cout<<"     >>BEGIN THE ADVENTURE<<      "<<nl<<nl;
    cout<<"Enter number of players (2/3/4)"<<nl;
    int num;
    cin>>num;
    cout<<"Snake_99_40"<<nl;
    cout<<"Snake_87_22"<<nl;
    cout<<"Snake_34_7"<<nl;
    cout<<"Ladder_24_94"<<nl;
    cout<<"Ladder_58_82"<<nl;
    cout<<nl;

    int player1_score=0,player2_score=0,player3_score=0,player4_score=0;
    int s1,s2,s3,l1,l2;

    while(1){
    cout<<nl<<"Player1 press 1 to throw dice"<<nl;
    int press;
    cin>>press;
    if(press==1){
        int move1;
        throw_dice(&player1_score,&move1);
        if(move1){
            cout<<"Player1 threw "<<move1<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }
        else{
             cout<<"Player1 threw "<<move1<<nl;
             cout<<"Ivalid move"<<nl;
             cout<<"Current position of Player1: "<<player1_score<<nl;
        }
        if(player1_score==100){cout<<nl<<"Player1 is the winner!"<<nl;break;}
        s1=snake_99_40(&player1_score);
        if(s1==1){
            cout<<"Oops! You got swallowed by snake_99_40"<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }else if(!s1)
        { s2=snake_87_22(&player1_score);
        if(s2==1){
            cout<<"Oops! You got swallowed by snake_87_22"<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }}
        else if(!s1&&!s2)
        { s3=snake_34_7(&player1_score);
        if(s3==1){
            cout<<"Oops! You got swallowed by snake_34_7"<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }}
        else if(!s1&&!s2&&!s3)
        { l1=ladder_24_94(&player1_score);
        if(l1==1){
            cout<<"Yaay! You got on ladder_24_94"<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }}
        else if(!s1&&!s2&&!s3&&!l1)
        { l2=ladder_58_82(&player1_score);
        if(l2==1){
            cout<<"Yaay! You got on ladder_58_82"<<nl;
            cout<<"Current position of Player1: "<<player1_score<<nl;
        }}
    }

    if(num==2||num==3||num==4){
    cout<<nl<<"Player2 press 2 to throw dice"<<nl;
    cin>>press;
    if(press==2){
        int move2;
        throw_dice(&player2_score,&move2);
        if(move2){
            cout<<"Player2 threw "<<move2<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }
        else{
             cout<<"Player2 threw "<<move2<<nl;
             cout<<"Ivalid move"<<nl;
             cout<<"Current position of Player2: "<<player2_score<<nl;
        }
        if(player2_score==100){cout<<nl<<"Player2 is the winner!"<<nl;break;}
        s1=snake_99_40(&player2_score);
        if(s1==1){
            cout<<"Oops! You got swallowed by snake_99_40"<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }
        else if(!s1)
        { s2=snake_87_22(&player2_score);
        if(s2==1){
            cout<<"Oops! You got swallowed by snake_87_22"<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }}
        else if(!s1&&!s2)
        { s3=snake_34_7(&player2_score);
        if(s3==1){
            cout<<"Oops! You got swallowed by snake_34_7"<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }}
        else if(!s1&&!s2&&!s3)
        { l1=ladder_24_94(&player2_score);
        if(l1==1){
            cout<<"Yaay! You got on ladder_24_94"<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }}
        else if(!s1&&!s2&&!s3&&!l1)
        { l2=ladder_58_82(&player2_score);
        if(l2==1){
            cout<<"Yaay! You got on ladder_58_82"<<nl;
            cout<<"Current position of Player2: "<<player2_score<<nl;
        }}
    }
    }

    if(num==3||num==4){
    cout<<nl<<"Player3 press 3 to throw dice"<<nl;
    cin>>press;
    if(press==3){
        int move3;
        throw_dice(&player3_score,&move3);
        if(move3){
            cout<<"Player3 threw "<<move3<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }
        else{
             cout<<"Player3 threw "<<move3<<nl;
             cout<<"Ivalid move"<<nl;
             cout<<"Current position of Player3: "<<player3_score<<nl;
        }
        if(player3_score==100){cout<<nl<<"Player3 is the winner!"<<nl;break;}
        s1=snake_99_40(&player3_score);
        if(s1==1){
            cout<<"Oops! You got swallowed by snake_99_40"<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }
        else if(!s1)
        { s2=snake_87_22(&player3_score);
        if(s2==1){
            cout<<"Oops! You got swallowed by snake_87_22"<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }}
        else if(!s1&&!s2)
        { s3=snake_34_7(&player3_score);
        if(s3==1){
            cout<<"Oops! You got swallowed by snake_34_7"<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }}
        else if(!s1&&!s2&&!s3)
        { l1=ladder_24_94(&player3_score);
        if(l1==1){
            cout<<"Yaay! You got on ladder_24_94"<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }}
        else if(!s1&&!s2&&!s3&&!l1)
        { l2=ladder_58_82(&player3_score);
        if(l2==1){
            cout<<"Yaay! You got on ladder_58_82"<<nl;
            cout<<"Current position of Player3: "<<player3_score<<nl;
        }}
    }
    }

    if(num==4){
    cout<<nl<<"Player4 press 4 to throw dice"<<nl;
    cin>>press;
    if(press==4){
        int move4;
        throw_dice(&player4_score,&move4);
        if(move4){
            cout<<"Player4 threw "<<move4<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }
        else{
             cout<<"Player4 threw "<<move4<<nl;
             cout<<"Ivalid move"<<nl;
             cout<<"Current position of Player4: "<<player4_score<<nl;
        }
        if(player4_score==100){cout<<nl<<"Player4 is the winner!"<<nl;break;}
        s1=snake_99_40(&player4_score);
        if(s1==1){
            cout<<"Oops! You got swallowed by snake_99_40"<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }
        else if(!s1)
        { s2=snake_87_22(&player4_score);
        if(s2==1){
            cout<<"Oops! You got swallowed by snake_87_22"<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }}
        else if(!s1&&!s2)
        { s3=snake_34_7(&player4_score);
        if(s3==1){
            cout<<"Oops! You got swallowed by snake_34_7"<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }}
        else if(!s1&&!s2&&!s3)
        { l1=ladder_24_94(&player4_score);
        if(l1==1){
            cout<<"Yaay! You got on ladder_24_94"<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }}
        else if(!s1&&!s2&&!s3&&!l1)
        { l2=ladder_58_82(&player4_score);
        if(l2==1){
            cout<<"Yaay! You got on ladder_58_82"<<nl;
            cout<<"Current position of Player4: "<<player4_score<<nl;
        }}
    }
    }

    }
    cout<<nl<<"~~~THANKS FOR PLAYING~~~"<<nl;
    return 0;
}
