#include "argparse/argparse.hpp"

int main(int argc, char *argv[]) {
  using namespace argparse;

  ArgumentParser parser("hwm");
  parser.add_description("Hardware monitor");

  try {
    parser.parse_args(argc, argv);
  } catch (const std::exception &err) {
    std::cerr << err.what() << '\n';
    std::cerr << parser;
    return 1;
  }

  return 0;
}
