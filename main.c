#include <stdio.h>
#include "chax/with.h"
#include "chax/autoprintf.h"

int main(void) {
  _chax_with (int i = 69) {
    _chax_autoprintf(i);
  }
}