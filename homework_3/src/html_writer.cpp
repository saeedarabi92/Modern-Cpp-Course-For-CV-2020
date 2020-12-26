#include "html_writer.hpp"

#include <fstream>
#include <iostream>
#include <string>

void html_writer::OpenDocument(std::fstream& file) {
  file.open("app.html",
            std::fstream::in | std::fstream::out | std::fstream::app);
  file << "<!DOCTYPE html>" << std::endl;
  file << "<html>" << std::endl;
}

void html_writer::CloseDocument(std::fstream& file) {
  file << "</html>" << std::endl;
  file.close();
}

void html_writer::AddCSSStyle(const std::string& stylesheet,
                              std::fstream& file) {
  std::string rel = R"("stylesheet")";
  std::string type = R"("text/css")";
  file << "<head>" << std::endl;
  file << "<link rel=" << rel << " "
       << "type=" << type << " "
       << "href=" << stylesheet << " />" << std::endl;
  file << "</head>" << std::endl;
}

void html_writer::AddTitle(const std::string& title, std::fstream& file) {
  file << "<title>" << title << "</title>" << std::endl;
};

void html_writer::AddBody(std::fstream& file) { file << "<body>" << std::endl; }
void html_writer::CloseBody(std::fstream& file) {
  file << "</body>" << std::endl;
}

void html_writer::AddRow(std::fstream& file) {
  file << R"(<div class="row">)" << std::endl;
}

void html_writer::CloseRow(std::fstream& file) {
  file << "</div>" << std::endl;
}

void html_writer::AddColumn(std::fstream& file, const std::string& imagename,
                            const std::string& imagesrc,
                            const float& imagescore, const bool& style) {
  //   file << "</div>" << std::endl;
  if (style) {
    file << "<div class="
         << R"("column")"
         << " style="
         << R"("border : 5px solid green;">)" << std::endl;
  } else {
    file << "<div class="
         << R"("column">)" << std::endl;
  }
  file << "<h2>" << imagename << "</h2>" << std::endl;
  file << "<img src ="
       << "\"" << imagesrc << "\""
       << " />" << std::endl;
  file << "<p>score = " << imagescore << "</p>" << std::endl;
  file << "</div>" << std::endl;
}
