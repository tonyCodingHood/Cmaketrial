#include <fstream>
#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string data;

  std::ofstream write;     // instatiate ofstream i.e create an ofstream object
  write.open("cosmo.txt"); // use the object  to invoke the open command
  // now we write
  std::cout << "I'll take your input, enjoy writing Ken :) " << std::endl
            << "I believe you love movies?" << std::endl
            << "What's your favourite movie?" << std::endl;
   std::getline (std::cin, data); // we use getLine to read the whole line
  write << data;

  write.close();

  // now I'm gonna work on the output

  std::ifstream output;
  output.open("cosmo.txt");
  std::cout << "The following was your response" << std::endl;
  output >> data;

  std::cout << data << std::endl;

  // finally I'm gonna close the file
  output.close();
  return 0;
}
