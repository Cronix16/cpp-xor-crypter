#include <iostream>
#include <fstream>
#include <vector>

 int main(int argc, char* argv[]) {
   if(argc<2) {
     std::cerr <<"Use: ./crypter <filename>"<< std::endl;
     return 1;
   }
   std::ifstream inFile(argv[1], std::ios::binary);
   if(!inFile) {
     std::cerr <<"Error: Could not open "<< argv[1] << std::endl;
     return 1;
   }
   std::vector<char> buffer((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
   inFile.close();
   char secret_key = 'K';
   for(size_t i = 0; i<buffer.size(); i++) {
     buffer[i] = buffer[i] ^ secret_key;
   }
   std::ofstream outFile("infected_payload.bin", std::ios::binary);
   outFile.write(buffer.data(), buffer.size());
   outFile.close();
   std::cout <<"File encrypted and saved as 'infected_payload.bin'"<< std::endl;
   return 0;
 }
