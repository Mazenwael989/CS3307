//CS3307 INDIVIDUAL ASSIGNMENT Mazen Baioumy 250924925
#ifndef COUNTRY_CLASS_H
#define COUNTRY_CLASS_H

#include <string>
using namespace std;

class country {
	
	//class vars
	private:

		string name; 
		string code;
		int newConfirmedCases;
		int newDeaths;
		int newRecoveredCases;
		int totalConfirmedCases;
		int totalDeaths;
		int totalRecoveredCases;
	
	//class methods
	public: 
	
		country();
		
		void setName(string newName);
		string getName();
		void setCode(string newCode);
		string getCode();
		void setNewConfirmedCases(int newNCC);
		int getNewConfirmedCases();
		void setNewDeaths(int newND);
		int getNewDeaths();
		void setNewRecoveredCases(int newNRC);
		int getNewRecoveredCases();
		void setTotalConfirmedCases(int newTCC);
		int getTotalConfirmedCases();
		void setTotalDeaths(int newTD);
		int getTotalDeaths();
		void setTotalRecoveredCases(int newTRC);
		int getTotalRecoveredCases();
		~country();
	};
	
#endif
	

