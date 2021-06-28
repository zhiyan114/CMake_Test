#include <main.h>

std::string test = "Some Test Message";
int main() {
MainHandler::LoadSentry();
sentry_capture_event(sentry_value_new_message_event(SENTRY_LEVEL_INFO,"Printed Result",test.c_str()));
std::cout << test.c_str();
sentry_close();
return 0;
}
