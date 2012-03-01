#include "document.hpp"

namespace Sass {
  using std::string;
  using std::stringstream;
  
  string Document::emit_css(CSS_Style style) {
    stringstream output;
    for (int i = 0; i < statements.size(); ++i) {
      switch (style) {
      // case nested:
      //   statements[i].emit_nested_css(output, "");
      //   break;
      case expanded:
        statements[i].emit_expanded_css(output, "");
        break;
      }
    }
    return output.str();
  }
  
}