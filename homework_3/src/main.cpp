/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2020-12-30 22:47:50
 * @ Email: arabi@iastate.edu
 **********************************/

#include <fstream>
#include <iostream>
#include <random>

#include "../api/html_writer.hpp"
#include "../api/image_browser.hpp"

float get_random_score() {
  static std::default_random_engine e;
  const int upper_bound = 100;
  const int lower_bound = 0;
  static std::uniform_real_distribution<> dis(lower_bound, upper_bound);
  return dis(e);
}
int main() {
  std::string title = "Saeed html file!";
  std::string stylesheet_src = R"("style.css")";
  int cnt = 0;
  std::vector<image_browser::ImageRow> rows_vector;
  for (int row_num = 0; row_num < 3; row_num++) {
    std::vector<image_browser::ScoredImage> cols_vector;
    for (int col_num = 0; col_num < 3; col_num++) {
      float image_score = get_random_score();
      std::string image_name = "000000.png";
      std::string change_str = std::to_string(cnt);
      image_name.replace(3, 1, change_str);
      cols_vector.emplace_back(
          image_browser::ScoredImage{image_name, image_score});
      cnt++;
    }
    rows_vector.emplace_back(image_browser::ImageRow{
        cols_vector[0], cols_vector[1], cols_vector[2]});
  }
  image_browser::CreateImageBrowser(title, stylesheet_src, rows_vector);
  return 0;
}