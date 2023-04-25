//CS3307 INDIVIDUAL ASSIGNMENT Mazen Baioumy 250924925
#include <iostream>
#include "country.h"
using namespace std;
		
		//constructor
		country::country() {
			name = "";
			code = "";
			newConfirmedCases = 0;
			newDeaths = 0;
			newRecoveredCases = 0;
			totalConfirmedCases = 0;
			totalDeaths = 0;
			totalRecoveredCases = 0;
			
		}
		
		//Getters and Setters
		
		void country::setName(string newName) {
			country::name = newName;
		}
		
		string country::getName() {
			return country::name;
		}
		
		void country::setCode(string newCode) {
			code = newCode;
		}
		
		string country::getCode() {
			return country::code;
		} 
		
		void country::setNewConfirmedCases(int newNCC) {
			country::newConfirmedCases = newNCC;
		}
		
		int country::getNewConfirmedCases() {
			return country::newConfirmedCases;
		}
		
		void country::setNewDeaths(int newND) {
			country::newDeaths = newND;
		}
		
		int country::getNewDeaths() {
			return country::newDeaths;
		}
		
		void country::setNewRecoveredCases(int newNRC) {
			country::newRecoveredCases = newNRC;
		}
		
		int country::getNewRecoveredCases() {
			return country::newRecoveredCases;
		}
		
		void country::setTotalConfirmedCases(int newTCC) {
			country::totalConfirmedCases = newTCC;
		}
		
		int country::getTotalConfirmedCases() {
			return totalConfirmedCases;
		}
		
		void country::setTotalDeaths(int newTD) {
			country::totalDeaths = newTD;
		}
		
		int country::getTotalDeaths() {
			return country::totalDeaths;
		}
		
		void country::setTotalRecoveredCases(int newTRC) {
			country::totalRecoveredCases = newTRC;
		}
		
		int country::getTotalRecoveredCases() {
			return country::totalRecoveredCases;
		}
		
		//Destructor
		country::~country() { }
			
			
		


