#include "hellotriangle.h"

#define UNUSED(x) (void)(x);

char *handle(char *env, char *msg) {
    UNUSED(env)
    UNUSED(msg)

    return (char *)run_hello_triangle();
}

int main(int argc, char *argv[]) {
  return 0;
}
