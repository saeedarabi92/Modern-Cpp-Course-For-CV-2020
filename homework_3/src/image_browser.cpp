/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2020-12-30 22:47:50
 * @ Email: arabi@iastate.edu
 **********************************/

#include "../api/image_browser.hpp"

#include <iostream>
#include <string>

#include "../api/html_writer.hpp"

void image_browser::AddFullRow(const ImageRow &rows, bool first_row) {
  for (const auto &row : rows) {
    const std::string &image_name = std::get<0>(row);
    const float &image_score = std::get<1>(row);
    const std::string &image_src = "Data/" + image_name;
    html_writer::AddColumn(image_name, image_src, image_score, first_row);
    first_row = false;
  }
}

void image_browser::CreateImageBrowser(
    const std::string &title, const std::string &stylesheet,
    const std::vector<image_browser::ImageRow> &rows) {
  html_writer::OpenDocument();
  html_writer::AddTitle(title);
  html_writer::AddCSSStyle(stylesheet);
  html_writer::AddBody();
  bool is_first_row = true;
  for (const auto &image_row : rows) {
    html_writer::AddRow();
    if (is_first_row) {
      image_browser::AddFullRow(image_row, true);
      is_first_row = false;
    } else {
      image_browser::AddFullRow(image_row, false);
    }
    html_writer::CloseRow();
  }
  html_writer::CloseBody();
  html_writer::CloseDocument();
}
