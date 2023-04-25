//CS3307 INDIVIDUAL ASSIGNMENT Mazen Baioumy 250924925
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "country.h"
#include <string>
#include <algorithm>



using namespace std;


//SORTER FUNCTION TO SORT COUNTRY VECTOR BY SPECIFIED DATA TYPE IN EITHER ASCENDING OR DESCENDING
vector<country> sorter(vector<country> vecToBeSorted, int sOrder, int dataType) {
	
	vector<country> sortedCVec = vecToBeSorted;
	
	switch (dataType) {
		
		case 0:
			
		
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getNewConfirmedCases() < b.getNewConfirmedCases();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		case 1:
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getNewDeaths() < b.getNewDeaths();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		case 2:
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getNewRecoveredCases() < b.getNewRecoveredCases();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		case 3:
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getTotalConfirmedCases() < b.getTotalConfirmedCases();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		case 4:
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getTotalDeaths() < b.getTotalDeaths();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		case 5:
			sort(sortedCVec.begin(), sortedCVec.end(), [](country a, country b) {return a.getTotalRecoveredCases() < b.getTotalRecoveredCases();});
			if (sOrder == 1) {
				reverse(sortedCVec.begin(), sortedCVec.end());
			}
			sortedCVec.resize(10);
			break;
			
		default:
			cout << "Error: You didn't enter a valid option" << endl;
			break;
			
	}
	
	return sortedCVec;
	}


//GRAPHER FUNCTION TO OUTPUT THE VISUAL
void grapher(vector<country> vecToBeGraphed, int dataType, int order) {
		
		switch (dataType) {
			
			int biggestVal;	//Biggest value to be displayed
			int scaleVal;	//Scales value to print correct number of #
			
			case 0: // New Confirmed Cases
			
				
				//Ascending
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getNewConfirmedCases() / 70;	//70 is max number of #
					
				}
				
				//Descending
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getNewConfirmedCases() / 70;
				}
				
				//To avoid division by 0 error
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				//Loop to print codes and correct number of # for each object's data
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getNewConfirmedCases();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				//Bottom of graph visual
				cout << "------------------------------------------" << endl << "New Confirmed Cases; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break; 
				
				
				//Repeat for each case using getters for respective data types
				
			case 1:	// New Deaths
				
				
				
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getNewDeaths() / 70;
					
				}
				
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getNewDeaths() / 70;
				}
				
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getNewDeaths();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				cout << "------------------------------------------" << endl << "New Deaths; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break;
				
			case 2:	//New Recovered Cases
				
				
				
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getNewRecoveredCases() / 70;
					
				}
				
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getNewRecoveredCases() / 70;
				}
				
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getNewRecoveredCases();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				cout << "------------------------------------------" << endl << "New Recovered Cases; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break;
				
			case 3:	// Total Confirmed Cases
				
				
				
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getTotalConfirmedCases() / 70;
					
				}
				
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getTotalConfirmedCases() / 70;
				}
				
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getTotalConfirmedCases();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				cout << "----------------------------------------------------------------------------" << endl << "Total Confirmed Cases; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break;
				
			case 4:	// Total Deaths
				
				
				
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getTotalDeaths() / 70;
					
				}
				
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getTotalDeaths() / 70;
				}
				
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getTotalDeaths();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				cout << "------------------------------------------" << endl << "Total Deaths; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break;
				
				
			case 5:	// Total Recovered Cases
				
				
				
				if (order == 0) {
					biggestVal = vecToBeGraphed[9].getTotalRecoveredCases() / 70;
					
				}
				
				if (order == 1) {
					biggestVal = vecToBeGraphed[0].getTotalRecoveredCases() / 70;
				}
				
				if (biggestVal == 0) {
						biggestVal = 1;
					}
					
				for (int j = 0; (unsigned)j < vecToBeGraphed.size(); j++) {
					
					cout << vecToBeGraphed[j].getCode() << " | ";
					
					scaleVal = vecToBeGraphed[j].getTotalRecoveredCases();
					scaleVal /= biggestVal;
					
					for (scaleVal; scaleVal > 0; scaleVal--) {
						cout << "#";
					}
					
					cout << endl << "   |" << endl;
					
					
				}
				
				cout << "------------------------------------------" << endl << "Total Recovered Cases; Each # is approx. " << biggestVal << " cases." << endl;
				 
				
				break; 
				
			default:	// If user enters non specified int
				exit (EXIT_FAILURE);
				break;
				
		}
		
}


//MAIN
int main()
{

	
	vector<country> countryVector;	//Vector to store all temp country objects
	string line;
	ifstream file;
	string firstLine;
	
	file.open("summary.csv");
	getline(file, firstLine);	//To get rid of the first line in csv
	while (getline(file, line)) {
		
		stringstream sStream(line);
		vector<string> tempVector;
		string subString;
		
		int j = 0;
		
		
		country cTemp;	//blank country object I insert into my country vector
	
			
		while (getline(sStream, subString, ',')) {	//loop to send each line to s stream
			subString.erase(std::remove(subString.begin(), subString.end(), '"'), subString.end());	//gets rid of qoutations
			
			if (j == 0) {	
				cTemp.setName(subString);
			}
			
			if (j == 1) {
				cTemp.setCode(subString);
			}
			
			if (j == 3) {
				//from string to int
				int y;
				std::istringstream(subString) >> y;
				cTemp.setNewConfirmedCases(y);
			}
			
			if (j == 4) {
				int y;
				std::istringstream(subString) >> y;
				cTemp.setNewDeaths(y);
			}
			
			if (j == 5) {
				int y;
				std::istringstream(subString) >> y;
				cTemp.setNewRecoveredCases(y);
			}
			
			if (j == 8) {
				int y;
				std::istringstream(subString) >> y;
				cTemp.setTotalConfirmedCases(y);
			}
			
			if (j == 9) {
				int y;
				std::istringstream(subString) >> y;
				cTemp.setTotalDeaths(y);
			}
			
			if (j == 10) {
				int y;
				istringstream(subString) >> y;
				cTemp.setTotalRecoveredCases(y);
			}
			
			
			j++;
		}
		
		countryVector.push_back(cTemp);	//loop through this and fill country vector with temp country objects
		
	}
	
	
	//get user input
	cout << "If you would like to sort in ascending order, enter 0, for descending, enter 1" << endl;
	int orderIn;
	cin >> orderIn;
	
	cout << "What data are you looking to display? \n 0 for New Confirmed Cases \n 1 for New Deaths \n 2 for New Recovered Cases \n 3 for Total Confirmed Cases \n 4 for Total Deaths \n 5 for Total Recovered Cases" << endl;
	int dataTypeIn;
	cin >> dataTypeIn;
	
	
	//Use my sort function to return vector ready for graphing
	vector<country> sortedCountryVector = sorter(countryVector, orderIn, dataTypeIn);
	
	//Use my graphing function to display the visuals
	grapher(sortedCountryVector, dataTypeIn, orderIn); 

	return 0; 

}
