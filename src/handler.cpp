#include <handler.h>
#include <sentry.h>
#include <discord_rpc.h>
#include <discord_register.h>

void MainHandler::LoadSentry() {
  sentry_options_t *options = sentry_options_new();
  sentry_options_set_dsn(options, "https://e96a522911724a0f908227eceb3936f4@o125145.ingest.sentry.io/5834480");
  //sentry_options_set_release(options, "my-project-name@2.3.12");
  sentry_init(options);
}
void MainHandler::Discord::Init() {
  DiscordEventHandlers handlers;
  memset(&handlers, 0, sizeof(handlers));
  Discord_Initialize("854404100342153236", &handlers, 1, "1234");
}
void MainHandler::Discord::Update(std::string state,std::string detail) {
  DiscordRichPresence discordPresence;
  memset(&discordPresence, 0, sizeof(discordPresence));
  discordPresence.state = state.c_str();
  discordPresence.details = detail.c_str();
  Discord_UpdatePresence(&discordPresence);
}
