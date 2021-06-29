#include <string>
namespace MainHandler {
  void LoadSentry();
  namespace Discord {
    void Init();
    void Update(std::string state, std::string detail);
  }
}
