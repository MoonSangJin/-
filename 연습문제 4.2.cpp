#include <iostream>
using namespace std;

class SoccerTeam{
	int PlayerNo[11];
	bool bPossess;
	int Score;
	

	
	
	public :
		void KickBall(){}
		void Pass(){}
		
		void KickOff(){ bPossess = true;}
		void Shoot(){}
		void init(){
			Score=0;
		} 
		
	private :
		char TeamName[20];	
	
};

int main(void)
{
	SoccerTeam Red, Blue;
	
	Red.init();
	Blue.init();
	
	Red.KickOff();
	Red.Pass();
	Red.Shoot();
	
	return 0;
}
