/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2020-12-30 22:47:50
 * @ Email: arabi@iastate.edu
 **********************************/

#include "../api/html_writer.hpp"

#include <iostream>
#include <string>

void html_writer::OpenDocument() {
  std::cout << "<!DOCTYPE html>" << std::endl;
  std::cout << "<html>" << std::endl;
}

void html_writer::CloseDocument() { std::cout << "</html>" << std::endl; }

void html_writer::AddCSSStyle(const std::string& stylesheet) {
  std::string rel = R"("stylesheet")";
  std::string type = R"("text/css")";
  std::cout << "<head>" << std::endl;
  std::cout << "<link rel=" << rel << " "
            << "type=" << type << " "
            << "href=" << stylesheet << " />" << std::endl;
  std::cout << "</head>" << std::endl;
}

void html_writer::AddTitle(const std::string& title) {
  std::cout << "<title>" << title << "</title>" << std::endl;
};

void html_writer::AddBody() { std::cout << "<body>" << std::endl; }
void html_writer::CloseBody() { std::cout << "</body>" << std::endl; }

void html_writer::AddRow() { std::cout << R"(<div class="row">)" << std::endl; }

void html_writer::CloseRow() { std::cout << "</div>" << std::endl; }

void html_writer::AddColumn(const std::string& imagename,
                            const std::string& imagesrc,
                            const float& imagescore, bool& style) {
  if (style) {
    std::cout << "<div class="
              << R"("column")"
              << " style="
              << R"("border : 5px solid green;">)" << std::endl;
  } else {
    std::cout << "<div class="
              << R"("column">)" << std::endl;
  }
  std::cout << "<h2>" << imagename << "</h2>" << std::endl;
  std::cout << "<img src ="
            << "\"" << imagesrc << "\""
            << " />" << std::endl;
  float non_const_imagescore = imagescore;
  std::cout << "<p>score = " << std::setprecision(2) << std::fixed
            << non_const_imagescore << "</p>" << std::endl;
  std::cout << "</div>" << std::endl;
}
