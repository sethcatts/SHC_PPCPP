#include<iostream>
using namespace std;

//main
int main() {

}

//Common built in types
int number = 39;
double dub = 3.5;
char chara = 'a';
string str = "abc";
bool value = false;

//Get user input
int userInput() {
   cout << "Name: ";
   string name;
   cin >> name;
   cout << "Name is " << name;
}

int age() {
   cout << "Enter your first name and age\n";
   string first_name = "???";
   int age = 0;

   //Only inputing correct types in order will set variables[!]
   cin >> first_name >> age;
   cout << "Hello, " << first_name << " (age " << age << ")\n";
}
