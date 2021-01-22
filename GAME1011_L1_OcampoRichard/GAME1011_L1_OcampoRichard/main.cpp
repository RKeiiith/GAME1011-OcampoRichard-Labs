/*
* 
* Student: Richard Ocampo (101332726)
* Advanced Programming - Lab 1 Classes and Pointers
* 
*/
#include <iostream>

using namespace std;

//Class Declaration
//A class called Platform is declared
class Platform
{
public:
	string getPlatformName() { return m_platform; }
	string getManufacturerName() { return m_manufacturer; }
	string platformArray[3] = { "Nintendo Switch", "PS5" ,"Xbox Series X" };
	string gamesArray[5] = {"Apex Legends", "Call of Duty Warzone", "Overwatch", "Realm Royale", "Doom Eternal"};

	void setPlatformName(string gPlatformName) { m_platform = gPlatformName; }
	void setManufacturerName(string gManufacturerName) { m_manufacturer = gManufacturerName; }

private:
	string m_platform;
	string m_manufacturer;
};

//Game Class declared
class Game
{
public:
	string getGameName() { return m_gameName; }
	string getPublisher() { return m_publisher; }
	string getDeveloper() { return m_developer;  }
	

	void setGameName(string gName) { m_gameName = gName; }
	void setPublisher(string gPublisher) { m_publisher = gPublisher; }
	void setDeveloper(string gDeveloper) { m_developer = gDeveloper; }
	

private:
	string m_gameName;
	string m_publisher;
	string m_developer;
	string m_achievement;
};

//Achievements Class created
class Achievements
{
public:
	string getTitle() { return m_title; }
	string getDescription() { return m_description; }
	int getScoreValue() { return m_scoreValue; }

	void setTitle(string gTitle) { m_title = gTitle; }
	void setDescription(string gDescription) { m_description = gDescription; }
	void setScoreValue(int gScoreValue) { m_scoreValue = gScoreValue; }

private:
	string m_title;
	string m_description;
	int m_scoreValue;
};

int main()
{
	//Variable Declaration
	//Object Variables
	Platform platformObject;
	Game gameObject;
	Achievements achievementsObject;

	string manufacturerName;
	string achievementName;
	
	int mainMenuChoice = 0;
	int gameMenuChoice = 0;
	int platformMenuChoice = 0;

	bool mainMenuQuit = false;
	bool gameMenuQuit = false;
	bool achieveMenuQuit = false;
	bool platformMenuQuit = false;

	//This object will store what the user entered
	achievementsObject.setTitle(achievementName);

	//MAIN MENU 
	while (!mainMenuQuit == true)
	{

		cout << "-----------------------------------------------------" << endl;
		cout << "GAME1011 - Lab 1 by Richard Ocampo (101332726)" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "------------------------" << endl;
		cout << "MAIN MENU" << endl;
		cout << "------------------------" << endl;
		cout << "1) Create a Platform" << endl;
		cout << "2) Create a Game" << endl;
		cout << "3) Create achievements" << endl;
		cout << "4) Show created game and information (Create a Platform, Game and achievement FIRST)" << endl;
		cout << "5) Exit" << endl;
		cout << "------------------------" << endl;
		cout << "Please specify your choice (Enter 1-5): ";
		cin >> mainMenuChoice;

		//PLATFORM MENU
		if (mainMenuChoice == 1)
		{
			system("CLS"); //Not ideal to use. Used for readability
			while (!platformMenuQuit == true)
			{
				cout << "------------------------" << endl;
				cout << "Select a Platform" << endl;
				cout << "------------------------" << endl;
				cout << "1) Nintendo Switch" << endl;
				cout << "2) PS5" << endl;
				cout << "3) Xbox Series X" << endl;
				cout << "------------------------" << endl;
				cout << "Please specify your choice (Enter 1, 2, or 3): ";

				cin >> platformMenuChoice;
				cout << "CONSOLE SELECTED" << endl;
				platformMenuQuit = true;
			}
	
	
		}

		
		//GAME MENU
		if (mainMenuChoice == 2)
		{
			system("CLS"); //Not ideal to use. Used for readability
			while (!gameMenuQuit == true)
			{

				cout << "GAME MENU" << endl;
				cout << "------------------------" << endl;
				cout << "1) Apex Legends" << endl;
				cout << "2) Call of Duty: Warzone" << endl;
				cout << "3) Overwatch" << endl;
				cout << "4) Realm Royale" << endl;
				cout << "5) Doom Eternal" << endl;
				cout << "------------------------" << endl;
				cout << "Please specify your choice (Enter a number of 1 - 5): ";
				cin >> gameMenuChoice;

				cout << "GAME SELECTED!" << endl;
				gameMenuQuit = true;

			}
		
			
		}

		//ACHIEVEMENTS
		if (mainMenuChoice == 3)
		{
			system("CLS"); //Not ideal to use. Used for readability
			while(!achieveMenuQuit == true)
			{
				cout << "ACHIEVEMENTS" << endl;
				cout << "------------------------" << endl;
				cout << "Enter an Achievement: ";

			
				cin >> achievementName;
				cout << "ACHIEVEMENT CREATED" << endl;
				achieveMenuQuit = true;
				
			}
		}

		//Shows the summary of the game created
		if (mainMenuChoice == 4)
		{
			system("CLS"); //Not ideal to use. Used for readability
			cout << "------------------------" << endl;
			cout << "CREATED GAME" << endl;
			cout << "------------------------" << endl;
			cout << achievementName << " is an achievement belongs to " << platformObject.gamesArray[gameMenuChoice - 1] << " which is played on the " << platformObject.platformArray[platformMenuChoice - 1] << endl;

			platformMenuChoice = 0;
			gameMenuChoice = 0;
			achievementName = "";
			mainMenuChoice = 0;
			
		}

		//EXIT Program
		if (mainMenuChoice == 5)
		{
			mainMenuQuit = true;
			cout << "Exiting Program..." << endl;
		}
		
	}
	

	



	





	
}