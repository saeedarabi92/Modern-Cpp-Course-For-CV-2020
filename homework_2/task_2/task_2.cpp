/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2020-12-22 13:08:18
 * @ Email: arabi@iastate.edu
 **********************************/

// import header files
#include <cstdlib>
#include <iostream>
#include <numeric>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  // Check if the number of arguments are valid
  if (argc != 3) {
    cerr << "The number of arguments are not valid, exiting the program!"
         << endl;
    return EXIT_FAILURE;
  }
  vector<string> names;
  vector<string> ext;
  for (int n = 1; n < argc; n++) {
    string str_1;
    string str_2;
    bool delimiter_detected = false;
    for (int i = 0; i < sizeof(argv[n]); i++) {
      if (delimiter_detected == false && argv[n][i] != '.') {
        str_1.push_back(argv[n][i]);
      } else if (argv[n][i] == '.') {
        delimiter_detected = true;
      } else {
        str_2.push_back(argv[n][i]);
      }
    }
    names.push_back(str_1);
    ext.push_back(str_2);
    str_1.clear();
    str_2.clear();
  }

  string f_ext = ext[0];
  string s_ext = ext[1];
  vector<int> output;
  if ((strcmp(f_ext.c_str(), string("txt").c_str()) == 0) &&
      (strcmp(s_ext.c_str(), string("txt").c_str()) == 0)) {
    for (auto& s : names) {
      stringstream parser(s);
      int x = 0;
      parser >> x;
      output.push_back(x);
    }
    double avg =
        (accumulate(output.begin(), output.end(), 0LL)) * 1.0 / output.size();
    cout << avg << endl;
  }

  // for (auto& s : output) {
  //   cout << s << endl;
  // }
  return 0;
}
