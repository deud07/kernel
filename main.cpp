#include <iostream>
#include <fstream>
using namespace std;

bool kernal_enabled = true;
string kernal_name = "LegacyKernal";
string kernal_version = "1.0.0";
string command_input;
string null = "";

void command_parser(string input){
    if(input == "help"){
        cout << "=======HELP=======" << endl;
    }
    if(input == "kill"){
        kernal_enabled = false;
    }
}

void command_operator(){
    getline(cin, command_input);
    command_parser(command_input);
}

int main(){
    while(kernal_enabled == true){
        command_operator();
    }
}
