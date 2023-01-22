//============================================================================
// Name        : TP.cpp
// Author      : Name
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string const nomFichier("/home/snir/Documents/GitHub/tp1-name011/question"); //ofstream c'est pour écrire dans un fichier, ifstream permet de le lire
	string reponseR = "";
	do{
		ifstream monFichier(nomFichier.c_str(), ios::app);
		int points=0;
		cout<<"\t"<<"|==========================|"<<"\n"
		<<"\t"<<"|fichier ouvert avec succès|"<<"\n"
		<<"\t"<<"|==========================|"<<"\n"<<endl;
		string message("message");
		monFichier.seekg(0, ios::beg);
		string ligne;
		while(getline(monFichier,ligne)){
			cout<<ligne<<endl;
		}
		string reponse;
		cin >> reponse;
		transform(reponse.begin(), reponse.end(), reponse.begin(), ::tolower);
		if(reponse == "Name"){
			points = points+1;
			cout<<"\n"<<"bonne réponse !"
			<<" tu as "<<points<<"point(s)"<<endl;

		}
		else {
			points = points+0;
			cout<<"mauvaise réponse"<<endl;
		}
		cout<<"vous voulez recommencer ? (o ou n)"<<endl;
		cin>> reponseR;
	}while(reponseR == "o");
	

	return 0;
}
