#include<iostream>
using namespace std;
int main()
{
	int finalResult=0;
	char playAgain;
	int playQuiz(void);
	play:
	finalResult = playQuiz();  // Prototype 
	cout<<"Your Toatal Score is:"<<finalResult<<endl;
	
	if (finalResult>=6)
	{
		cout<<"You are Qulified"<<endl;
		cout<<"Do you want to play again"<<endl;
		cout<<"Yes OR No"<<endl;
		cin>>playAgain;
		if(playAgain=='Yes' || playAgain=='NO')
		{
		goto play;
		}
		else
		{
			cout<<"Thank You To Play The Quiz"<<endl;
		}
	}
	else
	{
		cout<<"You are Not Qulified"<<endl;
		if(playAgain=='Yes' || playAgain=='NO')
		{
		goto play;
		}
		else
		{
			cout<<"Thank You To Play The Quiz"<<endl;
		}
	}
}	

int playQuiz()
{
	char c;
	char option;  // this is a user option
	int score=0;
	cout<<"***************Welcome to Quiz*******************"<<endl;
	cout<<"***********Follow The Instruction****************"<<endl;;
	cout<<"**Instructions:"<<endl;
	cout<<"*You Will Given 1 Marks for Each Right Answer"<<endl;
	cout<<"*There Will Be No Negative Marking"<<endl;
	cout<<"*Press 'S' to Start the Quiz"<<endl;
	cout<<"*Select Correct Optiotn"<<endl;
	cout<<"*If you Score >=6 , Pass"<<endl;
	cout<<" "<<endl;
	cin>>c;
	if(c=='s' || c=='S')
	{
		cout<<"Q1. What is The Capital of India"<<endl;
		cout<<"(A) Delhi"<<"\n"<<"(B) Mumbai"<<"\n"<<"(C) Benglor"<<"\n"<<"(D)KOlkata"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q2. Who is the prime minister of India"<<endl;
		cout<<"(A) Narendra Modi"<<"\n"<<"(B) Aditynath"<<"\n"<<"(C) Kejriwal"<<"\n"<<"(D)Nititn"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q3. What is the national Bird"<<endl;
		cout<<"(A) peacock"<<"\n"<<"(B) Sparrow "<<"\n"<<"(C) Pigeon"<<"\n"<<"(D)Parrot"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q4. What is national animal of India"<<endl;
		cout<<"(A) Tiger"<<"\n"<<"(B) Lion"<<"\n"<<"(C) Dog"<<"\n"<<"(D)Monkey"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q5. Who is the National Flower of India"<<endl;
		cout<<"(A) Lotus"<<"\n"<<"(B) Rose"<<"\n"<<"(C) Lily"<<"\n"<<"(D) SunFlower"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q6. Who is the chif minister of Maharastra"<<endl;
		cout<<"(A) Ekanath Shinde"<<"\n"<<"(B) Devendra Fadnvis"<<"\n"<<"(C) Raghav Shastri"<<"\n"<<"(D) Mohan Shingh"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q7. What is the capital of Maharastra"<<endl;
		cout<<"(A) Mumabai"<<"\n"<<"(B) Pune"<<"\n"<<"(C) Solapur"<<"\n"<<"(D) Kolhapur"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q8. What is the capital of Jharkhand"<<endl;
		cout<<"(A) Ranchi"<<"\n"<<"(B) Ramghar"<<"\n"<<"(C) Plamu"<<"\n"<<"(D) Dhanbad"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q9. Who is the leader of Congress"<<endl;
		cout<<"(A) Rahul Gandhi"<<"\n"<<"(B) Soniya Gandhi"<<"\n"<<"(C) Roshan Kumar"<<"\n"<<"(D) Mahesh Bugade"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}

		cout<<"Q10. Which one of the following state comes in North"<<endl;
		cout<<"(A) Delhi"<<"\n"<<"(B) Benglore"<<"\n"<<"(C) Chennai"<<"\n"<<"(D) Kerla"<<"\n"<<endl;
		cin>>option;
		if (option=='A' || option=='a')
		{
			score=score+1;
		}
		else
		{
			score=score+0;		
		}
    }
	else
	{
		cout<<"You have Enter Wrong char"<<endl;
		cout<<"Please Enter the Correct Char"<<endl;
		playQuiz();
	}

	return score;
}

int paly()
{
	cout<<goto play();
}




