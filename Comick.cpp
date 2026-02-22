/***************************************
Comic Book Collection
Author: [Rafael popma]
Date Completed: [2/4/2026]
Description: [this program is used to input the user data for 3 of their comics books]
***************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//seting up the variables
int main(){
//Comic 1 variables
string Comictitle1;
string Authorname1;
int Issue1 =0;
int YearPublished1 =0;
int ComicRating1 =0;

//comic 2 variables
string Comictitle2;
string Authorname2;
int Issue2 =0;
int YearPublished2 =0;
int ComicRating2 =0;

//comic 3 variables
string Comictitle3;
string Authorname3;
int Issue3 =0;
int YearPublished3 =0;
int ComicRating3 =0;

//comic book 1 name information
cout<<"Comic Book 1:\n";
cout<<"Full Comic Book Title: ";
getline(cin , Comictitle1);

//getting when the comic was issued
cout<<"Issue Number: ";
cin >> Issue1;
cin.ignore();

//finding out the year
cout<<"Year Published: ";
cin >> YearPublished1;
cin.ignore();

//using getline to get the author full name
cout<<"Full Author Name: ";
getline(cin , Authorname1);

//knowing the rating
cout<<"Comic Ranking: ";
cin >>ComicRating1;
cin.ignore();
cout << "\n";

//comic book 2 name information
cout<<"Comic Book 2:\n";
cout<<"Full Comic Book Title: ";
getline(cin , Comictitle2);

//getting when the comic was issued
cout<<"Issue Number: ";
cin >> Issue2;
cin.ignore();

//finding out the year
cout<<"Year Published: ";
cin >> YearPublished2;
cin.ignore();

//using getline to get the author full name
cout<<"Full Author Name: ";
getline(cin , Authorname2);

//knowing the rating
cout<<"Comic Ranking: ";
cin >>ComicRating2;
cin.ignore();
cout << "\n";

//comic book 3 name information
cout<<"Comic Book 3:\n";
cout<<"Full Comic Book Title: ";
getline(cin , Comictitle3);

//getting when the comic was issued
cout<<"Issue Number: ";
cin >> Issue3;
cin.ignore();

//finding out the year
cout<<"Year Published: ";
cin >> YearPublished3;
cin.ignore();

//using getline to get the author full name
cout<<"Full Author Name: ";
getline(cin , Authorname3);

//knowing the rating
cout<<"Comic Ranking: ";
cin >>ComicRating3;
cin.ignore();
cout << "\n";

// This will clear the text displayed from the previous cout statement
system("clear||cls");

//outputing comic 1 information
cout <<"Comic Book 1:\n";
cout <<Comictitle1 << ", issue " << Issue1 << endl;
cout <<"Published " << YearPublished1 << endl;
cout <<"Written by " << Authorname1 << endl;
cout <<"Ranking: " << ComicRating1 << endl << endl;

//outputing comic 2 information
cout <<"Comic Book 2:\n";
cout <<Comictitle2 << ", issue " << Issue2 << endl;
cout <<"Published " << YearPublished2 << endl;
cout <<"Written by " << Authorname2 << endl;
cout <<"Ranking: " << ComicRating2 << endl << endl;

//outputing comic 3 information
cout <<"Comic Book 3:\n";
cout <<Comictitle3 << ", issue " << Issue3 << endl;
cout <<"Published " << YearPublished3 << endl;
cout <<"Written by " << Authorname3 << endl;
cout <<"Ranking: " << ComicRating3 << endl;

return 0;
}