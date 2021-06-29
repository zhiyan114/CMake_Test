#include <main.h>

std::string userinput;
int main() {
MainHandler::LoadSentry();
MainHandler::Discord:Init();
MainHandler::Discord::Update("","User Input");
std::cout << "Type the string to input: ";
std::getline(std::cin, userinput);
MainHandler::Discord::Update(userinput);
sentry_capture_event(sentry_value_new_message_event(SENTRY_LEVEL_INFO,"User Input",userinput.c_str()));
std::cout << ("Your Input: "+userinput+"\n").c_str();
std::cout << "\nPress enter to close the software...";
std::getline(std::cin, userinput);
sentry_close();
return 0;
}
