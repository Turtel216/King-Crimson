#include "error.h"
#include "exit_codes.h"

// starts up the program according to the user input and return an
// succes/failure exit code
int handle_input(char *argv[], int argc);

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    display_error("More arguments please\n");
    return EXIT_FAILURE;
  }

  return handle_input(argv, argc);
}

// starts up the program according to the user input and return an
// succes/failure exit code
int handle_input(char *argv[], int argc) {
  switch (argc) {
  case 2:
    return EXIT_SUCCESS;
    break;
  default:
    display_error("Invalid number of arguments arguments");
    return EXIT_FAILURE;
    break;
  }

  return EXIT_SUCCESS;
}
