#include <main.h>


void MainHandler::LoadSentry() {
  sentry_options_t *options = sentry_options_new();
  sentry_options_set_dsn(options, "https://e96a522911724a0f908227eceb3936f4@o125145.ingest.sentry.io/5834480");
  //sentry_options_set_release(options, "my-project-name@2.3.12");
  sentry_init(options);
}
